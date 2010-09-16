#ifndef MMLAYOUT_H
#define MMLAYOUT_H

#include <QLayout>

#define CENTER_WIDTH_FACTOR = 0.5d
#define CENTER_HEIGHT_FACTOR = 13d/18d
#define DOCKLET_WIDTH_FACTOR = 3d/16d
#define DOCKLET_HEIGHT_FACTOR = 2d/9d
#define DOCKLET_SPACEING_FACTOR
#define PREV_WIDTH_FACTOR = DOCKLET_WIDTH_FACTOR
#define PREV_HEIGHT_FACTOR = 3d/18d
#define SEARCH_WIDTH_FACTOR = 5d/16


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
    int count() const;

private:
    QList<QLayoutItem*> list;

};

#endif // MMLAYOUT_H
