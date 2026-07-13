//
// Created by jacksonryan on 7/11/26.
//

#ifndef POKEMONPROJECT_TAB_H
#define POKEMONPROJECT_TAB_H
#include <QPushButton>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <iostream>

class Tab : public QWidget{
    Q_OBJECT
    std::vector<QPushButton *> gameButtons;
    QPushButton *typeChartButton;
    QPushButton *pokedexButton;
    QVBoxLayout *layout;
    QLabel *title;
    QWidget *layer1;
    QWidget *layer2;
    QWidget *layer3;
    QWidget *layer4;
public:

    //This comment commemorates the first time I figured out a segfault error without the help of AI - 07/12/2026
    Tab(int gen = -1) {

        std::cout << "Constructor started"<< std::endl;

        this->layout = new QVBoxLayout(this);

        title = new QLabel(("Generation " + std::to_string(gen)).data(),this);
        title->setStyleSheet("background-color: orange;");
        title->setAlignment(Qt::AlignCenter);
        layer1 = new QWidget(this);
        /*QPalette palette = QPalette();
        palette.setColor(QPalette::WindowText, Qt::blue);
        layer1->setAutoFillBackground(true);
        layer1->setPalette(palette);*/

        layer1->setStyleSheet("background-color: blue;");

        layer2 = new QWidget(this);
        /*QPalette palette2 = QPalette();
        palette2.setColor(QPalette::WindowText, Qt::red);
        layer2->setAutoFillBackground(true);
        layer2->setPalette(palette2);*/
        layer2->setStyleSheet("background-color: red;");

        layer3 = new QWidget(this);
        /*QPalette palette3 = QPalette();
        palette3.setColor(QPalette::WindowText, Qt::green);
        layer3->setAutoFillBackground(true);
        layer3->setPalette(palette3);*/
        layer3->setStyleSheet("background-color: green;");

        layer4 = new QWidget(this);
        /*QPalette palette4 = QPalette();
        palette4.setColor(QPalette::WindowText, Qt::yellow);
        layer4->setAutoFillBackground(true);
        layer4->setPalette(palette4);*/
        layer4->setStyleSheet("background-color: yellow;");

        std::cout << "Layers set" << std::endl;

        layout->addWidget(title);
        layout->addWidget(layer1);
        layout->addWidget(layer2);
        layout->addWidget(layer3);
        layout->addWidget(layer4);

        std::cout << "Added Widgets" << std::endl;

        layer1->setLayout(new QHBoxLayout());
        layer2->setLayout(new QHBoxLayout());
        layer3->setLayout(new QHBoxLayout());
        layer4->setLayout(new QHBoxLayout());

        std::cout << "Added Layouts" << std::endl;

        typeChartButton = new QPushButton("Type Chart", this);
        pokedexButton = new QPushButton("Pokedex", this);

        std::cout << "Added Buttons" << std::endl;

        layer4->layout()->addWidget(typeChartButton);

        std::cout << "Flag 1" << std::endl;

        layer4->layout()->addWidget(pokedexButton);

        std::cout << "Bottom Buttons set" << std::endl;

    }

    void addGame(std::string gameName) {
        int row = this->gameButtons.size() / 2;

        QPushButton *gameButton = new QPushButton(gameName.data(), this);

        if (row == 0) {
            layer1->layout()->addWidget(gameButton);
        }else if (row == 1) {
            layer2->layout()->addWidget(gameButton);
        }else{
            layer3->layout()->addWidget(gameButton);
        }
        this->gameButtons.push_back(gameButton);
    }

