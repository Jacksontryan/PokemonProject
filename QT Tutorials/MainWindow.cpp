//
// Created by jacksonryan on 6/17/26.
//

#include "MainWindow.h"

#include <iostream>
#include <QVBoxLayout>
#include <QPushButton>
#include "QTabScrollWidget.h"
#include <QLabel>
#include <QComboBox>


MainWindow::MainWindow(int width, int height) {
    stack = new QStackedWidget(this);

    this->width = width;
    this->height = height;

    createMainMenu();
    //createRedMenu();
    createGen1TypeMenu();

    stack->addWidget(main_menu);
    stack->addWidget(gen1TypeMenu);
    //stack->addWidget(red_menu);

    layout = new QVBoxLayout(this);
    layout->addWidget(stack);

    stack->setFixedSize(width, height);

    setLayout(layout);

    createTypeTiles();

    stack->setCurrentWidget(main_menu);
}

MainWindow::~MainWindow() {
    delete stack;
    delete layout;
}

void MainWindow::createMainMenu() {
    main_menu = new QWidget();
    main_menu->setFixedSize(this->width,this->height);

    windowLayout = new QVBoxLayout(main_menu);
    windowLayout->setContentsMargins(0, 0, 0, 0);

    tab = new QTabScrollWidget();
    windowLayout->addWidget(tab);

    page1 = new QWidget();
    tab->addTab(page1, QString("Home"));

    page2 = new QWidget();
    tab->addTab(page2, QString("Gen 1"));

    pushButton1 = new QPushButton(QString("Red"));
    pushButton2 = new QPushButton(QString("Blue"));
    pushButton3 = new QPushButton(QString("Yellow"));
    pushButtonTypes = new QPushButton(QString("Type Chart"));
    pushButtonTypes->setParent(page2);
    pushButtonTypes->setGeometry(QRect(10, 85, 120, 20));

    connect(pushButtonTypes, &QPushButton::clicked, [this] {
        stack->setCurrentWidget(gen1TypeMenu);
    });

    pushButton1->setParent(page2);
    pushButton1->setGeometry(QRect(10, 10, 120, 20));
    /*connect(pushButton1, &QPushButton::clicked, [this] {
        stack->setCurrentWidget(red_menu);
    });*/

    pushButton2->setParent(page2);
    pushButton2->setGeometry(QRect(10, 35, 120, 20));

    pushButton3->setParent(page2);
    pushButton3->setGeometry(QRect(10, 60, 120, 20));

    page3 = new QWidget();
    tab->addTab(page3, QString("Gen 2"));
    pushButton4 = new QPushButton(QString("Gold"));
    pushButton4->setParent(page3);
    pushButton4->setGeometry(QRect(10, 10, 120, 20));

    pushButton5 = new QPushButton(QString("Silver"));
    pushButton5->setParent(page3);
    pushButton5->setGeometry(QRect(10, 35, 120, 20));

    pushButton6 = new QPushButton(QString("Crystal"));
    pushButton6->setParent(page3);
    pushButton6->setGeometry(QRect(10, 60, 120, 20));

    page4 = new QWidget();
    tab->addTab(page4, QString("Gen 3"));

    pushButton7 = new QPushButton(QString("Ruby"));
    pushButton7->setParent(page4);
    pushButton7->setGeometry(QRect(10, 10, 120, 20));

    pushButton8 = new QPushButton(QString("Sapphire"));
    pushButton8->setParent(page4);
    pushButton8->setGeometry(QRect(10, 35, 120, 20));

    pushButton9 = new QPushButton(QString("Emerald"));
    pushButton9->setParent(page4);
    pushButton9->setGeometry(QRect(10, 60, 120, 20));

    pushButton10 = new QPushButton(QString("Fire Red"));
    pushButton10->setParent(page4);
    pushButton10->setGeometry(QRect(10, 85, 120, 20));

    pushButton11 = new QPushButton(QString("Leaf Green"));
    pushButton11->setParent(page4);
    pushButton11->setGeometry(QRect(10, 110, 120, 20));

    page5 = new QWidget();
    tab->addTab(page5, QString("Gen 4"));

    pushButton12 = new QPushButton(QString("Diamond"));
    pushButton12->setParent(page5);
    pushButton12->setGeometry(QRect(10, 10, 120, 20));

    pushButton13 = new QPushButton(QString("Pearl"));
    pushButton13->setParent(page5);
    pushButton13->setGeometry(QRect(10, 35, 120, 20));

    pushButton14 = new QPushButton(QString("Platinum"));
    pushButton14->setParent(page5);
    pushButton14->setGeometry(QRect(10, 60, 120, 20));

    pushButton15 = new QPushButton(QString("Heart Gold"));
    pushButton15->setParent(page5);
    pushButton15->setGeometry(QRect(10, 85, 120, 20));

    pushButton16 = new QPushButton(QString("Soul Silver"));
    pushButton16->setParent(page5);
    pushButton16->setGeometry(QRect(10, 110, 120, 20));

    page6 = new QWidget();
    tab->addTab(page6, QString("Gen 5"));
    pushButton17 = new QPushButton(QString("Black"));
    pushButton17->setParent(page6);
    pushButton17->setGeometry(QRect(10, 10, 120, 20));

    pushButton18 = new QPushButton(QString("White"));
    pushButton18->setParent(page6);
    pushButton18->setGeometry(QRect(10, 35, 120, 20));

    pushButton19 = new QPushButton(QString("Black 2"));
    pushButton19->setParent(page6);
    pushButton19->setGeometry(QRect(10, 60, 120, 20));

    pushButton20 = new QPushButton(QString("White 2"));
    pushButton20->setParent(page6);
    pushButton20->setGeometry(QRect(10, 85, 120, 20));

    page7 = new QWidget();
    tab->addTab(page7, QString("Gen 6"));

    pushButton21 = new QPushButton(QString("X"));
    pushButton21->setParent(page7);
    pushButton21->setGeometry(QRect(10, 10, 120, 20));

    pushButton22 = new QPushButton(QString("Y"));
    pushButton22->setParent(page7);
    pushButton22->setGeometry(QRect(10, 35, 120, 20));

    pushButton23 = new QPushButton(QString("Omega Ruby"));
    pushButton23->setParent(page7);
    pushButton23->setGeometry(QRect(10, 60, 120, 20));

    pushButton24 = new QPushButton(QString("Alpha Sapphire"));
    pushButton24->setParent(page7);
    pushButton24->setGeometry(QRect(10, 85, 120, 20));

    page8 = new QWidget();
    tab->addTab(page8, QString("Gen 7"));

    pushButton25 = new QPushButton(QString("Sun"));
    pushButton25->setParent(page8);
    pushButton25->setGeometry(QRect(10, 10, 120, 20));

    pushButton26 = new QPushButton(QString("Moon"));
    pushButton26->setParent(page8);
    pushButton26->setGeometry(QRect(10, 35, 120, 20));

    pushButton27 = new QPushButton(QString("ULtra Sun"));
    pushButton27->setParent(page8);
    pushButton27->setGeometry(QRect(10, 60, 120, 20));

    pushButton28 = new QPushButton(QString("Ultra Moon"));
    pushButton28->setParent(page8);
    pushButton28->setGeometry(QRect(10, 85, 120, 20));

    pushButton29 = new QPushButton(QString("Let's Go Pikachu"));
    pushButton29->setParent(page8);
    pushButton29->setGeometry(QRect(10, 110, 120, 20));

    pushButton30 = new QPushButton(QString("Let's Go Eevee"));
    pushButton30->setParent(page8);
    pushButton30->setGeometry(QRect(10, 135, 120, 20));

    page9 = new QWidget();
    tab->addTab(page9, QString("Gen 8"));

    pushButton31 = new QPushButton(QString("Sword"));
    pushButton31->setParent(page9);
    pushButton31->setGeometry(QRect(10, 10, 120, 20));

    pushButton32 = new QPushButton(QString("Shield"));
    pushButton32->setParent(page9);
    pushButton32->setGeometry(QRect(10, 35, 120, 20));

    pushButton33 = new QPushButton(QString("Brilliant Diamond"));
    pushButton33->setParent(page9);
    pushButton33->setGeometry(QRect(10, 60, 120, 20));

    pushButton34 = new QPushButton(QString("Shining Pearl"));
    pushButton34->setParent(page9);
    pushButton34->setGeometry(QRect(10, 85, 120, 20));

    pushButton35 = new QPushButton(QString("Legends Arceus"));
    pushButton35->setParent(page9);
    pushButton35->setGeometry(QRect(10, 110, 120, 20));

    page10 = new QWidget();
    tab->addTab(page10, QString("Gen 9"));

    pushButton36 = new QPushButton(QString("Scarlet"));
    pushButton36->setParent(page10);
    pushButton36->setGeometry(QRect(10, 10, 120, 20));

    pushButton37 = new QPushButton(QString("Violet"));
    pushButton37->setParent(page10);
    pushButton37->setGeometry(QRect(10, 35, 120, 20));

    pushButton38 = new QPushButton(QString("Legends Z-A"));
    pushButton38->setParent(page10);
    pushButton38->setGeometry(QRect(10, 60, 120, 20));
}

