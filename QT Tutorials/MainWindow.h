//
// Created by jacksonryan on 6/17/26.
//

#ifndef POKEMONPROJECT_MAINWINDOW_H
#define POKEMONPROJECT_MAINWINDOW_H
#include <QStackedWidget>
#include <QWidget>
#include <QLabel>

class QPushButton;
class QTabScrollWidget;
class QVBoxLayout;

class MainWindow : public QWidget{
private:
    QStackedWidget* stack;
    QWidget* main_menu,
    *red_menu, *blue_menu, *yellow_menu,
    *gold_menu, *silver_menu, *crystal_menu,
    *ruby_menu, *sapphire_menu, *emerald_menu, *fire_red_menu, *leaf_green_menu,
    *diamond_menu, *pearl_menu, *platinum_menu, *heart_gold_menu, *soul_silver_menu,
    *black_menu, *white_menu, *black2_menu, *white2_menu,
    *x_menu, *y_menu, *omega_ruby_menu, *alpha_sapphire_menu,
    *sun_menu, *moon_menu, *ultra_sun_menu, *ultra_moon_menu, *pikachu_menu, *eevee_menu,
    *sword_menu, *shield_menu, *brilliant_diamond_menu, *shining_pearl_menu, *legends_arceus_menu,
    *scarlet_menu, *violet_menu, *legends_za_menu,
    *page1, *page2, *page3, *page4, *page5, *page6, *page7, *page8, *page9, *page10,
    *gen1TypeMenu;

    QPushButton *pushButton1, *pushButton2, *pushButton3, *pushButton4, *pushButton5, *pushButton6, *pushButton7, *pushButton8, *pushButton9, *pushButton10,
    *pushButton11, *pushButton12, *pushButton13, *pushButton14, *pushButton15, *pushButton16, *pushButton17, *pushButton18, *pushButton19, *pushButton20,
    *pushButton21, *pushButton22, *pushButton23, *pushButton24, *pushButton25, *pushButton26, *pushButton27, *pushButton28, *pushButton29, *pushButton30,
    *pushButton31, *pushButton32, *pushButton33, *pushButton34, *pushButton35, *pushButton36, *pushButton37, *pushButton38,
    *homeButton, *pushButtonTypes;

    QVBoxLayout *layout, *windowLayout;
    QTabScrollWidget *tab;

    QLabel *title;


    int height;
    int width;

    void createMainMenu();
    void createRedMenu();
    void createBlueMenu();
    void createYellowMenu();
    void createGen1TypeMenu();

    void createGoldMenu();
    void createSilverMenu();
    void createCrystalMenu();

    void createRubyMenu();
    void createSapphireMenu();
    void createEmeraldMenu();
    void createFireRedMenu();
    void createLeafGreenMenu();

    void createDiamondMenu();
    void createPearlMenu();
    void createPlatinumMenu();
    void createHeartGoldMenu();
    void createSoulSilverMenu();

    void createBlackMenu();
    void createWhiteMenu();
    void createBlack2Menu();
    void createWhite2Menu();

    void createXMenu();
    void createYMenu();
    void createOmegaRubyMenu();
    void createAlphaSapphireMenu();

    void createSunMenu();
    void createMoonMenu();
    void createUltraSunMenu();
    void createUltraMoonMenu();
    void createPikachuMenu();
    void createEeveeMenu();

    void createSwordMenu();
    void createShieldMenu();
    void createBrilliantDiamondMenu();
    void createShiningPearlMenu();
    void createLegendsArceusMenu();

    void createScarletMenu();
    void createVioletMenu();
    void createZAMenu();

    void createTypeTiles();

public:
    MainWindow(int width, int height);
    ~MainWindow();

};


#endif //POKEMONPROJECT_MAINWINDOW_H
