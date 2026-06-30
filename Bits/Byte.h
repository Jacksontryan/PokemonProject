//
// Created by jacksonryan on 6/27/26.
//

#ifndef POKEMONPROJECT_BYTE_H
#define POKEMONPROJECT_BYTE_H
#include <iostream>

#include "Bit.h"


class Byte {
    unsigned char byte;

    Bit** bits = new Bit*[8];

public:

    Byte() {

        byte = 0;

        for (int i = 0; i < 8; i++) {
            bits[i] = nullptr;
        }

    }

    ~Byte() {
        delete[] bits;
    }

    [[nodiscard]] bool filled() const {
        for (int i = 0; i < 8; i++) {
            if (bits[i] == nullptr) {
                return false;
            }
        }
        return true;
    }

    void assignBit(int pos, bool value) {
        if (pos < 0 || pos >= 8) {
            throw std::out_of_range("Position out of range");
        }if (bits[pos] == nullptr) {
            throw std::out_of_range("Bit has not been initialized");
        }
        if (value == true) {
            byte = byte | (1 << pos);
        }else {
            byte = byte & ~(1 << pos);
        }
    }

    [[nodiscard]] bool getBit(int pos) const {
        if (pos < 0 || pos >= 8) {
            throw std::out_of_range("Position out of range");
        }
        return (byte >> pos) & 1;
    }

    void linkBit(int pos, Bit* bit) {
        if (pos < 0 || pos >= 8) {
            throw std::out_of_range("Position out of range");
        }
        bits[pos] = bit;
    }

    void unlinkBit(int pos) {
        if (pos < 0 || pos >= 8) {
            throw std::out_of_range("Position out of range");
        }
        this->assignBit(pos, false);
        bits[pos] = nullptr;
    }

    bool containsBit(const Bit* bit) const {
        for (int i = 0; i < 8; i++) {
            if (bits[i] == bit) {
                return true;
            }
        }
        return false;
    }

    [[nodiscard]] unsigned char asChar() const {
        return byte;
    }

    [[nodiscard]] int asInt() const {
        return byte;
    }

    int firstEmptyBit() {
        for (int i = 0; i < 8; i++) {
            if (bits[i] == nullptr) {
                return i;
            }
        }
        std::cout << "All bits filled"<<std::endl;
        return -1;
    }

    int bitLinked(Bit* bit) {
        for (int i = 0; i < 8; i++) {
            if (bits[i] == bit) {
                return i;
            }
        }
        return -1;
    }

};


#endif //POKEMONPROJECT_BYTE_H
