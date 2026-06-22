#include "QTabScrollWidget.h"
#include <QScrollBar>
#include <QWheelEvent>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QTabBar>
#include <QScrollArea>

QTabScrollWidget::QTabScrollWidget(QWidget *parent) : QWidget(parent) {
    // 1. Layout Setup
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);

    // 2. TabBar Setup
    tabBar = new QTabBar(this);
    tabBar->setFixedHeight(30);

    // 3. ScrollArea Setup
    scrollArea = new QScrollArea(this);
    scrollArea->setWidget(tabBar);
    scrollArea->setWidgetResizable(true);

    // Explicitly define the scrollbar policy to ensure it doesn't try to hide
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scrollArea->setFrameShape(QFrame::NoFrame);

    // Set height to TabBar + Scrollbar height
    int sbHeight = scrollArea->horizontalScrollBar()->sizeHint().height();
    scrollArea->setFixedHeight(30 + sbHeight);

    // 4. Content Stack Setup
    stack = new QStackedWidget(this);

    // 5. Add to layout
    mainLayout->addWidget(scrollArea);
    mainLayout->addWidget(stack);
    mainLayout->setStretch(1, 1);

    // 6. Connects
    connect(tabBar, &QTabBar::currentChanged, stack, &QStackedWidget::setCurrentIndex);

    // 7. Event Filtering
    scrollArea->viewport()->installEventFilter(this);

    setLayout(mainLayout);
}

void QTabScrollWidget::addTab(QWidget *page, const QString &label) {
    tabBar->addTab(label);
    stack->addWidget(page);

    // Update width to force scrollbar visibility
    tabBar->setMinimumWidth(tabBar->count() * 120);
}

bool QTabScrollWidget::eventFilter(QObject *obj, QEvent *event) {
    if (obj == scrollArea->viewport() && event->type() == QEvent::Wheel) {
        QWheelEvent *we = static_cast<QWheelEvent*>(event);
        QScrollBar *hBar = scrollArea->horizontalScrollBar();

        // Scroll horizontally based on vertical wheel input
        hBar->setValue(hBar->value() - we->angleDelta().y());
        return true;
    }
    return QWidget::eventFilter(obj, event);
}