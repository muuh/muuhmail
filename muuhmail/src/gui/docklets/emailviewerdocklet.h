#ifndef EMAILVIEWERDOCKLET_H
#define EMAILVIEWERDOCKLET_H

#include "docklet.h"
#include "src/model/mail.h"
#include "src/core/mailservice/mailservice.h"
#include <QTextBrowser>
#include <QLineEdit>

class EmailViewerDocklet : public Docklet
{
    Q_OBJECT
public:
    EmailViewerDocklet(MainPanel *parent = 0);
    ~EmailViewerDocklet();

public slots:
    void changeEmailContent(Mail *mail);

private:
    QTextBrowser *tbEmailContent;
    QLineEdit *leSubject;
    QLineEdit *leSender;

    void layoutComponents();
    void buildComponents();
};

#endif // EMAILVIEWERDOCKLET_H
