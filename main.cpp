#include "mainwindow.h"
#include <QApplication>
#include "startup.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Startup w;
    w.show();

    return a.exec();
}
