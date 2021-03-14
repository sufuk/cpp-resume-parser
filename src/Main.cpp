//
// Created by sufuk on 14.03.2021.
//

#include "MainWindow.h"
#include <QApplication>


int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    MainWindow window;
    window.show();

    return app.exec();
}