void MainWindow::createGen1TypeMenu() {
    gen1TypeMenu = new QWidget();
    gen1TypeMenu->setFixedSize(width, height);

    title = new QLabel(QString("Gen 1 Type Chart"));
    title->setGeometry(QRect(width / 2 - 60, 10, 120, 20));
    title->setAlignment(Qt::AlignCenter);
    title->setParent(gen1TypeMenu);

    homeButton = new QPushButton(QString("Home"));
    homeButton->setParent(gen1TypeMenu);
    homeButton->setGeometry(QRect(width / 2 - 40, height - 30, 80, 20));

    connect(homeButton, &QPushButton::clicked, [this] {
        stack->setCurrentWidget(this->main_menu);
    });

    QComboBox* comboBox = new QComboBox();

    //comboBox->addItem();

}

void MainWindow::createTypeTiles() {
    QPixmap sheet(":/images/types.png");
    if (sheet.isNull()) {
        qWarning("Failed to load tileset!");
        return;
    }
    const int tileWidth = sheet.width();
    const int tileHeight = sheet.height() / 19;
    const int tileCount = 19;

    for (int i = 0; i < tileCount; ++i) {
        QRect tileRect(0, i * tileHeight, tileWidth, tileHeight);
        QPixmap tilePixmap = sheet.copy(tileRect);

        QPushButton *button = new QPushButton(page1);
        button->setIcon(QIcon(tilePixmap));
        button->setIconSize(tilePixmap.size());      // icon fills exactly
        button->setFixedSize(tilePixmap.size());      // button matches icon, no border space
        button->setFlat(true);                         // removes button chrome
        button->setStyleSheet("QPushButton { border: none; padding: 0; }");
        button->setGeometry(i%2*tileWidth, i/2* tileHeight, tileWidth, tileHeight);

        //layout->addWidget(button);

        // Optional: track which tile index was clicked
        connect(button, &QPushButton::clicked, [i]() {
            std::cout << "Tile" << i << "clicked";
        });
    }
}

