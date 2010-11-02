#ifndef IMAPMAILSERVICE_H
#define IMAPMAILSERVICE_H

#include "src/core/mailservice/mailservice.h"

class ImapMailService : public MailService
{
    Q_OBJECT
public:
    explicit ImapMailService(QObject *parent = 0);

signals:

public slots:
};

#endif // IMAPMAILSERVICE_H
