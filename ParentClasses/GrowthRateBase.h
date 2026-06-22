//
// Created by jacksonryan on 6/7/26.
//

#ifndef POKEMONPROJECT_GROWTHRATEBASE_H
#define POKEMONPROJECT_GROWTHRATEBASE_H
#include <string>

class GrowthRateBase {

protected:
    std::string& name;
    int* points;

public:
    GrowthRateBase(std::string& name) : name(name), points(nullptr) {};

    std::string getName();

    int* getPoints();

};


#endif //POKEMONPROJECT_GROWTHRATEBASE_H
