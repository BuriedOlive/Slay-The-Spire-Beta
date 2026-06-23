#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QMessageBox>

MainWindow::MainWindow(BattleManager b, QWidget *parent) : bm(b)
    , QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_attackButton_clicked()
{
    bm.playerAttack();


    // ui->combatLog->appendPlainText( "Player attacked for 6 damage");
    ui->enemyHpLabel->setText(
        "Enemy HP: " + QString::number(bm.getEnemy().getHp()) );
}


void MainWindow::on_defendButton_clicked()
{
    bm.playerDefend();

    ui->playerBlockLabel->setText(
        "Enemy Block: " + QString::number(bm.getEnemy().getBlock()) );
}


void MainWindow::on_endTurnButton_clicked()
{

}

