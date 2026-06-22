//
// Created by jacksonryan on 6/21/26.
//
#include "Type.h"

Type::Type(std::string& name, int id, double* weaknesses): TypeBase(name, id, weaknesses) {
    for (int i = 0; i < 15; i++) {
        this->weaknesses[i] = weaknesses[i];
    }
}

double Type::getWeakness(Type* type) {
    return weaknesses[type->id];
}

Type &Type::operator=(Type *p) {
    this->name = p->name;
    this->id = p->id;
    for (int i = 0; i < 15; i++) {
        this->weaknesses[i] = p->weaknesses[i];
    }
    delete p;
    return *this;
}

Type **Type::instantiateTypes() {
    Type** types = new Type*[15];

    double weaknesses[15];

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 1.0;//fire
    weaknesses[2] = 1.0;//water
    weaknesses[3] = 1.0;//electric
    weaknesses[4] = 1.0;//grass
    weaknesses[5] = 1.0;//ice
    weaknesses[6] = 2.0;//fighting
    weaknesses[7] = 1.0;//poison
    weaknesses[8] = 1.0;//ground
    weaknesses[9] = 1.0;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 1.0;//bug
    weaknesses[12] = 1.0;//rock
    weaknesses[13] = 0.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string normal = "Normal";

    types[0] = new Type(normal, 0, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 0.5;//fire
    weaknesses[2] = 2.0;//water
    weaknesses[3] = 1.0;//electric
    weaknesses[4] = 0.5;//grass
    weaknesses[5] = 1.0;//ice
    weaknesses[6] = 1.0;//fighting
    weaknesses[7] = 1.0;//poison
    weaknesses[8] = 2.0;//ground
    weaknesses[9] = 1.0;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 0.5;//bug
    weaknesses[12] = 2.0;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string fire = "Fire";

    types[1] = new Type(fire, 1, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 0.5;//fire
    weaknesses[2] = 0.5;//water
    weaknesses[3] = 2.0;//electric
    weaknesses[4] = 2.0;//grass
    weaknesses[5] = 0.5;//ice
    weaknesses[6] = 1.0;//fighting
    weaknesses[7] = 1.0;//poison
    weaknesses[8] = 1.0;//ground
    weaknesses[9] = 1.0;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 1.0;//bug
    weaknesses[12] = 1.0;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string water = "Water";

    types[2] = new Type(water, 2, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 1.0;//fire
    weaknesses[2] = 1.0;//water
    weaknesses[3] = 0.5;//electric
    weaknesses[4] = 1.0;//grass
    weaknesses[5] = 1.0;//ice
    weaknesses[6] = 1.0;//fighting
    weaknesses[7] = 1.0;//poison
    weaknesses[8] = 2.0;//ground
    weaknesses[9] = 0.5;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 1.0;//bug
    weaknesses[12] = 1.0;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string electric = "Electric";
    types[3] = new Type(electric, 3, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 2.0;//fire
    weaknesses[2] = 0.5;//water
    weaknesses[3] = 0.5;//electric
    weaknesses[4] = 0.5;//grass
    weaknesses[5] = 2.0;//ice
    weaknesses[6] = 1.0;//fighting
    weaknesses[7] = 2.0;//poison
    weaknesses[8] = 0.5;//ground
    weaknesses[9] = 2.0;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 2.0;//bug
    weaknesses[12] = 1.0;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string grass = "Grass";
    types[4] = new Type(grass, 4, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 2.0;//fire
    weaknesses[2] = 1.0;//water
    weaknesses[3] = 1.0;//electric
    weaknesses[4] = 1.0;//grass
    weaknesses[5] = 0.5;//ice
    weaknesses[6] = 2.0;//fighting
    weaknesses[7] = 1.0;//poison
    weaknesses[8] = 1.0;//ground
    weaknesses[9] = 1.0;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 1.0;//bug
    weaknesses[12] = 2.0;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string ice = "Ice";
    types[5] = new Type(ice, 5, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 1.0;//fire
    weaknesses[2] = 1.0;//water
    weaknesses[3] = 1.0;//electric
    weaknesses[4] = 1.0;//grass
    weaknesses[5] = 1.0;//ice
    weaknesses[6] = 1.0;//fighting
    weaknesses[7] = 1.0;//poison
    weaknesses[8] = 1.0;//ground
    weaknesses[9] = 2.0;//flying
    weaknesses[10] = 2.0;//psychic
    weaknesses[11] = 0.5;//bug
    weaknesses[12] = 0.5;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string fighting = "Fighting";
    types[6] = new Type(fighting, 6, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 1.0;//fire
    weaknesses[2] = 1.0;//water
    weaknesses[3] = 1.0;//electric
    weaknesses[4] = 0.5;//grass
    weaknesses[5] = 1.0;//ice
    weaknesses[6] = 0.5;//fighting
    weaknesses[7] = 0.5;//poison
    weaknesses[8] = 2.0;//ground
    weaknesses[9] = 1.0;//flying
    weaknesses[10] = 2.0;//psychic
    weaknesses[11] = 2.0;//bug
    weaknesses[12] = 1.0;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string poison = "Poison";
    types[7] = new Type(poison, 7, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 1.0;//fire
    weaknesses[2] = 2.0;//water
    weaknesses[3] = 0.0;//electric
    weaknesses[4] = 2.0;//grass
    weaknesses[5] = 2.0;//ice
    weaknesses[6] = 1.0;//fighting
    weaknesses[7] = 0.5;//poison
    weaknesses[8] = 1.0;//ground
    weaknesses[9] = 1.0;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 1.0;//bug
    weaknesses[12] = 0.5;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string ground = "Ground";
    types[8] = new Type(ground, 8, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 1.0;//fire
    weaknesses[2] = 1.0;//water
    weaknesses[3] = 2.0;//electric
    weaknesses[4] = 0.5;//grass
    weaknesses[5] = 2.0;//ice
    weaknesses[6] = 0.5;//fighting
    weaknesses[7] = 1.0;//poison
    weaknesses[8] = 0.0;//ground
    weaknesses[9] = 1.0;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 0.5;//bug
    weaknesses[12] = 2.0;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string flying = "Flying";
    types[9] = new Type(flying, 9, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 1.0;//fire
    weaknesses[2] = 1.0;//water
    weaknesses[3] = 1.0;//electric
    weaknesses[4] = 1.0;//grass
    weaknesses[5] = 1.0;//ice
    weaknesses[6] = 0.5;//fighting
    weaknesses[7] = 1.0;//poison
    weaknesses[8] = 1.0;//ground
    weaknesses[9] = 1.0;//flying
    weaknesses[10] = 0.5;//psychic
    weaknesses[11] = 2.0;//bug
    weaknesses[12] = 1.0;//rock
    weaknesses[13] = 0.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string psychic = "Psychic";
    types[10] = new Type(psychic, 10, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 2.0;//fire
    weaknesses[2] = 1.0;//water
    weaknesses[3] = 1.0;//electric
    weaknesses[4] = 0.5;//grass
    weaknesses[5] = 1.0;//ice
    weaknesses[6] = 0.5;//fighting
    weaknesses[7] = 2.0;//poison
    weaknesses[8] = 0.5;//ground
    weaknesses[9] = 2.0;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 1.0;//bug
    weaknesses[12] = 2.0;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string bug = "Bug";
    types[11] = new Type(bug, 11, weaknesses);

    weaknesses[0] = 0.5;//normal
    weaknesses[1] = 0.5;//fire
    weaknesses[2] = 2.0;//water
    weaknesses[3] = 1.0;//electric
    weaknesses[4] = 2.0;//grass
    weaknesses[5] = 1.0;//ice
    weaknesses[6] = 2.0;//fighting
    weaknesses[7] = 0.5;//poison
    weaknesses[8] = 2.0;//ground
    weaknesses[9] = 0.5;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 1.0;//bug
    weaknesses[12] = 1.0;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string rock = "Rock";
    types[12] = new Type(rock, 12, weaknesses);

    weaknesses[0] = 0.0;//normal
    weaknesses[1] = 1.0;//fire
    weaknesses[2] = 1.0;//water
    weaknesses[3] = 1.0;//electric
    weaknesses[4] = 1.0;//grass
    weaknesses[5] = 1.0;//ice
    weaknesses[6] = 0.0;//fighting
    weaknesses[7] = 0.5;//poison
    weaknesses[8] = 1.0;//ground
    weaknesses[9] = 1.0;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 1.0;//bug
    weaknesses[12] = 1.0;//rock
    weaknesses[13] = 2.0;//ghost
    weaknesses[14] = 1.0;//dragon

    std::string ghost = "Ghost";
    types[13] = new Type(ghost, 13, weaknesses);

    weaknesses[0] = 1.0;//normal
    weaknesses[1] = 0.5;//fire
    weaknesses[2] = 0.5;//water
    weaknesses[3] = 0.5;//electric
    weaknesses[4] = 0.5;//grass
    weaknesses[5] = 2.0;//ice
    weaknesses[6] = 1.0;//fighting
    weaknesses[7] = 1.0;//poison
    weaknesses[8] = 1.0;//ground
    weaknesses[9] = 1.0;//flying
    weaknesses[10] = 1.0;//psychic
    weaknesses[11] = 1.0;//bug
    weaknesses[12] = 1.0;//rock
    weaknesses[13] = 1.0;//ghost
    weaknesses[14] = 2.0;//dragon

    std::string dragon = "Dragon";
    types[14] = new Type(dragon, 14, weaknesses);

    return types;
}
