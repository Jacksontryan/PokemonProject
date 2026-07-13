//
// Created by jacksonryan on 6/30/26.
//

#include "GrowthRate.h"

#include <complex>
#include <utility>

GrowthRate::GrowthRate(const std::string& name, const SmartPointer<int>& experience) : experience(experience) {

    std::cout << "GrowthRate constructor started" << std::endl;

    this->name = name;
    this->experience.setName(name + " experience array");

    std::cout << "Erratic Growth Rate Constructed" << std::endl << std::endl;
}

GrowthRate::~GrowthRate() = default;

std::string GrowthRate::getName() const {
    return this->name;
}

SmartPointer<int> GrowthRate::getExperience() const {
    return this->experience;
}

int GrowthRate::expToLevel(int level) {
    return experience[level - 1];
}

int GrowthRate::expToLevel(int startLevel, int targetLevel) {
    int exp = 0;
    for (int i = startLevel; i < targetLevel; i++) {
        exp += experience[i];
    }
    return exp;
}

SmartPointer<GrowthRate> GrowthRate::Erratic() {

    std::cout << "Erratic Method started" << std::endl;

    SmartPointer<int> experience = SmartPointer<int>::arrayPointer(100);
    experience.setName("Erratic Temp Experience");

    experience[0] = 0;

    std::cout << "Experience smart pointer instantiated" << std::endl;

    int exp = 0;
    for (int i = 2; i <= 100; i++) {
        if (i < 50) {
            experience[i-1] = (std::pow(i, 3) * (100 - i) / 50) - exp;
        }else if (i < 68) {
            experience[i-1] = (std::pow(i,3) * (150 - (i)) / 100) - exp;
        }else if (i < 98) {
            experience[i-1] = (std::pow(i,3) * ((1911 - 10 * (i)) / 3) / 500) - exp;
        }else {
            experience[i-1] = (std::pow(i,3) * (160 - (i)) / 100) - exp;
        }
        std::cout << experience[i-1] << std::endl;
        exp+=experience[i-1];
    }
    std::cout << std::endl;
    std::cout << "Experience set: " << exp << std::endl;
    std::string name = "Erratic";
    SmartPointer<GrowthRate> erratic = SmartPointer<GrowthRate>::newPointer(GrowthRate(name, experience));
    erratic.setName("Erratic Growth Rate");
    return erratic;
}

SmartPointer<GrowthRate> GrowthRate::Fast() {

    SmartPointer<int> experience = SmartPointer<int>::arrayPointer(100);
    experience.setName("Fast Temp Experience");

    experience[0] = 0;

    std::cout << "Experience smart pointer instantiated" << std::endl;

    int exp = 0;
    for (int i = 2; i <= 100; i++) {
        experience[i-1] = 4 * std::pow(i, 3) / 5 - exp;
        std::cout << experience[i-1] << std::endl;
        exp+=experience[i-1];
    }
    std::cout << std::endl;
    std::cout << "Experience set: " << exp << std::endl;
    std::string name = "Fast";
    SmartPointer<GrowthRate> fast = SmartPointer<GrowthRate>::newPointer(GrowthRate(name, experience));
    fast.setName("Fast Growth Rate");
    return fast;


}

SmartPointer<GrowthRate> GrowthRate::MediumFast() {
    SmartPointer<int> experience = SmartPointer<int>::arrayPointer(100);
    experience.setName("Medium Fast Temp Experience");

    experience[0] = 0;

    std::cout << "Experience smart pointer instantiated" << std::endl;

    int exp = 0;
    for (int i = 2; i <= 100; i++) {
        experience[i-1] = std::pow(i, 3) - exp;
        std::cout << experience[i-1] << std::endl;
        exp+=experience[i-1];
    }
    std::cout << std::endl;
    std::cout << "Experience set: " << exp << std::endl;
    std::string name = "Medium Fast";
    SmartPointer<GrowthRate> mediumFast = SmartPointer<GrowthRate>::newPointer(GrowthRate(name, experience));
    mediumFast.setName("Medium Fast Growth Rate");
    return mediumFast;
}

SmartPointer<GrowthRate> GrowthRate::MediumSlow() {
    SmartPointer<int> experience = SmartPointer<int>::arrayPointer(100);
    experience.setName("Medium Slow Temp Experience");

    experience[0] = 0;

    std::cout << "Experience smart pointer instantiated" << std::endl;

    int exp = 0;
    for (int i = 2; i <= 100; i++) {
        experience[i-1] = 6 * std::pow(i, 3) / 5 - 15 * std::pow(i, 2) + 100 * i - 140 - exp;
        std::cout << experience[i-1] << std::endl;
        exp+=experience[i-1];
    }
    std::cout << std::endl;
    std::cout << "Experience set: " << exp << std::endl;
    std::string name = "Medium Slow";
    SmartPointer<GrowthRate> mediumSlow = SmartPointer<GrowthRate>::newPointer(GrowthRate(name, experience));
    mediumSlow.setName("Medium Slow Growth Rate");
    return mediumSlow;
}

SmartPointer<GrowthRate> GrowthRate::Slow() {
    SmartPointer<int> experience = SmartPointer<int>::arrayPointer(100);
    experience.setName("Slow Temp Experience");

    experience[0] = 0;

    std::cout << "Experience smart pointer instantiated" << std::endl;

    int exp = 0;
    for (int i = 2; i <= 100; i++) {
        experience[i-1] = 5 * std::pow(i, 3) / 4 - exp;
        std::cout << experience[i-1] << std::endl;
        exp+=experience[i-1];
    }
    std::cout << std::endl;
    std::cout << "Experience set: " << exp << std::endl;
    std::string name = "Slow";
    SmartPointer<GrowthRate> slow = SmartPointer<GrowthRate>::newPointer(GrowthRate(name, experience));
    slow.setName("Slow Growth Rate");
    return slow;
}

SmartPointer<GrowthRate> GrowthRate::Fluctuating() {
    SmartPointer<int> experience = SmartPointer<int>::arrayPointer(100);
    experience.setName("Fluctuating Temp Experience");

    experience[0] = 0;

    std::cout << "Experience smart pointer instantiated" << std::endl;

    int exp = 0;
    for (int i = 2; i <= 100; i++) {

        if (i < 15) {
            experience[i-1] = std::pow(i, 3) * (((i + 1) / 3) + 24) / 50 - exp;
        }else if (i < 36) {
            experience[i-1] = std::pow(i, 3) * (i + 14) / 50 - exp;
        }else {
            experience[i-1] = std::pow(i, 3) * (i/2+32) / 50 - exp;
        }

        exp+=experience[i-1];
        std::cout << experience[i-1] << std::endl;

    }
    std::cout << std::endl;
    std::cout << "Experience set: " << exp << std::endl;
    std::string name = "Fluctuating";
    SmartPointer<GrowthRate> fluctuating = SmartPointer<GrowthRate>::newPointer(GrowthRate(name, experience));
    fluctuating.setName("Fluctuating Growth Rate");
    return fluctuating;
}
