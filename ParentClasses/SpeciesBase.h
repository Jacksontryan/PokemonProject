//
// Created by jacksonryan on 6/7/26.
//

#ifndef POKEMONPROJECT_SPECIESBASE_H
#define POKEMONPROJECT_SPECIESBASE_H
#include <string>
#include <vector>

#include "EvolutionMethodBase.h"
#include "GrowthRateBase.h"
#include "TypeBase.h"
class EvolutionMethodBase;

class SpeciesBase {
    int id;
    std::string name;
    //TypeBase type1;
    //TypeBase type2;
    double weight;
    double height;
    int* baseStats;
    GrowthRateBase* growthRate;
    int catchRate;
    int baseEXP;
    std::vector<EvolutionMethodBase> evolutionMethod;
    std::vector<SpeciesBase> evolutions;

    std::string getName();
    int getId();
    double getWeight();
    double getHeight();
    int* getBaseStats();
    int getHealth();
    int getAttack();
    int getDefense();
    int getSpeed();
    int getCatchRate();
    int getBaseEXP();

};


#endif //POKEMONPROJECT_SPECIESBASE_H