    static Tab* gen1() {
        std::cout << "Generation 1 tab" << std::endl;

        Tab *tab = new Tab(1);
        tab->layer1->layout()->addWidget(new QWidget());
        tab->addGame("Red");
        tab->layer1->layout()->addWidget(new QWidget());
        tab->addGame("Blue");
        tab->layer1->layout()->addWidget(new QLabel());
        tab->layer2->layout()->addWidget(new QWidget());
        tab->addGame("Yellow");

        tab->layer2->layout()->addWidget(new QWidget());

        tab->layer2->layout()->addWidget(new QWidget());

        tab->layer2->layout()->addWidget(new QWidget());

        tab->layer3->layout()->addWidget(new QLabel());
        tab->layer3->layout()->addWidget(new QWidget());

        return tab;

    }

    static Tab* gen2() {
        std::cout << "Generation 2 tab" << std::endl;
        Tab *tab = new Tab(2);
        tab->addGame("Gold");
        tab->addGame("Silver");
        tab->addGame("Crystal");

        tab->layer2->layout()->addWidget(new QWidget());

        tab->layer3->layout()->addWidget(new QLabel());
        tab->layer3->layout()->addWidget(new QWidget());

        return tab;

    }

    static Tab* gen3() {
        std::cout << "Generation 3 tab" << std::endl;
        Tab *tab = new Tab(3);
        tab->addGame("Ruby");
        tab->addGame("Sapphire");
        tab->addGame("Emerald");
        tab->addGame("Fire Red");
        tab->addGame("Leaf Green");

        tab->layer3->layout()->addWidget(new QWidget());

        return tab;
    }

    static Tab* gen4() {
        std::cout << "Generation 4 tab" << std::endl;
        Tab *tab = new Tab(4);
        tab->addGame("Diamond");
        tab->addGame("Pearl");
        tab->addGame("Platinum");
        tab->addGame("Heart Gold");
        tab->addGame("Soul Silver");

        tab->layer3->layout()->addWidget(new QWidget());

        return tab;

    }

    static Tab* gen5() {
        std::cout << "Generation 5 tab" << std::endl;

        Tab *tab = new Tab(5);
        tab->addGame("Black");
        tab->addGame("White");
        tab->addGame("Black 2");
        tab->addGame("White 2");

        tab->layer3->layout()->addWidget(new QLabel());
        tab->layer3->layout()->addWidget(new QWidget());

        return tab;
    }

    static Tab* gen6() {
        std::cout << "Generation 6 tab" << std::endl;
        Tab *tab = new Tab(6);
        tab->addGame("X");
        tab->addGame("Y");
        tab->addGame("Omega Ruby");
        tab->addGame("Alpha Sapphire");
        tab->layer3->layout()->addWidget(new QLabel());
        tab->layer3->layout()->addWidget(new QWidget());
        return tab;
    }

    static Tab* gen7() {
        std::cout << "Generation 7 tab" << std::endl;
        Tab *tab = new Tab(7);
        tab->addGame("Sun");
        tab->addGame("Moon");
        tab->addGame("Ultra Sun");
        tab->addGame("Ultra Moon");
        tab->addGame("Let's Go Pikachu");
        tab->addGame("Let's Go Eevee");

        tab->layer3->layout()->addWidget(new QWidget());

        return tab;

    }

    static Tab* gen8() {
        std::cout << "Generation 8 tab" << std::endl;
        Tab *tab = new Tab(8);
        tab->addGame("Sword");
        tab->addGame("Shield");
        tab->addGame("Brilliant Diamond");
        tab->addGame("Shining Pearl");
        tab->addGame("Legends Arceus");

        tab->layer3->layout()->addWidget(new QWidget());

        return tab;

    }

    static Tab* gen9() {
        std::cout << "Generation 9 tab" << std::endl;
        Tab *tab = new Tab(9);
        tab->addGame("Scarlet");
        tab->addGame("Violet");
        tab->addGame("Legends ZA");

        tab->layer2->layout()->addWidget(new QWidget());
        tab->layer3->layout()->addWidget(new QLabel());
        tab->layer3->layout()->addWidget(new QWidget());

        return tab;

    }

};


#endif //POKEMONPROJECT_TAB_H
