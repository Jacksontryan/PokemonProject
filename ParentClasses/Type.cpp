//
// Created by jacksonryan on 6/30/26.
//

#include "Type.h"

#include <iostream>
#include <utility>

Type::Type(std::string name, int id, double weaknesses[], size_t size) : name(std::move(name)), id(id), weaknesses(SmartPointer<double>::arrayPointer(weaknesses, size)), size(size) {

    std::cout << "Constructor called for Type: " << this->name << std::endl;

    delete [] weaknesses;

    std::cout << "Original weakness array deleted" << std::endl;
}

std::string Type::getName() const {
    return this->name;
}

int Type::getId() const {
    return this->id;
}

SmartPointer<double> &Type::getWeaknesses() {
    return this->weaknesses;
}

SmartPointer<double> Type::getWeaknessArraySize() const {
    return this->weaknesses;
}

double Type::getWeakness(const Type& type) {
    if (type.getId() < 0 || type.getId() >= this->size) {}
    return weaknesses[type.getId()];
}
