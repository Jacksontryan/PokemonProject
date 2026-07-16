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
#include <QEvent>
#include <QResizeEvent>

#include "GameButton.h"

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

        if (gen == -1) {
            title->setText("Home");
        }

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

        pokedexButton->setFixedSize(100,100);
        typeChartButton->setFixedSize(100,100);

        if (gen == -1) {
            QLabel *label = new QLabel();
            label->setFixedSize(100, 100);
            layer1->layout()->addWidget(label);

            QLabel *label2 = new QLabel();
            label->setFixedSize(100, 100);
            layer2->layout()->addWidget(label2);

            QLabel *label3 = new QLabel();
            label->setFixedSize(100, 100);
            layer3->layout()->addWidget(label3);

        }

        std::cout << "Bottom Buttons set" << std::endl;

    }

    void addGame(std::string gameName, std::string url) {
        int row = this->gameButtons.size() / 2;

        GameButton* gameButton = new GameButton(this, gameName, url);
        gameButton->setFixedSize(100, 100);
        gameButton->setIconSize(QSize(100, 100));
        //QPushButton *gameButton = new QPushButton(gameName.data(), this);

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
        tab->addGame("Red", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/CHARIZARD.png");
        tab->addGame("Blue", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/BLASTOISE.png");
        tab->addGame("Yellow", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/PIKACHU.png");

        QLabel *label = new QLabel();
        label->setFixedSize(100, 100);

        tab->layer3->layout()->addWidget(label);

        return tab;

    }

    static Tab* gen2() {
        std::cout << "Generation 2 tab" << std::endl;
        Tab *tab = new Tab(2);
        tab->addGame("Gold", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/HOOH.png");
        tab->addGame("Silver", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/LUGIA.png");
        tab->addGame("Crystal", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/SUICUNE.png");

        QLabel *label = new QLabel();
        label->setFixedSize(100, 100);

        tab->layer3->layout()->addWidget(label);

        return tab;

    }

    static Tab* gen3() {
        std::cout << "Generation 3 tab" << std::endl;
        Tab *tab = new Tab(3);
        tab->addGame("Ruby", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/GROUDON.png");
        tab->addGame("Sapphire", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/KYOGRE.png");
        tab->addGame("Emerald", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/RAYQUAZA.png");
        tab->addGame("Fire\nRed", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/CHARIZARD.png");
        tab->addGame("Leaf\nGreen", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/VENUSAUR.png");

        return tab;
    }

    static Tab* gen4() {
        std::cout << "Generation 4 tab" << std::endl;
        Tab *tab = new Tab(4);
        tab->addGame("Diamond", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/DIALGA.png");
        tab->addGame("Pearl", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/PALKIA.png");
        tab->addGame("Platinum", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/GIRATINA_1.png");
        tab->addGame("Heart\nGold", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/HOOH.png");
        tab->addGame("Soul\nSilver", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/LUGIA.png");

        tab->layer3->layout()->addWidget(new QWidget());

        return tab;

    }

    static Tab* gen5() {
        std::cout << "Generation 5 tab" << std::endl;

        Tab *tab = new Tab(5);
        tab->addGame("Black", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/RESHIRAM.png");
        tab->addGame("White", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/ZEKROM.png");
        tab->addGame("Black 2", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/KYUREM_2.png");
        tab->addGame("White 2", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/KYUREM_1.png");

        QLabel *label = new QLabel();
        label->setFixedSize(100, 100);

        tab->layer3->layout()->addWidget(label);

        return tab;
    }

    static Tab* gen6() {
        std::cout << "Generation 6 tab" << std::endl;
        Tab *tab = new Tab(6);
        tab->addGame("X", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/XERNEAS.png");
        tab->addGame("Y", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/YVELTAL.png");
        tab->addGame("Omega\nRuby", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/GROUDON_1.png");
        tab->addGame("Alpha\nSapphire", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/KYOGRE_1.png");
        QLabel *label = new QLabel();
        label->setFixedSize(86, 86);

        tab->layer3->layout()->addWidget(label);
        return tab;
    }

    static Tab* gen7() {
        std::cout << "Generation 7 tab" << std::endl;
        Tab *tab = new Tab(7);
        tab->addGame("Sun", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/SOLGALEO.png");
        tab->addGame("Moon", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/LUNALA.png");
        tab->addGame("Ultra\nSun", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/NECROZMA_1.png");
        tab->addGame("Ultra\nMoon", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/NECROZMA_2.png");
        tab->addGame("Let's Go\nPikachu", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/PIKACHU.png");
        tab->addGame("Let's Go\nEevee", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/EEVEE.png");

        tab->layer3->layout()->addWidget(new QWidget());

        return tab;

    }

    static Tab* gen8() {
        std::cout << "Generation 8 tab" << std::endl;
        Tab *tab = new Tab(8);
        tab->addGame("Sword", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/ZACIAN_1.png");
        tab->addGame("Shield", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/ZAMAZENTA_1.png");
        tab->addGame("Brilliant\nDiamond", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/DIALGA.png");
        tab->addGame("Shining\nPearl", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/PALKIA.png");
        tab->addGame("Legends\nArceus", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/ARCEUS.png");

        tab->layer3->layout()->addWidget(new QWidget());

        return tab;

    }

    static Tab* gen9() {
        std::cout << "Generation 9 tab" << std::endl;
        Tab *tab = new Tab(9);
        tab->addGame("Scarlet", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/KORAIDON.png");
        tab->addGame("Violet", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/MIRAIDON.png");
        tab->addGame("Legends\nZA", ":/resources/Pokemon-Essentials/Graphics/Pokemon/Front/FLOETTE_5.png");

        QLabel *label = new QLabel();
        label->setFixedSize(100, 100);

        tab->layer3->layout()->addWidget(label);

        return tab;

    }

    static Tab* homeTab() {
        std::cout << "Home tab" << std::endl;
        Tab *tab = new Tab();
        QLabel *label = new QLabel();
        label->setFixedSize(100, 100);
        tab->layer1->layout()->addWidget(label);

        QLabel *label2 = new QLabel();
        label->setFixedSize(100, 100);
        tab->layer2->layout()->addWidget(label2);

        QLabel *label3 = new QLabel();
        label->setFixedSize(100, 100);
        tab->layer3->layout()->addWidget(label3);

        return tab;
    }

protected:

    void resizeEvent(QResizeEvent *event) override {
        double oldWidthRatio = 84.0/1000;
        double oldHeightRatio = 84.0/600;

        int screenHeight = event->size().height();
        int screenWidth = event->size().width();

        int newWidth = oldWidthRatio * screenWidth;

        std::cout << "New width: " << newWidth << std::endl;

        int numButtons = gameButtons.size();

        std::cout << "Number of buttons: " << numButtons << std::endl;

        for (int i = 0; i < numButtons; i++) {
            gameButtons[i]->setFixedSize(newWidth, newWidth);
            gameButtons[i]->setIconSize(QSize(newWidth, newWidth));
        }

        std::cout << "Button size fixed" << std::endl;

        if (numButtons == 0) {
            layer1->layout()->itemAt(0)->widget()->setFixedSize(QSize(newWidth, newWidth));
            layer2->layout()->itemAt(0)->widget()->setFixedSize(QSize(newWidth, newWidth));
        }

        if (gameButtons.size() < 5) {
            layer3->layout()->itemAt(0)->widget()->setFixedSize(QSize(newWidth, newWidth));
        }

        this->pokedexButton->setFixedSize(newWidth, newWidth);
        this->typeChartButton->setFixedSize(newWidth, newWidth);

        std::cout << "Label Size fixed" << std::endl;

        std::cout << "Width1: " << layer1->size().width() << " Height1: " << layer1->size().height() << std::endl;
        std::cout << "Width2: " << layer2->size().width() << " Height2: " << layer2->size().height() << std::endl;
        std::cout << "Width3: " << layer3->size().width() << " Height3: " << layer3->size().height() << std::endl;
        std::cout << "Width4: " << layer4->size().width() << " Height4: " << layer4->size().height() << std::endl;

    }



};


#endif //POKEMONPROJECT_TAB_H
