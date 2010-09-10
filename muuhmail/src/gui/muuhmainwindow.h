#ifndef MUUHMAINWINDOW_H
#define MUUHMAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QMdiArea>
#include "docklet.h"

class MuuhMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MuuhMainWindow(QWidget *parent = 0);
    ~MuuhMainWindow();


private:
    void initialize();
    void addDocklet(Docklet *docklet);

    QMdiArea *mdiArea;


};

#endif // MUUHMAINWINDOW_H
