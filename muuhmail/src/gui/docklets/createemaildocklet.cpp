#include "createemaildocklet.h"

CreateEmailDocklet::CreateEmailDocklet(QWidget *parent) :
        Docklet(parent)
{
    buildComponents();
    layoutComponents();
}

CreateEmailDocklet::~CreateEmailDocklet()
{
    delete tbEmailContent;
    delete leSubject;
    delete leSender;
}

void CreateEmailDocklet::buildComponents()
{
    tbEmailContent = new QTextBrowser();

    leSubject = new QLineEdit();

    leSender = new QLineEdit();
}

void CreateEmailDocklet::layoutComponents()
{
    QGridLayout *layout = new QGridLayout(this);

    layout->addWidget(leSender, 1, 0);
    layout->addWidget(leSubject, 2, 0);
    layout->addWidget(tbEmailContent, 3, 0);

    this->setLayout(layout);
}
