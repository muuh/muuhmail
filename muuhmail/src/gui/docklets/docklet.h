#ifndef DOCKLET_H
#define DOCKLET_H

#include <QWidget>
#include <QGridLayout>
#include <QTableWidget>
#include "src/gui/mainpanel.h"

class Docklet : public QWidget
{
    Q_OBJECT
public:
    Docklet(MainPanel *parent = 0);
    MainPanel* getMainPanel();

private:
    MainPanel *mainPanel;

    virtual void layoutComponents() = 0;
    virtual void buildComponents() = 0;

signals:

public slots:

};

#endif // DOCKLET_H
