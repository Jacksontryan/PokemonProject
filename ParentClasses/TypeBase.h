//
// Created by jacksonryan on 6/11/26.
//

#ifndef POKEMONPROJECT_TYPEBASE_H
#define POKEMONPROJECT_TYPEBASE_H
#include <memory>
#include <string>


class TypeBase {
protected:
    const std::string name;
    const int id;
    std::unique_ptr<double[]> weaknesses;
public:
    TypeBase(const std::string name, int id, double* weaknesses) : name(name), id(id), weaknesses(weaknesses) {}
    ~TypeBase()= default;
    [[nodiscard]] virtual std::string getName() const;
    [[nodiscard]] virtual int getId() const;
    [[nodiscard]] virtual double* getWeaknesses();
    virtual double getWeakness(TypeBase* type);
};


#endif //POKEMONPROJECT_TYPEBASE_H
