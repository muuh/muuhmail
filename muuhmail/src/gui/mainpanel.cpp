#include "mainpanel.h"
#include <QPushButton>
#include "docklets/docklet.h"
#include "docklets/emailviewerdocklet.h"

MainPanel::MainPanel(QWidget *parent) : QWidget(parent)
{
    layout = new MMLayout(this);

    layout->addWidget(new Docklet(this));
    layout->addWidget(new Docklet(this));
    layout->addWidget(new Docklet(this));
    layout->addWidget(new Docklet(this));
    layout->addWidget(new Docklet(this));
    layout->addWidget(new EmailViewerDocklet(this));
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
