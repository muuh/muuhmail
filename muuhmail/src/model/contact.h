#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>

class Contact : public QObject
{
    Q_OBJECT
public:
    explicit Contact(QObject *parent = 0);
    QString getName();
    QString getMailAddress();
private:
    QString name;
    QString mailAddress;
signals:

public slots:

};

#endif // CONTACT_H
