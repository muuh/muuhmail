#include "mainpanel.h"
#include <QPushButton>
#include "docklet.h"

MainPanel::MainPanel(QWidget *parent) : QWidget(parent)
{
    layout = new MMLayout(this);

    layout->addWidget(new Docklet(this));
    layout->addWidget(new Docklet(this));
    layout->addWidget(new Docklet(this));
    layout->addWidget(new Docklet(this));
    layout->addWidget(new Docklet(this));
    layout->addWidget(new Docklet(this));
//    layout->addWidget(new Docklet(this));
//    layout->addWidget(new Docklet(this));
//    layout->addWidget(new Docklet(this));
//    layout->addWidget(new Docklet(this));
//    layout->addWidget(new Docklet(this));
//    layout->addWidget(new Docklet(this));

    layout->setMargin(0);
}

void MainPanel::initialize()
{
    setLayout(layout);
}
