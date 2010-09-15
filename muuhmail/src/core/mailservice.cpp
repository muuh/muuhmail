#include "mailservice.h"

MailService::MailService(QObject *parent) :
    QObject(parent)
{
}

QList<Mail*> MailService::getMailsOfInbox(){
    QList<QString> recipients;
    recipients.append(QString("recipient1@mail.com"));
    Mail mail1(QString("subject"), QString("content"), QString("sender1@mail.com"), recipients);

    QList<Mail*> result;
    result.append(&mail1);
    return result;
}
