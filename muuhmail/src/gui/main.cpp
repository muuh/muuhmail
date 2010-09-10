#include <QtGui/QApplication>
#include "muuhmainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MuuhMainWindow w;
    w.show();

    return a.exec();
}
