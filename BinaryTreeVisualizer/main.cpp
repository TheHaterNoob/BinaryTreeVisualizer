#include "mainwindow.h"
#include "menu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    menu m;
    m.show();


    return a.exec();
}
