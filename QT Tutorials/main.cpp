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

#include "MainWindow.h"
#include "QTabScrollWidget.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow *window = new MainWindow(500,500);

    window->show();
    return app.exec();
}