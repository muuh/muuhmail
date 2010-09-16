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
    mainPanel = new MainPanel(this);
    setCentralWidget(mainPanel);

   // addDocklet(new Docklet(mainPanel));
}

void MuuhMainWindow::addDocklet(Docklet *docklet)
{

}
