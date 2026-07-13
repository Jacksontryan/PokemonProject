#include <iostream>
#include <QWidget>
#include <QApplication>
#include <QLabel>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include <QTimer>
#include <QWindow>
#include <QTabWidget>
#include <QPushButton>

#include "FlowLayout.h"
#include "QTabScrollWidget.h"
#include "../SmartPointer.h"
//#include "IKnowWhatIAmDoingNow/MainWindow.h"
#include "MainWindow.h"
#include "Tab.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    //MainWindow *window = new MainWindow(1000,600);
    SmartPointer<MainWindow> window = SmartPointer<MainWindow>::newPointer(new MainWindow(1000, 600));
    //window.get().show();

    std::cout << "Window created" << std::endl;


    //QVBoxLayout *layout = new QVBoxLayout();
    //window.get().setLayout(layout);

    std::cout << "layout created" << std::endl;

    //layout->addWidget(Tab::gen1());

    std::cout << "object added" << std::endl;

    window.get().show();

    std::cout << "Showing" << std::endl;
    //window.get().showMaximized();

    //Page *page = new Page();
    //page->show();

    //Tab *tab1 = Tab::gen1();
    //tab1->show();

    return app.exec();
}
