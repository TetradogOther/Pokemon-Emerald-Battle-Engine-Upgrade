#include "types.h"
#include "defines.h"
#include "battle_locations.h"
#include "battle_structs.h"
#include "vanilla_functions.h"
#include "new_battle_struct.h"

extern struct move_info move_table[1024];
u8 is_of_type(u8 bank, u8 type);
u32 percent_boost(u32 number, u16 percent);
u32 percent_lose(u32 number, u16 percent);
#define MOVE_PHYSICAL 0
#define MOVE_SPECIAL 1
#define MOVE_STATUS 2

void accuracy_calc()
{
    u32 jump_loc = read_word(battlescripts_curr_instruction + 1);
    s16 arg = read_hword(battlescripts_curr_instruction + 5);

    if ((arg + 2) > 1)
    {
        if (!does_protect_affect_move(current_move) && !accuracy_helper_function(current_move))
        {
            u8 evs_buff = battle_participants[bank_target].evasion_buff;
            if (current_move == MOVE_SACRED_SWORD || current_move == MOVE_CHIP_AWAY || (battle_participants[bank_attacker].ability_id == ABILITY_UNAWARE && has_ability_effect(bank_attacker, 0, 1)))
                evs_buff = 6;
            else if (evs_buff > 6 && (battle_participants[bank_target].status2 & 0x20000000 || new_battlestruct.ptr->bank_affecting[bank_target].miracle_eyed))
                evs_buff = 6;
            u8 accuracy_buff = battle_participants[bank_attacker].acc_buff;
            if (battle_participants[bank_target].ability_id == ABILITY_UNAWARE && has_ability_effect(bank_target, 1, 1))
                accuracy_buff = 6;
            u8 move_accuracy = move_table[current_move].accuracy;
            s8 buff = accuracy_buff + 6 - evs_buff;
            if (buff < 0)
                buff = 0;
            else if (buff > 0xC)
                buff = 0xC;

            if ((current_move == MOVE_THUNDER || current_move == MOVE_HURRICANE) && weather_abilities_effect() && (battle_weather.flags.sun || battle_weather.flags.harsh_sun || battle_weather.flags.permament_sun))
            {
                move_accuracy = 50;
            }
            u32 accuracy = __udivsi3(move_accuracy * fraction_stat_buffs2[buff].numerator, fraction_stat_buffs2[buff].denumenator);
            if (has_ability_effect(bank_attacker, 0, 1))
            {
                switch (battle_participants[bank_attacker].ability_id)
                {
                case ABILITY_COMPOUND_EYES:
                    accuracy = percent_boost(accuracy, 30);
                    break;
                case ABILITY_HUSTLE:
                    if (move_table[current_move].split == MOVE_PHYSICAL)
                    {
                        accuracy = percent_lose(accuracy, 20);
                    }
                    break;
                }
            }
            if (ability_battle_effects(13, bank_attacker, ABILITY_VICTORY_STAR, 0, 0))
            {
                accuracy = percent_boost(accuracy, 10);
            }
            if (has_ability_effect(bank_target, 1, 1))
            {
                switch (battle_participants[bank_target].ability_id)
                {
                case ABILITY_SAND_VEIL:
                    if (battle_weather.flags.sandstorm || battle_weather.flags.permament_sandstorm)
                        accuracy = percent_lose(accuracy, 25);
                    break;
                case ABILITY_SNOW_CLOAK:
                    if (battle_weather.flags.hail || battle_weather.flags.permament_hail)
                        accuracy = percent_lose(accuracy, 25);
                    break;
                case ABILITY_TANGLED_FEET:
                    if (battle_participants[bank_target].status2 & 7)
                        accuracy = percent_lose(accuracy, 20);
                    break;
                }
            }
            if (get_item_effect(bank_target, 1) == ITEM_EFFECT_BRIGHTPOWDER)
                accuracy = percent_lose(accuracy, 10);
            switch (get_item_effect(bank_attacker, 1))
            {
            case ITEM_EFFECT_WIDELENS:
                accuracy = percent_boost(accuracy, 10);
                break;
            case ITEM_EFFECT_ZOOMLENS:
                if (get_bank_turn_order(bank_target) < get_bank_turn_order(bank_attacker))
                    accuracy = percent_boost(accuracy, 20);
                break;
            }    
            
            if (__umodsi3(rng(), 100) + 1 > accuracy)
            {
                move_outcome.missed = 1;
                if (battle_flags & 1)
                {
                    if (move_table[current_move].target == 0x8 || move_table[current_move].target == 0x20)
                    {
                        battle_communication_struct.field6 = 2;
                    }
                    else
                    {
                        battle_communication_struct.field6 = 0;
                    }
                }
                check_wonderguard_levitate_damage();
            }
            jump_if_move_has_no_effect(7, current_move);
        }
    }
    else
    {
        if ((status3[bank_target].always_hits || status3[bank_target].always_hits_unkown) && arg == 0xFFFF && disable_structs[bank_target].always_hits_bank == bank_attacker)
        {
            battlescripts_curr_instruction += 7;
        }
        else
        {
            if (status3[bank_target].on_air || status3[bank_target].underground || status3[bank_target].underwater || new_battlestruct.ptr->bank_affecting[bank_target].sky_drop_attacker || new_battlestruct.ptr->bank_affecting[bank_target].sky_drop_target)
            {
                battlescripts_curr_instruction = (void*)jump_loc;
            }
            else
            {
                if (!does_protect_affect_move(0))
                {
                    battlescripts_curr_instruction += 7;
                }
            }
        }
    }
    return;
}