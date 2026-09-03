//
// Created by jacksonryan on 6/30/26.
//

#include "GrowthRate.h"

#include <complex>
#include <utility>

GrowthRate::GrowthRate(const std::string& name, const std::vector<int>& experience) : experience(experience) {

    std::cout << "GrowthRate constructor started" << std::endl;

    this->name = name;

    std::cout << "Erratic Growth Rate Constructed" << std::endl << std::endl;
}

GrowthRate::~GrowthRate() = default;

std::string GrowthRate::getName() const {
    return this->name;
}

std::vector<int> GrowthRate::getExperience() const {
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

GrowthRate GrowthRate::Erratic() {

    std::cout << "Erratic Method started" << std::endl;

    std::vector<int> experience;

    experience[0] = 0;

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
    std::string name = "Erratic";
    GrowthRate erratic = GrowthRate(name, experience);
    return erratic;
}

GrowthRate GrowthRate::Fast() {

    std::vector<int> experience;

    experience[0] = 0;

    int exp = 0;
    for (int i = 2; i <= 100; i++) {
        experience[i-1] = 4 * std::pow(i, 3) / 5 - exp;
        std::cout << experience[i-1] << std::endl;
        exp+=experience[i-1];
    }
    std::string name = "Fast";
    GrowthRate fast = GrowthRate(name, experience);
    return fast;


}

GrowthRate GrowthRate::MediumFast() {
    std::vector<int> experience;

    experience[0] = 0;

    int exp = 0;
    for (int i = 2; i <= 100; i++) {
        experience[i-1] = std::pow(i, 3) - exp;
        std::cout << experience[i-1] << std::endl;
        exp+=experience[i-1];
    }
    std::string name = "Medium Fast";
    GrowthRate mediumFast = GrowthRate(name, experience);
    return mediumFast;
}

GrowthRate GrowthRate::MediumSlow() {
    std::vector<int> experience;

    experience[0] = 0;

    int exp = 0;
    for (int i = 2; i <= 100; i++) {
        experience[i-1] = 6 * std::pow(i, 3) / 5 - 15 * std::pow(i, 2) + 100 * i - 140 - exp;
        std::cout << experience[i-1] << std::endl;
        exp+=experience[i-1];
    }
    std::string name = "Medium Slow";
    GrowthRate mediumSlow = GrowthRate(name, experience);
    return mediumSlow;
}

GrowthRate GrowthRate::Slow() {
    std::vector<int> experience;

    experience[0] = 0;

    int exp = 0;
    for (int i = 2; i <= 100; i++) {
        experience[i-1] = 5 * std::pow(i, 3) / 4 - exp;
        std::cout << experience[i-1] << std::endl;
        exp+=experience[i-1];
    }
    std::string name = "Slow";
    GrowthRate slow = GrowthRate(name, experience);
    return slow;
}

GrowthRate GrowthRate::Fluctuating() {
    std::vector<int> experience;

    experience[0] = 0;

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
    std::string name = "Fluctuating";
    GrowthRate fluctuating = GrowthRate(name, experience);
    return fluctuating;
}
