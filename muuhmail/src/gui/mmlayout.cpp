#include "mmlayout.h"
#include "iostream"

using namespace std;

MMLayout::~MMLayout()
{
    int i = 0;
    while(i < list.size()){
        delete list.takeAt(i);
    }
}

int MMLayout::count() const
{
    return list.size();
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
        s = QSize(640,480); //start with a nice default size
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
    QLayout::setGeometry(rect);
    if (list.size() == 0)
    {
        return;
    }
    list.at(CENTER)->setGeometry(getCentralRect(rect));
    list.at(MAIL_PREV_OUTER_LEFT)->setGeometry(getPreviewOuterLeftRect(rect));
    list.at(MAIL_PREV_INNER_LEFT)->setGeometry(getPreviewInnerLeftRect(rect));

    cout << "size:" << rect.width() << ":" << rect.height() << endl;
    cout.flush();
}

QRect MMLayout::getCentralRect(const QRect &rect)
{
    int y = rect.height() * CENTER_Y_POS_FACTOR;
    int width = rect.width() * CENTER_WIDTH_FACTOR;
    int x = (rect.width() - width) / 2;
    int height = rect.height() - y - SEARCH_HEIGHT;

    cout << "central: x="<<x<<"y="<<y<<"w="<<width<<"h="<<height<<endl;
    return QRect(x,y,width,height);
}

QRect MMLayout::getPreviewOuterLeftRect(const QRect &rect)
{
    int width = rect.width() * PREV_WIDTH_FACTOR;
    int height = rect.height() * PREV_HEIGHT_FACTOR;

    cout << "outerleft: x="<<0<<"y="<<0<<"w="<<width<<"h="<<height<<endl;
    return QRect(0,0,width,height);
}

QRect MMLayout::getPreviewInnerLeftRect(const QRect &rect)
{
    int x = rect.width() * PREV_LEFT_IPOS_FACTOR;
    int y = rect.height() * PREV_INNER_Y_FACTOR;
    int width = rect.width() * PREV_WIDTH_FACTOR;
    int height = rect.height() * PREV_HEIGHT_FACTOR;

    cout << "outerleft: x="<<x<<"y="<<y<<"w="<<width<<"h="<<height<<endl;
    return QRect(x,y,width,height);
}














