#include "contact.h"

Contact::Contact(QObject *parent) :
    QObject(parent)
{
}

QString Contact::getName() {
    return name;
}

QString Contact::getMailAddress() {
    return mailAddress;
}