void MainWindow::createRedMenu() {
    red_menu = new QWidget();
    red_menu->setFixedSize(width,height);

    title = new QLabel(QString("Red"));
    title->setGeometry(250,10, 80, 20);
    title->setAlignment(Qt::AlignCenter);

    homeButton = new QPushButton(QString("Home"));
    homeButton->setParent(red_menu);
    title->setParent(red_menu);
    homeButton->setGeometry(QRect(250, 250, 80, 20));

    connect(homeButton, &QPushButton::clicked, [this] {
        stack->setCurrentWidget(this->main_menu);
    });

}

void MainWindow::createBlueMenu() {

}

void MainWindow::createYellowMenu() {

}

void MainWindow::createGoldMenu() {}

void MainWindow::createSilverMenu() {}

void MainWindow::createCrystalMenu() {}

void MainWindow::createRubyMenu() {}

void MainWindow::createSapphireMenu() {}

void MainWindow::createEmeraldMenu() {

}

void MainWindow::createFireRedMenu() {

}

void MainWindow::createLeafGreenMenu() {

}

void MainWindow::createDiamondMenu() {

}

void MainWindow::createPearlMenu() {

}

void MainWindow::createPlatinumMenu() {

}

void MainWindow::createHeartGoldMenu() {

}

void MainWindow::createSoulSilverMenu() {

}

void MainWindow::createBlackMenu() {

}

void MainWindow::createWhiteMenu() {}

void MainWindow::createBlack2Menu() {

}

void MainWindow::createWhite2Menu() {}

void MainWindow::createXMenu() {

}

void MainWindow::createYMenu() {

}

void MainWindow::createOmegaRubyMenu() {

}

void MainWindow::createAlphaSapphireMenu() {

}

void MainWindow::createSunMenu() {

}

void MainWindow::createMoonMenu() {

}

void MainWindow::createUltraSunMenu() {

}

void MainWindow::createUltraMoonMenu() {

}

void MainWindow::createPikachuMenu() {

}

void MainWindow::createEeveeMenu() {

}

void MainWindow::createSwordMenu() {}

void MainWindow::createShieldMenu() {

}

void MainWindow::createBrilliantDiamondMenu() {

}

void MainWindow::createShiningPearlMenu() {

}

void MainWindow::createLegendsArceusMenu() {

}

void MainWindow::createScarletMenu() {

}

void MainWindow::createVioletMenu() {}

void MainWindow::createZAMenu() {}