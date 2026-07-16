//
// Created by jacksonryan on 6/24/26.
//

#include <iostream>
#include <ostream>

#include "dbg.h"
#include "SmartPointer.h"
#include "ParentClasses/GrowthRate.h"

int main0() {

    dbg::err << "Error!" << dbg::nl;

    dbg::log << "Logging: " << std::to_string(10) << dbg::nl;

    dbg::Logger logger1(dbg::Color::Blue, "X = ", dbg::nl);
    dbg::Logger logger2(dbg::Color::Red, "x = ", dbg::nl);
    dbg::Logger logger3(dbg::Color::Yellow, "x = ", dbg::nl);
    dbg::Logger logger4(dbg::Color::Purple, "x = ", dbg::nl);
    dbg::Logger logger5(dbg::Color::Green, "x = ", dbg::nl);
    dbg::Logger logger6(dbg::Color::None, "x = ", dbg::nl);

    logger1 << "Hello";
    logger2 << "Hello";
    logger3 << "Hello";
    logger4 << "Hello";
    logger5 << "Hello";
    logger6 << "Hello";

    std::cout << "Flag 1" << std::endl;

    logger1.disable();
    logger2.disable();
    logger3.disable();
    logger4.disable();
    logger5.disable();
    logger6.disable();

    logger1 << "Hello";
    logger2 << "Hello";
    logger3 << "Hello";
    logger4 << "Hello";
    logger5 << "Hello";
    logger6 << "Hello";

    std::cout << "Flag 2" << std::endl;

    logger1.enable();
    logger2.enable();
    logger3.enable();
    logger4.enable();
    logger5.enable();
    logger6.enable();

    logger1 << "Hello";
    logger2 << "Hello";
    logger3 << "Hello";
    logger4 << "Hello";
    logger5 << "Hello";
    logger6 << "Hello";

    std::cout << "Flag 3" << std::endl;

    dbg::disableLoggers();

    logger1 << "Hello";
    logger2 << "Hello";
    logger3 << "Hello";
    logger4 << "Hello";
    logger5 << "Hello";
    logger6 << "Hello";

    std::cout << "Flag 4" << std::endl;

    dbg::enableLoggers();

    logger1 << "Hello";
    logger2 << "Hello";
    logger3 << "Hello";
    logger4 << "Hello";
    logger5 << "Hello";
    logger6 << "Hello";

    std::cout << "Flag 5" << std::endl;


    return 0;
}
