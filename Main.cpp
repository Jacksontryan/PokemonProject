//
// Created by jacksonryan on 6/24/26.
//

#include <iostream>
#include <ostream>

#include "SmartPointer.h"
#include "ParentClasses/GrowthRate.h"

int main0() {

    SmartPointer<int> ptr = SmartPointer<int>::dynamicPointer();

    int x = 5;
    int y = 20;
    int z = 30;
    int a = x + y + z;

    ptr.addFront(x);

    ptr.addFront(y);

    ptr.addBack(z);

    ptr.addBack(a);

    std::cout << ptr[0] << std::endl;
    std::cout << ptr[1] << std::endl;
    std::cout << ptr[2] << std::endl;
    std::cout << ptr[3] << std::endl;

    return 0;
}
