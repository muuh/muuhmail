#ifndef MUUHMAINWINDOW_H
#define MUUHMAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QFrame>
#include "docklets/docklet.h"
#include "mainpanel.h"

class MuuhMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MuuhMainWindow(QWidget *parent = 0);
    ~MuuhMainWindow();


private:
    void initialize();
    void addDocklet(Docklet *docklet);

    MainPanel *mainPanel;


};

#endif // MUUHMAINWINDOW_H
