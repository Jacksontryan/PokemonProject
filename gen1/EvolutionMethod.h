//
// Created by jacksonryan on 6/22/26.
//

#ifndef POKEMONPROJECT_EVOLUTIONMETHOD_H
#define POKEMONPROJECT_EVOLUTIONMETHOD_H
#include <string>

#include "../ParentClasses/EvolutionMethodBase.h"


class EvolutionMethodBase;

class EvolutionMethod : public EvolutionMethodBase {

    //EvolutionMethod() : EvolutionMethodBase("", -1) {}

    public:
    EvolutionMethod(const std::string& name, int id);
    static EvolutionMethod* instantiateEvolutionMethods();

};


#endif //POKEMONPROJECT_EVOLUTIONMETHOD_H
