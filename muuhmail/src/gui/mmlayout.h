#ifndef MMLAYOUT_H
#define MMLAYOUT_H

#include <QLayout>

#define CENTER_WIDTH_FACTOR (double) 0.5
#define SEARCH_HEIGHT 50
#define CENTER_Y_POS_FACTOR (double)2/(double)9
#define DOCKLET_WIDTH_FACTOR (double)3/(double)16
#define DOCKLET_HEIGHT_FACTOR (double)2/(double)9
#define DOCKLET_SPACEING_FACTOR (double)1/(double)18
#define PREV_WIDTH_FACTOR DOCKLET_WIDTH_FACTOR
#define PREV_HEIGHT_FACTOR (double)3/(double)18
#define PREV_LEFT_IPOS_FACTOR (double) 1/(double)9
#define PREV_INNER_Y_FACTOR (double)1/(double)9
#define SEARCH_WIDTH_FACTOR (double)5/(double)16

enum MPPosition{
    MAIL_PREV_OUTER_LEFT = 0,
    MAIL_PREV_INNER_LEFT = 1,
    MAIL_PREV_CENTER = 2,
    MAIL_PREV_INNER_RIGHT = 3,
    MAIL_PREV_OUTER_RIGHT = 4,
    CENTER = 5,
    DOCK_LEFT_TOP = 6,
    DOCK_LEFT_MIDDLE = 7,
    DOCK_LEFT_BOTTOM = 8,
    DOCK_RIGHT_TOP = 9,
    DOCK_RIGHT_MIDDLE = 10,
    DOCK_RIGHT_BOTTOM = 11,
    SEARCH_FIELD = 12,
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
    void setGeometry(const QRect&);
    int count() const;

private:
    QList<QLayoutItem*> list;

    QRect getCentralRect(const QRect&);
    QRect getPreviewOuterLeftRect(const QRect&);
    QRect getPreviewInnerLeftRect(const QRect&);


};

#endif // MMLAYOUT_H
