//
// Created by jacksonryan on 6/22/26.
//
#include "TypeBase.h"

int TypeBase::getId() const {
    return this->id;
}

std::string TypeBase::getName() const {
    return this->name;
}

double *TypeBase::getWeaknesses() {
    return this->weaknesses.get();
}
