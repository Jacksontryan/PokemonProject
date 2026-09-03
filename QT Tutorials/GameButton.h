//
// Created by jacksonryan on 7/14/26.
//

#ifndef POKEMONPROJECT_GAMEBUTTON_H
#define POKEMONPROJECT_GAMEBUTTON_H

#include <iostream>
#include <QEvent>
#include <QPushButton>

class GameButton : public QPushButton {
    std::string url;
    std::string name;
    QIcon sprite;
    public:
    GameButton(QWidget *parent = nullptr, std::string name = "", std::string url = "") : QPushButton(name.data(), parent) {
        this->url = url;
        this->name = name;
        setAttribute(Qt::WA_Hover, true);
        installEventFilter(this);
        QPixmap pixmap(url.data());
        if (pixmap.isNull()) {
            std::cout << "Pixmap load failed" << std::endl;
        }
        sprite = QIcon(pixmap);
    }
    bool eventFilter(QObject *watched, QEvent *event) override {

        //std::cout << "Event" << std::endl;

        if (watched == this) {
            if (event->type() == QEvent::HoverEnter) {
                std::cout << "Hover entered" << std::endl;
                std::cout << this->size().width() << " " << this->size().height() << std::endl;
                this->setText("");
                this->setIcon(sprite);
                return true;
            }else if (event->type() == QEvent::HoverLeave) {
                std::cout << "Hover leave" << std::endl;
                this->setIcon(QIcon());
                this->setText(name.data());
                return true;
            }
        }
        return QPushButton::eventFilter(this, event);
    }

};


#endif //POKEMONPROJECT_GAMEBUTTON_H
