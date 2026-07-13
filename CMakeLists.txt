cmake_minimum_required(VERSION 4.0)
project(PokemonProject)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

#set(CMAKE_PREFIX_PATH "/home/jacksonryan/Qt/6.11.1/gcc_64")

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

qt_add_resources(RESOURCES resources.qrc)

add_executable(PokemonProject "QT Tutorials/main.cpp" ${RESOURCES}
        "QT Tutorials/QTabScrollWidget.cpp"
        "QT Tutorials/QTabScrollWidget.h"
        SmartPointer.h
        Main.cpp
        ParentClasses/Type.cpp
        ParentClasses/Type.h
        gen1/Gen1Type.cpp
        gen1/Gen1Type.h
        ParentClasses/GrowthRate.cpp
        ParentClasses/GrowthRate.h
        ParentClasses/Move.cpp
        ParentClasses/Move.h
        "QT Tutorials/FlowLayout.h"
        "QT Tutorials/FlowLayout.cpp"
        "QT Tutorials/MainWindow.h"
        "QT Tutorials/MainWindow.cpp"
        "QT Tutorials/Page.h"
        "QT Tutorials/Pages.h"
        "QT Tutorials/Tab.h"
        "QT Tutorials/MainMenu.h"
)

include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.5.3
)
FetchContent_MakeAvailable(Catch2)
target_link_libraries(PokemonProject PRIVATE Catch2::Catch2WithMain)

target_link_libraries(PokemonProject PRIVATE Qt6::Core Qt6::Widgets)