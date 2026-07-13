//
// Created by jacksonryan on 7/2/26.
//

#ifndef POKEMONPROJECT_MOVE_H
#define POKEMONPROJECT_MOVE_H

#include <string>

#include "Type.h"

class Move {
    std::string name;
    int damage;
    int accuracy;
    Type type;
};


#endif //POKEMONPROJECT_MOVE_H
