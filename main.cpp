#include <QApplication>
#include "mywindow.h"
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyWindow *window=new MyWindow;
    window->show();
    return app.exec();
}
