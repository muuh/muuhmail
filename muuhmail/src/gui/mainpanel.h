#ifndef MAINPANEL_H
#define MAINPANEL_H

#include <QWidget>
#include "mmlayout.h"

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
