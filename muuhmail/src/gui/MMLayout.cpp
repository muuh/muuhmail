#include "MMLayout.h"

MMLayout::~MMLayout()
{
    int i = 0;
    while(i < list.size()){
        delete list.takeAt(i);
    }
}

void MMLayout::addItem(QLayoutItem *item)
{
    list.append(item);
}

QLayoutItem *MMLayout::itemAt(int idx) const
{
    return list.value(idx);
}

QLayoutItem *MMLayout::takeAt(int idx)
{
    return idx >= 0 && idx < list.size() ? list.takeAt(idx) : 0;
}

QSize MMLayout::sizeHint() const
{
    //TODO
    QSize s(0,0);
    int n = list.count();
    if (n > 0)
        s = QSize(100,70); //start with a nice default size
    int i = 0;
    while (i < n) {
        QLayoutItem *o = list.at(i);
        s = s.expandedTo(o->sizeHint());
        ++i;
    }
    return s + n*QSize(spacing(), spacing());
}

QSize MMLayout::minimumSize() const
{
    //TODO
    QSize s(0,0);
    int n = list.count();
    int i = 0;
    while (i < n) {
        QLayoutItem *o = list.at(i);
        s = s.expandedTo(o->minimumSize());
        ++i;
    }
    return s + n*QSize(spacing(), spacing());
}

void MMLayout::setGeometry(const QRect &rect)
{
    //TODO
}
