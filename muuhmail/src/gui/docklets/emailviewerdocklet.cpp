#include "emailviewerdocklet.h"
#include "src/core/mailservice.h"
#include <iostream>

using namespace std;

EmailViewerDocklet::EmailViewerDocklet(QWidget *parent) :
        Docklet(parent)
{
    layoutComponents();
}

EmailViewerDocklet::~EmailViewerDocklet()
{
    delete tbEmailContent;
    delete leSubject;
    delete leSender;
}

void EmailViewerDocklet::changeEmailContent(Mail *mail)
{
    tbEmailContent->append(mail->getTextContent());
    leSubject->setText(mail->getSubject());
    leSender->setText(mail->getSender());
}

void EmailViewerDocklet::layoutComponents()
{
    QGridLayout *layout = new QGridLayout(this);

    tbEmailContent = new QTextBrowser();

    leSubject = new QLineEdit();
    leSubject->setReadOnly(true);

    leSender = new QLineEdit();
    leSender->setReadOnly(true);

    layout->addWidget(leSender, 1, 0);
    layout->addWidget(leSubject, 2, 0);
    layout->addWidget(tbEmailContent, 3, 0);

    this->setLayout(layout);
}
