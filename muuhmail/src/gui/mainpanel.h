#ifndef MAINPANEL_H
#define MAINPANEL_H

#include <QWidget>
#include "mmlayout.h"

enum MPPosition{
    CENTER = 1,
    MAIL_PREV_OUTER_LEFT = 2,
    MAIL_PREV_INNER_LEFT = 3,
    MAIL_PREV_CENTER = 4,
    MAIL_PREV_INNER_RIGHT = 5,
    MAIL_PREV_OUTER_RIGHT = 6,
    DOCK_LEFT_TOP = 7,
    DOCK_LEFT_MIDDLE = 8,
    DOCK_LEFT_BOTTOM = 9,
    DOCK_RIGHT_TOP = 10,
    DOCK_RIGHT_MIDDLE = 11,
    DOCK_RIGHT_BOTTOM = 12,
    SEARCH_FIELD = 13,
};

class MainPanel : public QWidget
{
    Q_OBJECT
public:
    explicit MainPanel(QWidget *parent = 0);

private:
    void initialize();
    MMLayout *layout;
    QList<QWidget*> widgets;

};

#endif // MAINPANEL_H
