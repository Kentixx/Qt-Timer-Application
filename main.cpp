#include "mainwindow.h"
#include "timewidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;

    TimeWidget timer;
    timer.setWindowTitle("Таймер");
    timer.resize(600, 300);

    timer.show();
    return app.exec();
}
