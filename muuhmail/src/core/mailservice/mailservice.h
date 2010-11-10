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
    MailService(QObject *parent = 0) : QObject(parent){}

    /**
     * get all mails of the given mailbox
     * consider to delete the mails!
     *
     * @param mailbox to load the mails from
     **/
    virtual QList<Mail*> getMailsOfMailbox(MailBox mailbox) = 0;

    /**
     * get all mailheaders of given mailbox
     * consider to delete the mailheaders!
     *
     * @param mailbox to load the mailheaders from
     **/
    virtual QList<MailHeader*> getMailHeadersOfMailbox(MailBox mailbox) = 0;

    /**
     * get the mail of given mailheader
     * consider to delete the mail!
     *
     * @param mailheader of mail to laod
     **/
    virtual Mail* getMailsOfHeader(MailHeader*) = 0;

    /**
     * send the mails of the given list
     *
     * @return true if it was successful, false instaed. Notice to delete
     *   given mails
     **/
    virtual bool sendMails(QList<Mail*> listOfMails) = 0;

    /**
     * get all mailboxes from server if it contains, empty list
     * if there are no mailboxes e.g. on POP3
     *
     **/
    virtual QList<MailBox*> getMailboxes() = 0;

    /**
     * delete all mails. they are identify with the private member mailId
     *
     * @return true if it was successful, false instead. Notice to delete
     *   given mails.
     **/
    virtual bool deleteMails(QList<Mail*> deletedMails) = 0;

    /**
     * get the MailBoxStatus of the given MailBoxes. The status contains information
     * like number of mails, size etc.
     *
     **/
    virtual QMap<MailBox*, MailBoxStatus*> getMailBoxStatus(QList<MailBox*> listOfMailBoxes) = 0;

signals:

public slots:

};

#endif // MAILSERVICE_H
