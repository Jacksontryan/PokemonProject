//
// Created by jacksonryan on 6/30/26.
//

#ifndef POKEMONPROJECT_TYPE_H
#define POKEMONPROJECT_TYPE_H

#include <string>
#include <vector>

#include "../SmartPointer.h"

class Type {
protected:
    std::string name;
    int id;
    std::vector<double> weaknesses;
    size_t size;
public:
    Type();
    Type(std::string name, int id, std::vector<double> weaknesses, size_t size);

    virtual ~Type()= default;

    [[nodiscard]] virtual std::string getName() const;
    [[nodiscard]] virtual int getId() const;
    [[nodiscard]] virtual std::vector<double>& getWeaknesses();
    [[nodiscard]] virtual double getWeakness(const Type& type);

};


#endif //POKEMONPROJECT_TYPE_H
