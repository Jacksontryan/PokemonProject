//
// Created by jacksonryan on 7/10/26.
//

#ifndef POKEMONPROJECT_MAINWINDOW_H
#define POKEMONPROJECT_MAINWINDOW_H

#include <iostream>
#include <QWidget>
#include <QEvent>
#include <QStackedWidget>
#include <QResizeEvent>

#include "MainMenu.h"
#include "Page.h"

class MainWindow : public QWidget{
    Q_OBJECT
    QStackedWidget* stack;
    static constexpr qreal RATIO = 5.0 / 3.0; // width:height = 5:3, so w = h * RATIO
    bool m_resizing = false;
    QVBoxLayout* layout;
    public:
    MainWindow(int width, int height) {
        this->setGeometry(this->x(), this->y(), width, height);
        this->setMinimumSize(width, height);
        stack = new QStackedWidget(this);
        stack->setGeometry(this->x(), this->y(), this->width(), this->height());
        this->layout = new QVBoxLayout(this);
        this->layout->addWidget(stack);
        //Page *page = new Page(this);
        //stack->addWidget(page);
        MainMenu*main = new MainMenu();
        stack->addWidget(main);
        stack->setCurrentIndex(0);
        //page->show();
        this->setMinimumWidth(this->minimumHeight() / 3 * 5);
        std::cout << std::endl << std::endl << std::endl << std::endl << this->minimumWidth() << std::endl;
        std::cout << this->minimumHeight() << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

    }

    protected:

    //written by AI. Going to rewrite later
    void resizeEvent(QResizeEvent *event) override {
        if (m_resizing) {
            QWidget::resizeEvent(event);
            return;
        }

        m_resizing = true;

        QSize newSize = event->size();
        QSize oldSize = event->oldSize();

        int newW, newH;

        if (qAbs(newSize.width() - oldSize.width()) >= qAbs(newSize.height() - oldSize.height())) {
            newW = newSize.width();
            newH = static_cast<int>(newW / RATIO);
        } else {
            newH = newSize.height();
            newW = static_cast<int>(newH * RATIO);
        }

        resize(newW, newH);

        m_resizing = false;

        QWidget::resizeEvent(event);
    }

};


#endif //POKEMONPROJECT_MAINWINDOW_H
