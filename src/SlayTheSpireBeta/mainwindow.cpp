#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
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
    ui->combatLog->appendPlainText( "Player attacked for 6 damage");
    ui->enemyHpLabel->setText(
        "Enemy HP: 44");
}


void MainWindow::on_defendButton_clicked()
{

}


void MainWindow::on_endTurnButton_clicked()
{

}

