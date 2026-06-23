#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w( BattleManager(Player(50, 6), Enemy(14, 10) ));
    w.show();
    return QApplication::exec();
}
