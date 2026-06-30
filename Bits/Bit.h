//
// Created by jacksonryan on 6/27/26.
//

#ifndef POKEMONPROJECT_BIT_H
#define POKEMONPROJECT_BIT_H
#include <cstddef>
#include <stdexcept>
#include <vector>

#include "BitManager.h"
#include "Byte.h"


class Bit {

    static BitManager* manager;

public:

    Bit() {
        manager->createBit(false, this);
    }

    Bit(bool val) {
        manager->createBit(val, this);
    }

    void setTrue() {

    }

    void setFalse() {

    }
};


#endif //POKEMONPROJECT_BIT_H