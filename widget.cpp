#include "widget.h"

#include <QString>
#include <QLabel>
#include <QVBoxLayout>

Widget::Widget(QWidget *parent):QWidget(parent){
    QVBoxLayout* vl = new QVBoxLayout();
    vl->addWidget(new QLabel("HelloWorld"));
    setLayout(vl);
}
Widget::~Widget(){}
