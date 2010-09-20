#include "docklet.h"

Docklet::Docklet(QWidget *parent) :
        QWidget(parent)
{
    QGridLayout *layout = new QGridLayout(this);
    layout->addWidget(new QTableWidget(3, 3, this));
    setLayout(layout);

    initialize();
}

void Docklet::initialize()
{
    Qt::WindowFlags flags = 0;
    flags = Qt::ToolTip;
    flags |= Qt::X11BypassWindowManagerHint;
    flags |= Qt::FramelessWindowHint;
    flags |= Qt::MSWindowsFixedSizeDialogHint;

    QWidget::setWindowFlags(flags);
}
