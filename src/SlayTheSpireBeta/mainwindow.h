#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "battlemanager.h"

class BattleManager;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(BattleManager b, QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:


    void on_attackButton_clicked();

    void on_defendButton_clicked();

    void on_endTurnButton_clicked();

private:
    Ui::MainWindow *ui;

    BattleManager bm;
};
#endif // MAINWINDOW_H
