//
// Created by jacksonryan on 6/30/26.
//

#ifndef POKEMONPROJECT_TYPE_H
#define POKEMONPROJECT_TYPE_H

#include <string>

#include "../SmartPointer.h"

class Type {
protected:
    std::string name;
    int id;
    SmartPointer<double> weaknesses;
    size_t size;
public:
    Type(std::string name, int id, double weaknesses[], size_t size);

    virtual ~Type()= default;

    [[nodiscard]] virtual std::string getName() const;
    [[nodiscard]] virtual int getId() const;
    [[nodiscard]] virtual SmartPointer<double>& getWeaknesses();
    [[nodiscard]] virtual SmartPointer<double> getWeaknessArraySize() const;
    [[nodiscard]] virtual double getWeakness(const Type& type);

};


#endif //POKEMONPROJECT_TYPE_H
