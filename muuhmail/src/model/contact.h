#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>

class Contact
{
public:
    explicit Contact();
    QString getName();
    QString getMailAddress();
private:
    QString name;
    QString mailAddress;
};

#endif // CONTACT_H
