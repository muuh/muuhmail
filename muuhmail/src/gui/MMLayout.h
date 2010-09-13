#ifndef MMLAYOUT_H
#define MMLAYOUT_H

#include <QLayout>

enum MMLayoutPosition{
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

class MMLayout : public QLayout
{
public:
    MMLayout(QWidget *parent)
        : QLayout(parent) {}
    ~MMLayout();

    void addItem(QLayoutItem *item);
    QSize sizeHint() const;
    QSize minimumSize() const;
    QLayoutItem *itemAt(int) const;
    QLayoutItem *takeAt(int);
    void setGeometry(const QRect &rect);

private:
    QList<QLayoutItem*> list;

};

#endif // MMLAYOUT_H
