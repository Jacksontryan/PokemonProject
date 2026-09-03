//
// Created by jacksonryan on 7/15/26.
//

#ifndef POKEMONPROJECT_GEN1MOVE_H
#define POKEMONPROJECT_GEN1MOVE_H
#include "Gen1Type.h"
#include "../ParentClasses/Move.h"


class Gen1Move : public Move{

    enum class Effect {

        none,

        drain_half,

        quarter_self_damage,

        several_hits,
        hit_twice,

        fly,

        charge_move,

        dig,

        earthquake,

        hi_jump_kick,
        jump_kick,

        no_miss,

        super_fang,

        trapping,

        ohko,

        boom,

        beam,

        pay_day,

        priority,

        bide,

        rage,

        thrashing,

        crit_up,

        dragon_rage,
        level_damage,

        counter,

        tenth_burn,
        third_burn,

        confusion,
        confusion_tenth,
        confusion_third,

        third_freeze,
        tenth_freeze,

        paralysis,
        tenth_paralysis,
        third_paralysis,
        body_slam,

        poisoned,
        poisoned_fifth,
        poisoned_half,
        badly_poisoned,

        sleep,

        tenth_flinch,
        third_flinch,

        speed_down_opponent,
        sharply_speed_down_opponent,
        speed_down_third_opponent,

        attack_down_opponent,
        sharply_attack_down_opponent,
        attack_down_third_opponent,

        defence_down_opponent,
        sharply_defence_down_opponent,
        defence_down_third_opponent,

        special_down_opponent,
        sharply_special_down_opponent,
        special_down_third_opponent,

        evasion_down_opponent,
        sharply_evasion_down_opponent,
        evasion_down_third_opponent,

        accuracy_down_opponent,
        sharply_accuracy_down_opponent,
        accuracy_down_third_opponent,

        speed_up_opponent,
        sharply_speed_up_opponent,

        attack_up_opponent,
        sharply_attack_up_opponent,

        defence_up_opponent,
        sharply_defence_up_opponent,

        special_up_opponent,
        sharply_special_up_opponent,

        evasion_up_opponent,
        sharply_up_down_opponent,

        accuracy_up_opponent,
        sharply_accuracy_up_opponent,

        speed_down_self,
        sharply_speed_down_self,

        attack_down_self,
        sharply_attack_down_self,

        defence_down_self,
        sharply_defence_down_self,

        special_down_self,
        sharply_special_down_self,

        evasion_down_self,
        sharply_evasion_down_self,

        accuracy_down_self,
        sharply_accuracy_down_self,

        speed_up_self,
        sharply_speed_up_self,

        attack_up_self,
        sharply_attack_up_self,

        defence_up_self,
        sharply_defence_up_self,

        special_up_self,
        sharply_special_up_self,

        evasion_up_self,
        sharply_evasion_up_self,

        accuracy_up_self,
        sharply_accuracy_up_self,

        leech_seed,

        mirror_move,

        haze,

        mist,

        conversion,

        disable,

        focus_energy,

        metronome,

        mimic,

        recover,

        opponent_switch,

        substitute,

        transform,

        light_screen,

        reflect,

        rest,

        teleport

    };

    Effect effect;

    public:
    Gen1Move() {
        this->name = "Struggle";
        this->damage = 50;
        this->type = static_cast<Type>(Gen1Type::normal());
        this->effect = Effect::quarter_self_damage;
    }

    

};


#endif //POKEMONPROJECT_GEN1MOVE_H
