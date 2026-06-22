//
// Created by jacksonryan on 6/11/26.
//

#ifndef POKEMONPROJECT_TYPE_H
#define POKEMONPROJECT_TYPE_H

#include "../ParentClasses/TypeBase.h"
#include <string>

class Type : public TypeBase {
public:

    Type(std::string &name, int id, double* weaknesses);
    double getWeakness(Type* type);
    Type &operator=(Type * p);
    static Type** instantiateTypes();

};


#endif //POKEMONPROJECT_TYPE_H
