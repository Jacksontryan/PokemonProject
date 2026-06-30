//
// Created by jacksonryan on 6/11/26.
//

#ifndef POKEMONPROJECT_TYPEBASE_H
#define POKEMONPROJECT_TYPEBASE_H
#include <memory>
#include <string>


class TypeBase {
protected:
    std::string name;
    int id;
    double* weaknesses;
    const size_t numberWeaknesses;
public:
    TypeBase(std::string  name, int id, const double* weaknesses, size_t size);

    virtual ~TypeBase()= default;
    [[nodiscard]] virtual std::string getName() const;
    [[nodiscard]] virtual int getId() const;
    [[nodiscard]] virtual double* getWeaknesses() const;
    virtual double getWeakness(TypeBase* type);
};


#endif //POKEMONPROJECT_TYPEBASE_H
