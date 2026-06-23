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


    ui->enemyHpLabel->setText(
        "Enemy HP: " + QString::number(bm.getEnemy().getHp()) );
    ui->enemyBlockLabel->setText(
        "Enemy Block: " + QString::number(bm.getEnemy().getBlock()));

    if(bm.isGameOver())
    {
        endGame();
    }
}


void MainWindow::on_defendButton_clicked()
{
    bm.playerDefend();

    ui->playerBlockLabel->setText("Player Block: " + QString::number(bm.getPlayer().getBlock()) );


}


void MainWindow::on_endTurnButton_clicked()
{

    bm.enemyTurn();

    ui->playerHpLabel->setText(
        "Player HP: " + QString::number(bm.getPlayer().getHp()));

    ui->playerBlockLabel->setText(
        "Player Block: " + QString::number(bm.getPlayer().getBlock()));

    ui->enemyBlockLabel->setText(
        "Enemy Block: " + QString::number(bm.getEnemy().getBlock()));

    if(bm.isGameOver())
    {
        endGame();
    }


}

void MainWindow::endGame()
{
    ui->attackButton->setEnabled(false);
    ui->defendButton->setEnabled(false);
    ui->endTurnButton->setEnabled(false);

    if (bm.getStatus() == BattleStatus::PLAYERLOSE)
    {
        QMessageBox::information(this,
                                 "Defeat",
                                 "You Lose!");
    }

    if (bm.getStatus() == BattleStatus::PLAYERWIN)
    {
        QMessageBox::information(this,
                                 "Victory",
                                 "You Win!");
    }

}


