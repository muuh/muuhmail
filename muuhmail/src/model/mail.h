#ifndef MAIL_H
#define MAIL_H

#include <QObject>
#include "contact.h"

class Mail : public QObject
{
    Q_OBJECT
public:
    explicit Mail(QString subject, QString textContent, QString sender, QList<QString> recipients, QObject *parent = 0);
    QString getSubject();
    QString getTextContent();
    QString getSender();
    QList<QString> getRecipients();
private:
    QString subject;
    QString textContent;
    QString sender;
    QList<QString> recipients;
signals:

public slots:

};

#endif // MAIL_H
