//
// Created by jacksonryan on 6/7/26.
//
#pragma once

#ifndef POKEMONPROJECT_EVOLUTIONMETHODBASE_H
#define POKEMONPROJECT_EVOLUTIONMETHODBASE_H
#include <string>
using namespace std;

class EvolutionMethodBase {
    protected:
    const std::string name;
    const int id;
    public:
    EvolutionMethodBase(const std::string name, int id);
    virtual ~EvolutionMethodBase();
    virtual int getId() const;
    virtual const std::string getName();
    static EvolutionMethodBase* initializeEvolutionMethods(){return new EvolutionMethodBase("",-1);}
};


#endif //POKEMONPROJECT_EVOLUTIONMETHODBASE_H
