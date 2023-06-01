#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/new/prefix1/icon.ico"));
    MainWindow w; // инициализация переменной класса MainWindow
    w.show();
    return a.exec();
}
