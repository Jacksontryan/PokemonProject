//
// Created by jacksonryan on 6/11/26.
//

#ifndef POKEMONPROJECT_TYPE_H
#define POKEMONPROJECT_TYPE_H

#include "../ParentClasses/TypeBase.h"
#include <string>

class Type : public TypeBase {
public:

    Type(const std::string name, int id, double* weaknesses);
    Type(const Type& other);
    double getWeakness(Type* type);
    Type &operator=(Type * p);

    double getWeakness(TypeBase *type);

    static std::unique_ptr<Type[]> instantiateTypes();

};


#endif //POKEMONPROJECT_TYPE_H
