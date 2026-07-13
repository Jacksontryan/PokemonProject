//
// Created by jacksonryan on 6/30/26.
//

#ifndef POKEMONPROJECT_GROWTHRATE_H
#define POKEMONPROJECT_GROWTHRATE_H
#include <string>

#include "../SmartPointer.h"

class GrowthRate {
    std::string name;
    SmartPointer<int> experience;
    GrowthRate(const std::string& name, const SmartPointer<int>& experience);

    public:
    virtual ~GrowthRate();
    [[nodiscard]] virtual std::string getName() const;
    [[nodiscard]] virtual SmartPointer<int> getExperience() const;
    [[nodiscard]] virtual int expToLevel(int level);
    [[nodiscard]] virtual int expToLevel(int startLevel, int targetLevel);

    static SmartPointer<GrowthRate> MediumFast();
    static SmartPointer<GrowthRate> Erratic();
    static SmartPointer<GrowthRate> Fluctuating();
    static SmartPointer<GrowthRate> MediumSlow();
    static SmartPointer<GrowthRate> Fast();
    static SmartPointer<GrowthRate> Slow();

};


#endif //POKEMONPROJECT_GROWTHRATE_H
