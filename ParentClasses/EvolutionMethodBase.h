//
// Created by jacksonryan on 6/7/26.
//
#pragma once

#ifndef POKEMONPROJECT_EVOLUTIONMETHODBASE_H
#define POKEMONPROJECT_EVOLUTIONMETHODBASE_H
#include <string>

#include "SpeciesBase.h"
using namespace std;

class EvolutionMethodBase {
    protected:
    std::string name;
    int id;
    SpeciesBase* evolution;
    public:
    EvolutionMethodBase(std::string name, int id); //,SpeciesBase* evolution);
    virtual ~EvolutionMethodBase();
    [[nodiscard]] virtual int getId() const;
    [[nodiscard] ]virtual std::string getName() const;
};


#endif //POKEMONPROJECT_EVOLUTIONMETHODBASE_H
