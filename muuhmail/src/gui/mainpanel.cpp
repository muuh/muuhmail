#include "mainpanel.h"
#include <QPushButton>
#include "docklet.h"

MainPanel::MainPanel(QWidget *parent) : QWidget(parent)
{
    layout = new MMLayout(this);
    layout->addWidget(new Docklet(this));
    layout->addWidget(new QPushButton("pl1",this));
    layout->addWidget(new QPushButton("pl2",this));
    layout->addWidget(new QPushButton("pc",this));
    layout->addWidget(new QPushButton("pr1",this));
    layout->addWidget(new QPushButton("pr2",this));
    layout->addWidget(new QPushButton("dl1",this));
    layout->addWidget(new QPushButton("dl2",this));
    layout->addWidget(new QPushButton("dl3",this));
    layout->addWidget(new QPushButton("dr1",this));
    layout->addWidget(new QPushButton("dr2",this));
    layout->addWidget(new QPushButton("dr3",this));
}

void MainPanel::initialize()
{
    setLayout(layout);
}
