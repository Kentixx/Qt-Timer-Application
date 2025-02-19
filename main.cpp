#include "mainwindow.h"
#include "timewidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;

    TimeWidget timer;
    timer.setWindowTitle("Таймер");
    timer.resize(750, 400);

    timer.show();
    return app.exec();
}
