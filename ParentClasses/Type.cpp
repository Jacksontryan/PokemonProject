//
// Created by jacksonryan on 6/30/26.
//

#include "Type.h"

#include <iostream>
#include <utility>

Type::Type() : weaknesses() {
    this->id = 0;
    this->name = "Normal";
    this->size = 0;
}

Type::Type(std::string name, int id, std::vector<double> weaknesses, size_t size) : name(std::move(name)), id(id), weaknesses(std::move(weaknesses)), size(size) {

    std::cout << "Constructor called for Type: " << this->name << std::endl;
}

std::string Type::getName() const {
    return this->name;
}

int Type::getId() const {
    return this->id;
}

std::vector<double> &Type::getWeaknesses() {
    return this->weaknesses;
}

double Type::getWeakness(const Type& type) {
    if (type.getId() < 0 || type.getId() >= this->size) {}
    return weaknesses[type.getId()];
}
