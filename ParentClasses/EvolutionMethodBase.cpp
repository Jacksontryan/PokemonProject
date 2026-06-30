//
// Created by jacksonryan on 6/24/26.
//
#include "EvolutionMethodBase.h"

#include <utility>

EvolutionMethodBase::EvolutionMethodBase(std::string name, int id/*, SpeciesBase* evolution*/) : name(std::move(name)), id(id)/*, evolution(evolution)*/ {}

EvolutionMethodBase::~EvolutionMethodBase() = default;

int EvolutionMethodBase::getId() const {
    return this->id;
}

std::string EvolutionMethodBase::getName() const {
    return this->name;
}
