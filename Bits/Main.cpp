//
// Created by jacksonryan on 6/27/26.
//

#include <iostream>
#include <ostream>

#include "Byte.h"

int main() {

    std::vector<bool> v;

    long long int i = 0;
    while (true) {
        //std::cout << i++ << std::endl;
        v.push_back(i%2);
        std::cout << v.size() << std::endl;
        i++;
    }

    return 0;
}
