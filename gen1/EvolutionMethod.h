//
// Created by jacksonryan on 6/22/26.
//

#ifndef POKEMONPROJECT_EVOLUTIONMETHOD_H
#define POKEMONPROJECT_EVOLUTIONMETHOD_H
#include <string>

#include "../ParentClasses/EvolutionMethodBase.h"


class EvolutionMethodBase;

class EvolutionMethod : public EvolutionMethodBase {

    public:
    EvolutionMethod(std::string& name, int id);

};


#endif //POKEMONPROJECT_EVOLUTIONMETHOD_H
