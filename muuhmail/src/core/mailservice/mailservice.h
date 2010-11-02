#ifndef MAILSERVICE_H
#define MAILSERVICE_H

#include <QObject>
#include <QList>
#include <QMap>
#include "src/model/mailbox.h"
#include "src/model/mail.h"
#include "src/model/mailheader.h"
#include "src/model/mailboxstatus.h"
#include <QtNetwork>

class MailService : public QObject
{
    Q_OBJECT
public:

    /**
     * create a new MailService to delete and get mails,
     * as well as mailbox and status
     *
     **/
    MailService(QObject *parent = 0);

    /**
     * get all mails of the given mailbox
     * consider to delete the mails!
     *
     * @param mailbox to load the mails from
     **/
    QList<Mail*> getMailsOfMailbox(MailBox mailbox);

    /**
     * get all mailheaders of given mailbox
     * consider to delete the mailheaders!
     *
     * @param mailbox to load the mailheaders from
     **/
    QList<MailHeader*> getMailHeadersOfMailbox(MailBox mailbox);

    /**
     * get the mail of given mailheader
     * consider to delete the mail!
     *
     * @param mailheader of mail to laod
     **/
    Mail* getMailsOfHeader(MailHeader*);

    /**
     * send the mails of the given list
     *
     * @return true if it was successful, false instaed. Notice to delete
     *   given mails
     **/
    bool sendMails(QList<Mail*> listOfMails);

    /**
     * get all mailboxes from server if it contains, empty list
     * if there are no mailboxes e.g. on POP3
     *
     **/
    QList<MailBox*> getMailboxes();

    /**
     * delete all mails. they are identify with the private member mailId
     *
     * @return true if it was successful, false instead. Notice to delete
     *   given mails.
     **/
    bool deleteMails(QList<Mail*> deletedMails);

    /**
     * get the MailBoxStatus of the given MailBoxes. The status contains information
     * like number of mails, size etc.
     *
     **/
    QMap<MailBox*, MailBoxStatus*> getMailBoxStatus(QList<MailBox*> listOfMailBoxes);

signals:

public slots:

};

#endif // MAILSERVICE_H
