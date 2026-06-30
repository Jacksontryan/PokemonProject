//
// Created by jacksonryan on 6/22/26.
//
#include "TypeBase.h"

#include <iostream>
#include <utility>

TypeBase::TypeBase(std::string  name, int id, const double *weaknesses, size_t size) : name(std::move(name)), id(id), numberWeaknesses(size) {
    std::cout<<"Type base constructor called"<<std::endl;
    this->weaknesses = new double[size];
    for (int i = 0; i < size; i++) {
        this->weaknesses[i] = weaknesses[i];
    }
};

int TypeBase::getId() const {
    return this->id;
}

std::string TypeBase::getName() const {
    return this->name;
}

double *TypeBase::getWeaknesses() const {
    return this->weaknesses;
}

double TypeBase::getWeakness(TypeBase *type) {
    if (type->getId() >= this->numberWeaknesses || type->getId() < 0) {
        return 1000.0001;
    }
    return this->weaknesses[type->getId()];
}
