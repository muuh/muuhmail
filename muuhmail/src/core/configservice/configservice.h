#ifndef CONFIGSERVICE_H
#define CONFIGSERVICE_H

#include <QObject>
#include "src/model/config/applicationconfig.h"
#include "src/model/config/globalsettingsconfig.h"
#include "src/model/config/mailaccountconfig.h"

class ConfigService : public QObject
{
    Q_OBJECT
public:

    /**
     * create a new ConfigService to save and load configs
     *
     **/
    explicit ConfigService(QObject *parent = 0);

    /**
     * load the ApplicationConfig. It contains Application relevant settings
     * like size of the window etc.
     *
     **/
    ApplicationConfig* loadApplicationConfig();

    /**
     * save the given ApplicationConfig
     *
     **/
    void saveApplicationConfig(ApplicationConfig *applicationConfig);

    /**
     * load the GlobalSettings. It contains contains mail specific settings
     * e.g. the intervall to check new mails
     *
     **/
    GlobalSettingsConfig* loadGlobalSettingsConfig();

    /**
     * save the given GlobalSettingsConfig
     *
     **/
    void saveGlobalSettingsConfig(GlobalSettingsConfig *globalSettingsConfig);

    /**
     * load the config for the MailAccount. It contains account specific information
     * e.g. login name
     *
     * @param accoutName, the accout name which identify the mail account
     **/
    MailAccountConfig* loadMailAccountConfig(QString accountName);

    /**
     * save the given MailAccountConfig
     *
     **/
    void saveMailAccountConfig(MailAccountConfig *mailAccountConfig);

signals:

public slots:

};

#endif // CONFIGSERVICE_H
