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
    std::string& name;
    int id;
    public:
    EvolutionMethodBase(std::string &name, int id) : name(name), id(id) {}
    int getId();
    std::string getName();
};


#endif //POKEMONPROJECT_EVOLUTIONMETHODBASE_H
