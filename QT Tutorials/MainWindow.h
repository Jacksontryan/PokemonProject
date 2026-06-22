//
// Created by jacksonryan on 6/17/26.
//

#ifndef POKEMONPROJECT_MAINWINDOW_H
#define POKEMONPROJECT_MAINWINDOW_H
#include <QStackedWidget>
#include <QWidget>

class MainWindow : public QWidget{
private:
    QStackedWidget* stack;
    QWidget* main_menu, *red_menu, *blue_menu, *yellow_menu, *gold_menu, *silver_menu, *crystal_menu, *ruby_menu, *sapphire_menu, *emerald_menu, *fire_red_menu, *leaf_green_menu, *diamond_menu, *pearl_menu, *platinum_menu, *heart_gold_menu, *soul_silver_menu, *black_menu, *white_menu, *black2_menu, *white2_menu, *x_menu, *y_menu, *omega_ruby_menu, *alpha_sapphire_menu, *sun_menu, *moon_menu, *ultra_sun_menu, *ultra_moon_menu, *pikachu_menu, *eevee_menu, *sword_menu, *shield_menu, *brilliant_diamond_menu, *shining_pearl_menu, *legends_arceus_menu, *scarlet_menu, *violet_menu, *legends_za_menu;

    int height;
    int width;

    void createMainMenu();
    void createRedMenu();
    void createBlueMenu();
    void createYellowMenu();

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

public:
    MainWindow(int width, int height);

};


#endif //POKEMONPROJECT_MAINWINDOW_H
