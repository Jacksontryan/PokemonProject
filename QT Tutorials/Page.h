//
// Created by jacksonryan on 7/11/26.
//

#ifndef POKEMONPROJECT_PAGE_H
#define POKEMONPROJECT_PAGE_H
#include <QScrollBar>
#include <QWidget>
#include <QLabel>

/*class Page : public QWidget {
    QScrollBar* hBar;
    QScrollBar* vBar;

    public:
    Page(QWidget *parent = nullptr) {
        hBar = new QScrollBar(Qt::Horizontal, this);
        hBar->setGeometry(0, this->height(), this->width(), hBar->height()/2);
        //hBar->show();
        vBar = new QScrollBar(Qt::Vertical, this);
        vBar->setGeometry(this->width(), 0, this->width()/35, this->height());

        this->setParent(parent);
    }

protected:
    void resizeEvent(QResizeEvent *event) override {
        //hBar->setGeometry(0, this->height(), this->width(), hBar->height()/20);
        //vBar->setGeometry(this->width(), 0, this->width()/35, this->height());

        int hBarHeight = hBar->sizeHint().height(); // or a fixed constant
        int vBarWidth  = vBar->sizeHint().width();

        hBar->setGeometry(0, this->height() - hBarHeight, this->width() - vBarWidth, hBarHeight);
        vBar->setGeometry(this->width() - vBarWidth, 0, vBarWidth, this->height() - hBarHeight);


        QWidget::resizeEvent(event);
    }
};*/


#endif //POKEMONPROJECT_PAGE_H
