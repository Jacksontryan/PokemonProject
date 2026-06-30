//
// Created by jacksonryan on 6/21/26.
//
#include "Type.h"

#include <iostream>

/*Type::Type() : TypeBase("", -1, {}, 15){
    std::cout<<"Type Constructor Called"<<std::endl;
}*/

Type::Type(const std::string& name, int id, double* weaknesses): TypeBase(name, id, weaknesses, 15) {
    for (int i = 0; i < 15; i++) {
        this->weaknesses[i] = weaknesses[i];
    }
}

Type::Type(const Type &other) : TypeBase(other.name, other.getId(), other.getWeaknesses(), 15){}


Type &Type::operator=(Type *p) {

    std::cout << "= called" << std::endl;

    this->name = p->name;
    this->id = p->id;

    std::cout << "Name and Id set" << std::endl;

    delete[] this->weaknesses;
    this->weaknesses = new double[15];

    std::cout << "Weaknesses deleted and reset for entry" << std::endl;

    for (int i = 0; i < 15; i++) {
        std::cout << i << std::endl;
        this->weaknesses[i] = p->weaknesses[i];
    }

    std::cout << "Weaknesses set" << std::endl;

    delete p;

    std::cout << "Other deleted" << std::endl;

    return *this;
}

double Type::getWeakness(TypeBase* type) {

    type = dynamic_cast<Type*>(type);

    if (!type) {
        return -1.0;
    }

    return weaknesses[type->getId()-1];
}

