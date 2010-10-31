#ifndef MAIL_H
#define MAIL_H

#include <QObject>
#include "contact.h"

class Mail
{
public:
    explicit Mail(QString subject, QString textContent, QString sender, QList<QString> recipients);
    QString getSubject();
    QString getTextContent();
    QString getSender();
    QList<QString> getRecipients();
private:
    QString subject;
    QString textContent;
    QString sender;
    QList<QString> recipients;
    int mailId;
};

#endif // MAIL_H
