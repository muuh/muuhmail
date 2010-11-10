#include "pop3mailservice.h"
#include <iostream>

using namespace std;

Pop3MailService::Pop3MailService(QObject *parent) :
    MailService(parent)
{
    socket = new QTcpSocket();

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));

    status = DISCONNECTED;
}

Pop3MailService::~Pop3MailService()
{
    delete textStream;
    delete socket;
}

QList<Mail*> MailService::getMailsOfMailbox(MailBox mailbox)
{
//    sendCommand(QString("RETR 1"));

    QList<QString> recipients;
    recipients.append(QString("recipient1@mail.com"));
    Mail *mail1 = new Mail(QString("subject"), QString("content"), QString("sender1@mail.com"), recipients);

    QList<Mail*> result;
    result.append(mail1);
    return result;
}

QList<MailHeader*> getMailHeadersOfMailbox(MailBox mailbox) {}

Mail* getMailsOfHeader(MailHeader*) {}

bool sendMails(QList<Mail*> listOfMails) {}

QList<MailBox*> getMailboxes() {}

bool deleteMails(QList<Mail*> deletedMails) {}

QMap<MailBox*, MailBoxStatus*> getMailBoxStatus(QList<MailBox*> listOfMailBoxes) {}


/**
 * the openConnection() method opens a connection. after that
 * you can get the mails from the server.
 * At last it is neccessary to close the connection with closeConnection()
 *
 **/
void Pop3MailService::openConnection()
{
    switch(status)
    {
    case CONNECTED:
        textStream = new QTextStream(socket);
        cout << "send username" << endl;
        sendCommand(QString("USER accountspam@freenet.de"));
        cout << "username send" << endl;

        status = USERNAME_SEND;

        break;

    case USERNAME_SEND:
        cout << "send password" << endl;
        sendCommand(QString("PASS asdf1234"));
        cout << "password send" << endl;

        status = PASSWORD_SEND;

        break;

    case PASSWORD_SEND:

        sendCommand(QString("STAT"));

        status = READY;

        break;

    case DISCONNECTED:
        cout << "try to connect with host" << endl;
        socket->connectToHost(QString("mx.freenet.de"), 110);
        cout << "connect to host initiated" << endl;

        status = CONNECTED;

        break;
    }
}

void Pop3MailService::closeConnection()
{
    cout << "close connection" << endl;
    sendCommand("QUIT");
}

void Pop3MailService::connected()
{
    cout << "connected" << endl;
}

void Pop3MailService::readyRead()
{
    cout << "ready to read" << endl;
    if(!socket->canReadLine())
        return;

    QString responseLine;
    do {
        responseLine = socket->readLine();
    } while(socket->canReadLine() && responseLine[3] != ' ');

    cout << responseLine.toStdString() << endl;

    if(status != READY)
        openConnection();
    else
        status = DISCONNECTED;
}

void Pop3MailService::sendCommand(QString senddata)
{
    *textStream << senddata << "\r\n";
    textStream->flush();
}

QString Pop3MailService::getMailFromTextStream()
{
    QString incommingData;
    while(!textStream->atEnd()) {
        incommingData.append(textStream->readLine() + "\n");
    }
}
