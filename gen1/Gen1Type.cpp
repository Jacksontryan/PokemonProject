//
// Created by jacksonryan on 6/30/26.
//

#include "Gen1Type.h"

Gen1Type::Gen1Type() : Type(std::string("Typeless"), -1, new double[]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},15) {

}

Gen1Type::Gen1Type(const std::string& name, int id, double* weaknesses) : Type(name, id, weaknesses, 15) {
    std::cout << "Gen1Type " << this->name << " constructed" << std::endl;
}

Gen1Type &Gen1Type::operator=(const Gen1Type & type) {
    if (*this == type) {
        return *this;
    }
    this->name = type.name;
    this->id = type.id;
    this->weaknesses = type.weaknesses;
    return *this;
}

bool Gen1Type::operator==(const Gen1Type& type) {
    if (this->name == type.name && this->id == type.id && this->weaknesses == type.weaknesses) {
        return true;
    }
    return false;
}

Gen1Type Gen1Type::normal() {
    double *normalWeaknesses = new double[15]{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0};
    std::string normalName = "Normal";
    Gen1Type normal(normalName, 0, normalWeaknesses);
    //normal.getWeaknesses();
    return normal;
}

Gen1Type Gen1Type::fire() {
    double *fireWeaknesses = new double[15]{1.0, 0.5, 2.0, 1.0, 0.5, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 0.5, 2.0, 1.0, 1.0};
    std::string fireName = "Fire";
    Gen1Type fire(fireName, 1, fireWeaknesses);
    return fire;
}

Gen1Type Gen1Type::water() {
    double *waterWeaknesses = new double[15]{1.0, 0.5, 0.5, 2.0, 2.0, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
    std::string waterName = "Water";
    Gen1Type water(waterName, 2, waterWeaknesses);
    return water;
}

Gen1Type Gen1Type::electric() {
    double *electricWeaknesses = new double[15]{1.0, 1.0, 1.0, 0.5, 1.0, 1.0, 1.0, 1.0, 2.0, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0};
    std::string electricName = "Electric";
    Gen1Type electric(electricName, 3, electricWeaknesses);
    return electric;
}

Gen1Type Gen1Type::grass() {
    double *grassWeaknesses = new double[15]{1.0, 2.0, 0.5, 0.5, 0.5, 2.0, 1.0, 2.0, 0.5, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0};
    std::string grassName = "Grass";
    Gen1Type grass(grassName, 4, grassWeaknesses);
    return grass;
}

Gen1Type Gen1Type::ice() {
    double *iceWeaknesses = new double[15]{1.0, 2.0, 1.0, 1.0, 1.0, 0.5, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0};
    std::string iceName = "Ice";
    Gen1Type ice(iceName, 5, iceWeaknesses);
    return ice;
}

Gen1Type Gen1Type::fighting() {
    double *fightingWeaknesses = new double[15]{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 2.0, 0.5, 0.5, 1.0, 1.0};
    std::string fightingName = "Fighting";
    Gen1Type fighting(fightingName, 6, fightingWeaknesses);
    return fighting;
}

Gen1Type Gen1Type::poison() {
    double *poisonWeaknesses = new double[15]{1.0, 1.0, 1.0, 1.0, 0.5, 1.0, 0.5, 0.5, 2.0, 1.0, 2.0, 2.0, 1.0, 1.0, 1.0};
    std::string poisonName = "Poison";
    Gen1Type poison(poisonName, 7, poisonWeaknesses);
    return poison;
}

Gen1Type Gen1Type::ground() {
    double *groundWeaknesses = new double[15]{1.0, 1.0, 2.0, 0.0, 2.0, 2.0, 1.0, 0.5, 1.0, 1.0, 1.0, 1.0, 0.5, 1.0, 1.0};
    std::string groundName = "Ground";
    Gen1Type ground(groundName, 8, groundWeaknesses);
    return ground;
}

Gen1Type Gen1Type::flying() {
    double *flyingWeaknesses = new double[15]{1.0, 1.0, 1.0, 2.0, 0.5, 2.0, 0.5, 1.0, 0.0, 1.0, 1.0, 0.5, 2.0, 1.0, 1.0};
    std::string flyingName = "Flying";
    Gen1Type flying(flyingName, 9, flyingWeaknesses);
    return flying;
}

Gen1Type Gen1Type::psychic() {
    double *psychicWeaknesses = new double[15]{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5, 1.0, 1.0, 1.0, 0.5, 2.0, 1.0, 0.0, 1.0};
    std::string psychicName = "Psychic";
    Gen1Type psychic(psychicName, 10, psychicWeaknesses);
    return psychic;
}

Gen1Type Gen1Type::bug() {
    double *bugWeaknesses = new double[15]{1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 2.0, 1.0, 1.0};
    std::string bugName = "Bug";
    Gen1Type bug(bugName, 11, bugWeaknesses);
    return bug;
}

Gen1Type Gen1Type::rock() {
    double *rockWeaknesses = new double[15]{0.5, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5, 1.0, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0};
    std::string rockName = "Rock";
    Gen1Type rock(rockName, 12, rockWeaknesses);
    return rock;
}

Gen1Type Gen1Type::ghost() {
    double *ghostWeaknesses = new double[15]{0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0};
    std::string ghostName = "Ghost";
    Gen1Type ghost(ghostName, 13, ghostWeaknesses);
    return ghost;
}

Gen1Type Gen1Type::dragon() {
    double *dragonWeaknesses = new double[15]{1.0, 0.5, 0.5, 0.5, 0.5, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0};
    std::string dragonName = "Dragon";
    Gen1Type dragon(dragonName, 14, dragonWeaknesses);
    return dragon;
}

SmartPointer<Gen1Type> Gen1Type::instantiateTypes() {
    SmartPointer<Gen1Type> array = SmartPointer<Gen1Type>::arrayPointer(15);

    array[0] = normal();
    array[1] = fire();
    array[2] = water();
    array[3] = electric();
    array[4] = grass();
    array[5] = ice();
    array[6] = fighting();
    array[7] = poison();
    array[8] = ground();
    array[9] = flying();
    array[10] = psychic();
    array[11] = bug();
    array[12] = rock();
    array[13] = ghost();
    array[14] = dragon();

    return array;

}
