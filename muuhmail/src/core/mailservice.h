#ifndef MAILSERVICE_H
#define MAILSERVICE_H

#include <QObject>
#include "../model/mail.h"

// TODO should we really extend QObject in core/model classes
// if 'yes' what are the parents of these objects?

class MailService : public QObject
{
    Q_OBJECT
public:
    explicit MailService(QObject *parent = 0);

    /*QList<Mail> getMailsOfInbox();*/

signals:

public slots:

};

#endif // MAILSERVICE_H
