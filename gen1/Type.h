//
// Created by jacksonryan on 6/11/26.
//

#ifndef POKEMONPROJECT_TYPE_H
#define POKEMONPROJECT_TYPE_H

#include <iostream>

#include "../ParentClasses/TypeBase.h"
#include <string>
#include <vector>

class Type : public TypeBase {
public:
    Type() : TypeBase("",-1,new double[]{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 15) {
        std::cout << "Constructing Type"<< std::endl;
    }
    Type(const std::string& name, int id, double* weaknesses);
    Type(const Type& other);
    Type &operator=(Type * p);

    double getWeakness(TypeBase *type) override;

    static Type* instantiateTypes();

};


#endif //POKEMONPROJECT_TYPE_H
