//
// Created by jacksonryan on 6/11/26.
//

#ifndef POKEMONPROJECT_TYPEBASE_H
#define POKEMONPROJECT_TYPEBASE_H
#include <string>


class TypeBase {
protected:
    std::string& name;
    int id;
    double* weaknesses;
public:
    TypeBase(std::string name, int id, double* weaknesses) : name(name), id(id), weaknesses(weaknesses) {}
    virtual ~TypeBase();
    std::string& getName();
    int getId();
    double* getWeaknesses();
};


#endif //POKEMONPROJECT_TYPEBASE_H
