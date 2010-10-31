#ifndef DOCKLET_H
#define DOCKLET_H

#include <QWidget>
#include <QGridLayout>
#include <QTableWidget>

class Docklet : public QWidget
{
    Q_OBJECT
public:
    Docklet(QWidget *parent = 0);
private:
    virtual void layoutComponents();
    virtual void buildComponents();

signals:

public slots:

};

#endif // DOCKLET_H
