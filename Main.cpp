//
// Created by jacksonryan on 6/24/26.
//

#include <iostream>
#include <ostream>

#include "SmartPointer.h"
#include "gen1/Type.h"

int main() {

    std::cout << "Creating types" << std::endl;

    Type* types = Type::instantiateTypes();

    std::cout << "Types created" << std::endl;

    SmartPointer<Type> normal = SmartPointer<Type>::referencePointer(types[0]);

    std::cout << "Normal pointer created" << std::endl;

    std::cout << "Types deleted" << std::endl;

    std::cout << normal.get().getName() << std::endl;

    delete[] types;

    return 0;
}
