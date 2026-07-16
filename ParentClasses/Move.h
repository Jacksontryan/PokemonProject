//
// Created by jacksonryan on 7/2/26.
//

#ifndef POKEMONPROJECT_MOVE_H
#define POKEMONPROJECT_MOVE_H

#include <string>

#include "Type.h"

class Move {

    protected:
    std::string name;
    int damage;
    Type type;

    public:
    Move() {
        this->name = "Struggle";
        this->damage = 50;
        this->type = Type();
    }

    std::string getName() {
        return this->name;
    }

    [[nodiscard]] int getDamage() const {
        return this->damage;
    }

    Type getType() {
        return this->type;
    }

};


#endif //POKEMONPROJECT_MOVE_H
