#include "mainwindow.h"
#include "serial.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Serial c;
    w.show();
    double data=c.getData();
    w.display(data);

    return a.exec();
}
