//
// Created by jacksonryan on 6/30/26.
//

#ifndef POKEMONPROJECT_GROWTHRATE_H
#define POKEMONPROJECT_GROWTHRATE_H
#include <string>
#include <vector>


class GrowthRate {
    std::string name;
    std::vector<int> experience;
    GrowthRate(const std::string& name, const std::vector<int>& experience);

    public:
    virtual ~GrowthRate();
    [[nodiscard]] virtual std::string getName() const;
    [[nodiscard]] virtual std::vector<int> getExperience() const;
    [[nodiscard]] virtual int expToLevel(int level);
    [[nodiscard]] virtual int expToLevel(int startLevel, int targetLevel);

    static GrowthRate MediumFast();
    static GrowthRate Erratic();
    static GrowthRate Fluctuating();
    static GrowthRate MediumSlow();
    static GrowthRate Fast();
    static GrowthRate Slow();

};


#endif //POKEMONPROJECT_GROWTHRATE_H