Type* Type::instantiateTypes() {

    std::cout <<"Instantiate Types Started"<<std::endl;

    double *normalWeaknesses = new double[15];

    normalWeaknesses[0] = 1.0;//normal
    normalWeaknesses[1] = 1.0;//fire
    normalWeaknesses[2] = 1.0;//water
    normalWeaknesses[3] = 1.0;//electric
    normalWeaknesses[4] = 1.0;//grass
    normalWeaknesses[5] = 1.0;//ice
    normalWeaknesses[6] = 2.0;//fighting
    normalWeaknesses[7] = 1.0;//poison
    normalWeaknesses[8] = 1.0;//ground
    normalWeaknesses[9] = 1.0;//flying
    normalWeaknesses[10] = 1.0;//psychic
    normalWeaknesses[11] = 1.0;//bug
    normalWeaknesses[12] = 1.0;//rock
    normalWeaknesses[13] = 0.0;//ghost
    normalWeaknesses[14] = 1.0;//dragon

    std::string name = "Normal";

    Type* normal = new Type(name, 1, normalWeaknesses);

    std::cout<<"Normal Created" << std::endl;

    double *fireWeaknesses = new double[15];

    fireWeaknesses[0] = 1.0;//normal
    fireWeaknesses[1] = 0.5;//fire
    fireWeaknesses[2] = 2.0;//water
    fireWeaknesses[3] = 1.0;//electric
    fireWeaknesses[4] = 0.5;//grass
    fireWeaknesses[5] = 1.0;//ice
    fireWeaknesses[6] = 1.0;//fighting
    fireWeaknesses[7] = 1.0;//poison
    fireWeaknesses[8] = 2.0;//ground
    fireWeaknesses[9] = 1.0;//flying
    fireWeaknesses[10] = 1.0;//psychic
    fireWeaknesses[11] = 0.5;//bug
    fireWeaknesses[12] = 2.0;//rock
    fireWeaknesses[13] = 1.0;//ghost
    fireWeaknesses[14] = 1.0;//dragon

    name = "Fire";

    Type *fire = new Type(name, 2, fireWeaknesses);

    double *waterWeaknesses = new double[15];

    waterWeaknesses[0] = 1.0;//normal
    waterWeaknesses[1] = 0.5;//fire
    waterWeaknesses[2] = 0.5;//water
    waterWeaknesses[3] = 2.0;//electric
    waterWeaknesses[4] = 2.0;//grass
    waterWeaknesses[5] = 0.5;//ice
    waterWeaknesses[6] = 1.0;//fighting
    waterWeaknesses[7] = 1.0;//poison
    waterWeaknesses[8] = 1.0;//ground
    waterWeaknesses[9] = 1.0;//flying
    waterWeaknesses[10] = 1.0;//psychic
    waterWeaknesses[11] = 1.0;//bug
    waterWeaknesses[12] = 1.0;//rock
    waterWeaknesses[13] = 1.0;//ghost
    waterWeaknesses[14] = 1.0;//dragon

    name = "Water";

    Type* water = new Type(name, 3, waterWeaknesses);

    double *electricWeaknesses = new double[15];

    electricWeaknesses[0] = 1.0;//normal
    electricWeaknesses[1] = 1.0;//fire
    electricWeaknesses[2] = 1.0;//water
    electricWeaknesses[3] = 0.5;//electric
    electricWeaknesses[4] = 1.0;//grass
    electricWeaknesses[5] = 1.0;//ice
    electricWeaknesses[6] = 1.0;//fighting
    electricWeaknesses[7] = 1.0;//poison
    electricWeaknesses[8] = 2.0;//ground
    electricWeaknesses[9] = 0.5;//flying
    electricWeaknesses[10] = 1.0;//psychic
    electricWeaknesses[11] = 1.0;//bug
    electricWeaknesses[12] = 1.0;//rock
    electricWeaknesses[13] = 1.0;//ghost
    electricWeaknesses[14] = 1.0;//dragon

    name = "Electric";
    Type* electric = new Type(name, 4, electricWeaknesses);

    double *grassWeaknesses = new double[15];

    grassWeaknesses[0] = 1.0;//normal
    grassWeaknesses[1] = 2.0;//fire
    grassWeaknesses[2] = 0.5;//water
    grassWeaknesses[3] = 0.5;//electric
    grassWeaknesses[4] = 0.5;//grass
    grassWeaknesses[5] = 2.0;//ice
    grassWeaknesses[6] = 1.0;//fighting
    grassWeaknesses[7] = 2.0;//poison
    grassWeaknesses[8] = 0.5;//ground
    grassWeaknesses[9] = 2.0;//flying
    grassWeaknesses[10] = 1.0;//psychic
    grassWeaknesses[11] = 2.0;//bug
    grassWeaknesses[12] = 1.0;//rock
    grassWeaknesses[13] = 1.0;//ghost
    grassWeaknesses[14] = 1.0;//dragon

    name = "Grass";
    Type* grass = new Type(name, 5, grassWeaknesses);

    double *iceweaknesses = new double[15];

    iceweaknesses[0] = 1.0;//normal
    iceweaknesses[1] = 2.0;//fire
    iceweaknesses[2] = 1.0;//water
    iceweaknesses[3] = 1.0;//electric
    iceweaknesses[4] = 1.0;//grass
    iceweaknesses[5] = 0.5;//ice
    iceweaknesses[6] = 2.0;//fighting
    iceweaknesses[7] = 1.0;//poison
    iceweaknesses[8] = 1.0;//ground
    iceweaknesses[9] = 1.0;//flying
    iceweaknesses[10] = 1.0;//psychic
    iceweaknesses[11] = 1.0;//bug
    iceweaknesses[12] = 2.0;//rock
    iceweaknesses[13] = 1.0;//ghost
    iceweaknesses[14] = 1.0;//dragon

    name = "Ice";
    Type* ice = new Type(name, 6, iceweaknesses);

    double *fightingWeaknesses = new double[15];

    fightingWeaknesses[0] = 1.0;//normal
    fightingWeaknesses[1] = 1.0;//fire
    fightingWeaknesses[2] = 1.0;//water
    fightingWeaknesses[3] = 1.0;//electric
    fightingWeaknesses[4] = 1.0;//grass
    fightingWeaknesses[5] = 1.0;//ice
    fightingWeaknesses[6] = 1.0;//fighting
    fightingWeaknesses[7] = 1.0;//poison
    fightingWeaknesses[8] = 1.0;//ground
    fightingWeaknesses[9] = 2.0;//flying
    fightingWeaknesses[10] = 2.0;//psychic
    fightingWeaknesses[11] = 0.5;//bug
    fightingWeaknesses[12] = 0.5;//rock
    fightingWeaknesses[13] = 1.0;//ghost
    fightingWeaknesses[14] = 1.0;//dragon

    name = "Fighting";
    Type *fighting = new Type(name, 7, fightingWeaknesses);

    double *poisonweaknesses = new double[15];

    poisonweaknesses[0] = 1.0;//normal
    poisonweaknesses[1] = 1.0;//fire
    poisonweaknesses[2] = 1.0;//water
    poisonweaknesses[3] = 1.0;//electric
    poisonweaknesses[4] = 0.5;//grass
    poisonweaknesses[5] = 1.0;//ice
    poisonweaknesses[6] = 0.5;//fighting
    poisonweaknesses[7] = 0.5;//poison
    poisonweaknesses[8] = 2.0;//ground
    poisonweaknesses[9] = 1.0;//flying
    poisonweaknesses[10] = 2.0;//psychic
    poisonweaknesses[11] = 2.0;//bug
    poisonweaknesses[12] = 1.0;//rock
    poisonweaknesses[13] = 1.0;//ghost
    poisonweaknesses[14] = 1.0;//dragon

    name = "Poison";
    Type* poison = new Type(name, 8, poisonweaknesses);

    double *groundweaknesses = new double[15];

    groundweaknesses[0] = 1.0;//normal
    groundweaknesses[1] = 1.0;//fire
    groundweaknesses[2] = 2.0;//water
    groundweaknesses[3] = 0.0;//electric
    groundweaknesses[4] = 2.0;//grass
    groundweaknesses[5] = 2.0;//ice
    groundweaknesses[6] = 1.0;//fighting
    groundweaknesses[7] = 0.5;//poison
    groundweaknesses[8] = 1.0;//ground
    groundweaknesses[9] = 1.0;//flying
    groundweaknesses[10] = 1.0;//psychic
    groundweaknesses[11] = 1.0;//bug
    groundweaknesses[12] = 0.5;//rock
    groundweaknesses[13] = 1.0;//ghost
    groundweaknesses[14] = 1.0;//dragon

    name = "Ground";
    Type* ground = new Type(name, 9, groundweaknesses);

    double *flyingweaknesses = new double[15];

    flyingweaknesses[0] = 1.0;//normal
    flyingweaknesses[1] = 1.0;//fire
    flyingweaknesses[2] = 1.0;//water
    flyingweaknesses[3] = 2.0;//electric
    flyingweaknesses[4] = 0.5;//grass
    flyingweaknesses[5] = 2.0;//ice
    flyingweaknesses[6] = 0.5;//fighting
    flyingweaknesses[7] = 1.0;//poison
    flyingweaknesses[8] = 0.0;//ground
    flyingweaknesses[9] = 1.0;//flying
    flyingweaknesses[10] = 1.0;//psychic
    flyingweaknesses[11] = 0.5;//bug
    flyingweaknesses[12] = 2.0;//rock
    flyingweaknesses[13] = 1.0;//ghost
    flyingweaknesses[14] = 1.0;//dragon

    name = "Flying";
    Type* flying = new Type(name, 10, flyingweaknesses);

    double *psychicweaknesses = new double[15];

    psychicweaknesses[0] = 1.0;//normal
    psychicweaknesses[1] = 1.0;//fire
    psychicweaknesses[2] = 1.0;//water
    psychicweaknesses[3] = 1.0;//electric
    psychicweaknesses[4] = 1.0;//grass
    psychicweaknesses[5] = 1.0;//ice
    psychicweaknesses[6] = 0.5;//fighting
    psychicweaknesses[7] = 1.0;//poison
    psychicweaknesses[8] = 1.0;//ground
    psychicweaknesses[9] = 1.0;//flying
    psychicweaknesses[10] = 0.5;//psychic
    psychicweaknesses[11] = 2.0;//bug
    psychicweaknesses[12] = 1.0;//rock
    psychicweaknesses[13] = 0.0;//ghost
    psychicweaknesses[14] = 1.0;//dragon

    name = "Psychic";
    Type* psychic = new Type(name, 11, psychicweaknesses);

    double *bugweaknesses = new double[15];

    bugweaknesses[0] = 1.0;//normal
    bugweaknesses[1] = 2.0;//fire
    bugweaknesses[2] = 1.0;//water
    bugweaknesses[3] = 1.0;//electric
    bugweaknesses[4] = 0.5;//grass
    bugweaknesses[5] = 1.0;//ice
    bugweaknesses[6] = 0.5;//fighting
    bugweaknesses[7] = 2.0;//poison
    bugweaknesses[8] = 0.5;//ground
    bugweaknesses[9] = 2.0;//flying
    bugweaknesses[10] = 1.0;//psychic
    bugweaknesses[11] = 1.0;//bug
    bugweaknesses[12] = 2.0;//rock
    bugweaknesses[13] = 1.0;//ghost
    bugweaknesses[14] = 1.0;//dragon

    name = "Bug";
    Type* bug = new Type(name, 12, bugweaknesses);

    double *rockweaknesses = new double[15];

    rockweaknesses[0] = 0.5;//normal
    rockweaknesses[1] = 0.5;//fire
    rockweaknesses[2] = 2.0;//water
    rockweaknesses[3] = 1.0;//electric
    rockweaknesses[4] = 2.0;//grass
    rockweaknesses[5] = 1.0;//ice
    rockweaknesses[6] = 2.0;//fighting
    rockweaknesses[7] = 0.5;//poison
    rockweaknesses[8] = 2.0;//ground
    rockweaknesses[9] = 0.5;//flying
    rockweaknesses[10] = 1.0;//psychic
    rockweaknesses[11] = 1.0;//bug
    rockweaknesses[12] = 1.0;//rock
    rockweaknesses[13] = 1.0;//ghost
    rockweaknesses[14] = 1.0;//dragon

    name = "Rock";
    Type* rock = new Type(name, 13, rockweaknesses);

    double *ghostweaknesses = new double[15];

    ghostweaknesses[0] = 0.0;//normal
    ghostweaknesses[1] = 1.0;//fire
    ghostweaknesses[2] = 1.0;//water
    ghostweaknesses[3] = 1.0;//electric
    ghostweaknesses[4] = 1.0;//grass
    ghostweaknesses[5] = 1.0;//ice
    ghostweaknesses[6] = 0.0;//fighting
    ghostweaknesses[7] = 0.5;//poison
    ghostweaknesses[8] = 1.0;//ground
    ghostweaknesses[9] = 1.0;//flying
    ghostweaknesses[10] = 1.0;//psychic
    ghostweaknesses[11] = 1.0;//bug
    ghostweaknesses[12] = 1.0;//rock
    ghostweaknesses[13] = 2.0;//ghost
    ghostweaknesses[14] = 1.0;//dragon

    name = "Ghost";
    Type* ghost = new Type(name, 14, ghostweaknesses);

    double *dragonweaknesses = new double[15];

    dragonweaknesses[0] = 1.0;//normal
    dragonweaknesses[1] = 0.5;//fire
    dragonweaknesses[2] = 0.5;//water
    dragonweaknesses[3] = 0.5;//electric
    dragonweaknesses[4] = 0.5;//grass
    dragonweaknesses[5] = 2.0;//ice
    dragonweaknesses[6] = 1.0;//fighting
    dragonweaknesses[7] = 1.0;//poison
    dragonweaknesses[8] = 1.0;//ground
    dragonweaknesses[9] = 1.0;//flying
    dragonweaknesses[10] = 1.0;//psychic
    dragonweaknesses[11] = 1.0;//bug
    dragonweaknesses[12] = 1.0;//rock
    dragonweaknesses[13] = 1.0;//ghost
    dragonweaknesses[14] = 2.0;//dragon

    name = "Dragon";
    Type* dragon = new Type(name, 15, dragonweaknesses);

    Type* types = new Type[15];

    std::cout << std::endl << "Types array created" << std::endl;

    types[0] = normal;

    std::cout << "Normal added" << std::endl;

    types[1] = fire;

    std::cout << "Fire added" << std::endl;

    types[2] = water;

    std::cout << "Water added" << std::endl;

    types[3] = electric;

    std::cout << "Electric added" << std::endl;

    types[4] = grass;

    std::cout << "Grass added" << std::endl;

    types[5] = ice;

    std::cout << "Ice added" << std::endl;

    types[6] = fighting;

    std::cout << "Fighting added" << std::endl;

    types[7] = poison;

    std::cout << "Poisoned added" << std::endl;

    types[8] = ground;

    std::cout << "Ground added" << std::endl;

    types[9] = flying;

    std::cout << "Flying added" << std::endl;

    types[10] = psychic;

    std::cout << "Psychic added" << std::endl;

    types[11] = bug;

    std::cout << "Bug added" << std::endl;

    types[12] = rock;

    std::cout << "Rock added" << std::endl;

    types[13] = ghost;

    std::cout << "Ghost added" << std::endl;

    types[14] = dragon;

    std::cout << "Dragon added" << std::endl;

    std::cout << "Types array filled" << std::endl;

    return types;
}
