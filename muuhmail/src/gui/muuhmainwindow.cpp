#include "muuhmainwindow.h"

MuuhMainWindow::MuuhMainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    initialize();
}

MuuhMainWindow::~MuuhMainWindow()
{

}

void MuuhMainWindow::initialize()
{
    mdiArea = new QMdiArea(this);
    setCentralWidget(mdiArea);

    addDocklet(new Docklet(mdiArea));
}

void MuuhMainWindow::addDocklet(Docklet *docklet)
{
    mdiArea->addSubWindow(docklet);
}
