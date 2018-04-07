#include "widget.h"
#include "document.h"
#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[]){
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
//    Widget w;
//    w.show();
    MainWindow window;
    window.show();
    return a.exec();
}
