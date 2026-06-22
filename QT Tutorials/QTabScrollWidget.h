#ifndef QTABSCROLLWIDGET_H
#define QTABSCROLLWIDGET_H

#include <QWidget>
#include <QTabBar>
#include <QScrollArea>
#include <QStackedWidget>
#include <QVBoxLayout>

class QTabScrollWidget : public QWidget {
    Q_OBJECT
public:
    explicit QTabScrollWidget(QWidget *parent = nullptr);
    void addTab(QWidget *page, const QString &label);

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

private:
    QTabBar *tabBar;
    QScrollArea *scrollArea;
    QStackedWidget *stack;
};

#endif // QTABSCROLLWIDGET_H