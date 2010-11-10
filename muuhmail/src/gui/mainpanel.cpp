#include "mainpanel.h"
#include <QPushButton>
#include "docklets/docklet.h"
#include "docklets/emailviewerdocklet.h"

MainPanel::MainPanel(QMainWindow *parent) : QWidget(parent)
{
    mainWindow = parent;
    toolbar = new QToolBar(this);
    mainWindow->addToolBar(toolbar);

    layout = new MMLayout(this);

//    layout->addWidget(new Docklet(this));
//    layout->addWidget(new Docklet(this));
//    layout->addWidget(new Docklet(this));
//    layout->addWidget(new Docklet(this));
//    layout->addWidget(new Docklet(this));
    layout->addWidget(new EmailViewerDocklet(this));
    layout->addWidget(new EmailViewerDocklet(this));
    layout->addWidget(new EmailViewerDocklet(this));
    layout->addWidget(new EmailViewerDocklet(this));
    layout->addWidget(new EmailViewerDocklet(this));
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

void MainPanel::addActionToToolbar(QAction *toolbarAction)
{
    toolbar->addAction(toolbarAction);
}
