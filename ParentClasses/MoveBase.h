//
// Created by jacksonryan on 6/8/26.
//

#ifndef POKEMONPROJECT_MOVEBASE_H
#define POKEMONPROJECT_MOVEBASE_H
#include <string>

class MoveBase {

protected:
    std::string name;
    double accuracy;
    int damage;
    MoveBase::DamageType damageType;

public:
    enum DamageType {
        Physical,
        Special,
        Status
    };

    MoveBase(std::string name, double accuracy, int damage) : name(name), accuracy(accuracy), damage(damage) {}

    std::string getName();

    double getAccuracy();

    int getDamage();

    MoveBase::DamageType getDamageType();
    
};


#endif //POKEMONPROJECT_MOVEBASE_H
