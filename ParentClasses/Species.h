//
// Created by jacksonryan on 7/16/26.
//

#ifndef POKEMONPROJECT_SPECIES_H
#define POKEMONPROJECT_SPECIES_H
#include <string>
#include <vector>

#include "GrowthRate.h"
#include "Type.h"


class Species {

    std::string name;
    int id;
    std::string species;
    Type type1;
    Type type2;
    double height;
    double weight;
    int catchRate;
    int baseExperience;
    GrowthRate growthRate;
    std::vector<int>stats;


};


#endif //POKEMONPROJECT_SPECIES_H
