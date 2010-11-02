#ifndef POP3MAILSERVICE_H
#define POP3MAILSERVICE_H

#include "src/core/mailservice/mailservice.h"

enum STATE {

    DISCONNECTED = -1,
    CONNECTED = 0,
    USERNAME_SEND = 1,
    PASSWORD_SEND = 2,
    READY = 3
};

class Pop3MailService : public MailService
{
    Q_OBJECT
public:
    explicit Pop3MailService(QObject *parent = 0);
    ~Pop3MailService();

signals:

public slots:
    void openConnection();
    void connected();

private:
    QTcpSocket *socket;
    QTextStream *textStream;
    STATE status;

    void closeConnection();
    void sendCommand(QString senddata);
    QString getMailFromTextStream();

private slots:
    void readyRead();

};

#endif // POP3MAILSERVICE_H
