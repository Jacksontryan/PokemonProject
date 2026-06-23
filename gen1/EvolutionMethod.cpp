//
// Created by jacksonryan on 6/22/26.
//

#include "EvolutionMethod.h"

EvolutionMethod::EvolutionMethod(const std::string& name, const int id) : EvolutionMethodBase(name, id) {

}

std::string EvolutionMethod::getName() const {
    return name;
}

int EvolutionMethod::getId() const {
    return id;
}

EvolutionMethod *EvolutionMethod::instantiateEvolutionMethods() {
    const string name = "Level";
    EvolutionMethod *evolutionMethod = new EvolutionMethod(name, 0);
}
