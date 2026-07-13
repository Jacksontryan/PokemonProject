//
// Created by jacksonryan on 6/30/26.
//

#ifndef POKEMONPROJECT_GEN1TYPE_H
#define POKEMONPROJECT_GEN1TYPE_H
#include "../SmartPointer.h"
#include "../ParentClasses/Type.h"


class Gen1Type : public Type {

    Gen1Type(const std::string& name, int id, double* weaknesses);

    public:

    Gen1Type();

    static SmartPointer<Gen1Type> instantiateTypes();

    static Gen1Type normal();
    static Gen1Type fire();
    static Gen1Type water();
    static Gen1Type electric();
    static Gen1Type grass();
    static Gen1Type ice();
    static Gen1Type fighting();
    static Gen1Type poison();
    static Gen1Type ground();
    static Gen1Type flying();
    static Gen1Type psychic();
    static Gen1Type bug();
    static Gen1Type rock();
    static Gen1Type ghost();
    static Gen1Type dragon();

    Gen1Type& operator=(const Gen1Type& type);
    bool operator==(const Gen1Type& type);
};


#endif //POKEMONPROJECT_GEN1TYPE_H
