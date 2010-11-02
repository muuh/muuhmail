#include "docklet.h"

Docklet::Docklet(MainPanel *parent) :
    QWidget(parent)
{
    mainPanel = parent;
    //necessary?
}

MainPanel* Docklet::getMainPanel()
{
    return mainPanel;
}

void Docklet::layoutComponents(){}
void Docklet::buildComponents(){}
