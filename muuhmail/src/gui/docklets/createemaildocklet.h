#ifndef CREATEEMAILDOCKLET_H
#define CREATEEMAILDOCKLET_H

#include "docklet.h"
#include "src/model/mail.h"
#include <QTextBrowser>
#include <QLineEdit>

class CreateEmailDocklet : public Docklet
{
public:
    CreateEmailDocklet(MainPanel *parent = 0);
    ~CreateEmailDocklet();

private:
    QTextBrowser *tbEmailContent;
    QLineEdit *leSubject;
    QLineEdit *leSender;

    void layoutComponents();
    void buildComponents();
};

#endif // CREATEEMAILDOCKLET_H
