#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <QtWidgets>

class Board : public QWidget
{
    Q_OBJECT
public:
    explicit Board(QWidget *parent = nullptr);

private:
    QDesktopWidget *desktop;
    QPixmap image;
    QLabel *label;
    QVBoxLayout *mainLayout;
    QScrollArea *scrollBar;
};

#endif // BOARD_H
