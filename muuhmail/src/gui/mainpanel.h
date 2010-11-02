#ifndef MAINPANEL_H
#define MAINPANEL_H

#include <QWidget>
#include "mmlayout.h"
#include <QMainWindow>
#include <QToolBar>
#include <QAction>

class MainPanel : public QWidget
{
    Q_OBJECT
public:
    explicit MainPanel(QMainWindow *parent = 0);
    void addActionToToolbar(QAction *toolbarAction);

private:
    MMLayout *layout;
    QToolBar *toolbar;
    QMainWindow *mainWindow;
    QList<QWidget*> widgets;

    void initialize();

};

#endif // MAINPANEL_H
