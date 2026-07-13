//
// Created by jacksonryan on 7/12/26.
//

#ifndef POKEMONPROJECT_MAINMENU_H
#define POKEMONPROJECT_MAINMENU_H
#include "QTabScrollWidget.h"
#include <QWidget>

#include "Tab.h"

class MainMenu : public QWidget{
    Q_OBJECT
    QTabScrollWidget *tab;
    QVBoxLayout *layout;
    public:
    MainMenu() {

        std::cout << "Main Menu started" << std::endl;

        layout = new QVBoxLayout(this);
        tab = new QTabScrollWidget(this);
        layout->addWidget(tab);
        tab->addTab(new Tab(), QString("Home"));

        std::cout << "Home Created" << std::endl;

        tab->addTab(Tab::gen1(), QString("Gen 1"));

        std::cout << "Gen 1 Created" << std::endl;

        tab->addTab(Tab::gen2(), QString("Gen 2"));

        std::cout << "Gen 2 Created" << std::endl;

        tab->addTab(Tab::gen3(), QString("Gen 3"));

        std::cout << "Gen 3 Created" << std::endl;

        tab->addTab(Tab::gen4(), QString("Gen 4"));

        std::cout << "Gen 4 Created" << std::endl;

        tab->addTab(Tab::gen5(), QString("Gen 5"));

        std::cout << "Gen 5 Created" << std::endl;

        tab->addTab(Tab::gen6(), QString("Gen 6"));

        std::cout << "Gen 6 Created" << std::endl;

        tab->addTab(Tab::gen7(), QString("Gen 7"));

        std::cout << "Gen 7 Created" << std::endl;

        tab->addTab(Tab::gen8(), QString("Gen 8"));

        std::cout << "Gen 8 Created" << std::endl;

        tab->addTab(Tab::gen9(), QString("Gen 9"));

        std::cout << "Gen 9 Created" << std::endl;

    }
};


#endif //POKEMONPROJECT_MAINMENU_H
