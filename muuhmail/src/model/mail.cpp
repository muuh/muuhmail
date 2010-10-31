#include "mail.h"

Mail::Mail(QString subject, QString textContent, QString sender, QList<QString> recipients)
{
    this->subject = subject;
    this->textContent = textContent;
    this->sender = sender;
    this->recipients = recipients;
}

QString Mail::getSubject() {
    return subject;
}

QString Mail::getTextContent() {
    return textContent;
}

QString Mail::getSender() {
    return sender;
}

QList<QString> Mail::getRecipients() {
    return recipients;
}

