//
// Created by jacksonryan on 6/27/26.
//

#ifndef POKEMONPROJECT_BITMANAGER_H
#define POKEMONPROJECT_BITMANAGER_H

#include <vector>

#include "Byte.h"

class BitManager {

    std::vector<Byte*> bytes;

public:

    BitManager() = default;

    void createBit(bool value, Bit* bit) {
        Byte* emptyByte;
        bool found = false;
        int pos = 0;
        while (!found && pos < bytes.size()) {
            if (!bytes[pos]->filled()) {
                emptyByte = bytes[pos];
                found = true;
            }
            pos++;
        }

        if (!found) {
            Byte b = Byte();
            emptyByte = &b;
            bytes.push_back(emptyByte);
        }

        pos = emptyByte->firstEmptyBit();

        emptyByte->linkBit(pos, bit);

        emptyByte->assignBit(pos, value);

    }

    void setBit(bool value, Bit* bit) {
        Byte* byte;
        bool found = false;
        int pos = 0;
        while (!found && pos < bytes.size()) {
            if (bytes[pos]->bitLinked(bit) > -1) {
                byte->assignBit(bytes[pos]->bitLinked(bit), value);
            }
        }
    }

};


#endif //POKEMONPROJECT_BITMANAGER_H
