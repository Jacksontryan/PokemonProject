cmake_minimum_required(VERSION 4.0)
project(PokemonProject)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

#set(CMAKE_PREFIX_PATH "/home/jacksonryan/Qt/6.11.1/gcc_64")

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

add_executable(PokemonProject "QT Tutorials/main.cpp"
        ParentClasses/PokemonBase.h
        ParentClasses/SpeciesBase.h
        ParentClasses/GrowthRateBase.h
        ParentClasses/EvolutionMethodBase.h
        ParentClasses/MoveBase.h
        gen1/Type.h
        ParentClasses/TypeBase.h
        "QT Tutorials/QTabScrollWidget.cpp"
        "QT Tutorials/QTabScrollWidget.h"
        "QT Tutorials/MainWindow.cpp"
        "QT Tutorials/MainWindow.h"
        gen1/Type.cpp
        gen1/EvolutionMethod.cpp
        gen1/EvolutionMethod.h
        ParentClasses/TypeBase.cpp
)

target_link_libraries(PokemonProject PRIVATE Qt6::Core Qt6::Widgets)