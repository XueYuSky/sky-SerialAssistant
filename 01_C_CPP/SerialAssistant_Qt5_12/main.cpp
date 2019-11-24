#include "qserialwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSerialWidget w;
    w.show();
    return a.exec();
}
