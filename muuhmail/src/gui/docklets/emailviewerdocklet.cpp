#include "emailviewerdocklet.h"
#include <iostream>
#include "src/core/mailservice/pop3mailservice.h"

using namespace std;

EmailViewerDocklet::EmailViewerDocklet(MainPanel *parent) :
        Docklet(parent)
{
    buildComponents();
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

void EmailViewerDocklet::buildComponents()
{
    tbEmailContent = new QTextBrowser();

    leSubject = new QLineEdit();
    leSubject->setReadOnly(true);

    leSender = new QLineEdit();
    leSender->setReadOnly(true);

    Pop3MailService *mailservice = new Pop3MailService();
    MainPanel *mainPanel = getMainPanel();

    QAction *action = new QAction(tr("getEmail"), mainPanel);
    connect(action, SIGNAL(triggered()), mailservice, SLOT(openConnection()));

    mainPanel->addActionToToolbar(action);
}

void EmailViewerDocklet::layoutComponents()
{
    QGridLayout *layout = new QGridLayout(this);

    layout->addWidget(leSender, 1, 0);
    layout->addWidget(leSubject, 2, 0);
    layout->addWidget(tbEmailContent, 3, 0);

    this->setLayout(layout);
}
