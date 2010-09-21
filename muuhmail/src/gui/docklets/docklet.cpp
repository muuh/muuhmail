#include "docklet.h"

Docklet::Docklet(QWidget *parent) :
    QWidget(parent)
{
    QGridLayout *layout = new QGridLayout(this);

    layout->addWidget(new QTableWidget(3, 3, this));

    setLayout(layout);
}
