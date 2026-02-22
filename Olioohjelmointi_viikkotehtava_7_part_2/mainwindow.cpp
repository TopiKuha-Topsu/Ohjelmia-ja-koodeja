#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_plusButton_clicked()
{
    if (tila == 2){
    QString n1 = ui->num1Edit->text();
    num1 = n1.toInt();
    QString n2 = ui->num2Edit->text();
    num2 = n2.toInt();
    qDebug() << num1 << " + " << num2;
    result = num1 + num2;
    QString r = QString::number(result);
    ui->resultEdit->setText(r);

    tila = 0;
    }
}


void MainWindow::on_minusButton_clicked()
{
    if (tila == 2){
    QString n1 = ui->num1Edit->text();
    num1 = n1.toInt();
    QString n2 = ui->num2Edit->text();
    num2 = n2.toInt();
    qDebug() << num1 << " - " << num2;
    result = num1 - num2;
    QString r = QString::number(result);
    ui->resultEdit->setText(r);
    tila = 0;
    }
}


void MainWindow::on_multiplyButton_clicked()
{
    if (tila == 2) {
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();
        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();
        qDebug() << num1 << " * " << num2;
        result = num1 * num2;
        ui->resultEdit->setText(QString::number(result));
        tila = 0;
        setActiveControls();
    }
}


void MainWindow::on_divideButton_clicked()
{
    if (tila == 2) {
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();
        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();
        qDebug() << num1 << " : " << num2;
        if (num2 == 0) {
            ui->resultEdit->setText(" 0 ");
        } else {
            result = num1 / num2;
            ui->resultEdit->setText(QString::number(result));
        }
        tila = 0;
        setActiveControls();
    }
}

void MainWindow::on_n0Button_clicked()
{
    setEditNum(0);
}



void MainWindow::on_n1Button_clicked()
{
    setEditNum(1);
}


void MainWindow::on_n2Button_clicked()
{
    setEditNum(2);
}


void MainWindow::on_n3Button_clicked()
{
    setEditNum(3);
}


void MainWindow::on_n4Button_clicked()
{
    setEditNum(4);
}


void MainWindow::on_n5Button_clicked()
{
    setEditNum(2);
}


void MainWindow::on_n6Button_clicked()
{
    setEditNum(6);
}


void MainWindow::on_n7Button_clicked()
{
    setEditNum(7);
}


void MainWindow::on_n8Button_clicked()
{
    setEditNum(8);
}


void MainWindow::on_n9Button_clicked()
{
    setEditNum(9);
}


void MainWindow::setEditNum(int num)
{
    if (tila == 0){
        qDebug() << "Tila 0: kirjoitetaan num1";
    ui->num1Edit->setText(ui->num1Edit->text()+ QString::number(num));
    }
    else if (tila == 1){
        qDebug() << "Tila 1: kirjoitetaan num2";
        ui->num2Edit->setText(ui->num2Edit->text()+ QString::number(num));

    }
}



void MainWindow::on_enterButton_clicked()
{
    qDebug() << "Nykyinen tila " << tila;
    if (tila == 0){
        tila = 1;
    } else if (tila == 1){
        tila = 2;
    //} else if (tila == 2){
        //tila = 0;
    }
    qDebug() << "Uusi tila " << tila;
    setActiveControls();
}


void MainWindow::on_clearButton_clicked()
{
    ui->num1Edit->clear();
    ui->num2Edit->clear();
    ui->resultEdit->clear();

    tila = 0;
    qDebug() << "Clearissa palataan tilaan " << tila;
}

void MainWindow::setActiveControls()
{
    if (tila == 0){
        qDebug() << "Tila 0 kontrollit";
        ui->plusButton->setEnabled(false);
        ui->minusButton->setEnabled(false);
        ui->multiplyButton->setEnabled(false);
        ui->divideButton->setEnabled(false);
        ui->n0Button->setEnabled(true);
        ui->n1Button->setEnabled(true);
        ui->n2Button->setEnabled(true);
        ui->n3Button->setEnabled(true);
        ui->n4Button->setEnabled(true);
        ui->n5Button->setEnabled(true);
        ui->n6Button->setEnabled(true);
        ui->n7Button->setEnabled(true);
        ui->n8Button->setEnabled(true);
        ui->n9Button->setEnabled(true);


    } else if (tila == 1){
        qDebug() << "Tila 1 kontrollit";
        ui->plusButton->setEnabled(false);
        ui->minusButton->setEnabled(false);
        ui->multiplyButton->setEnabled(false);
        ui->divideButton->setEnabled(false);
        ui->n0Button->setEnabled(true);
        ui->n1Button->setEnabled(true);
        ui->n2Button->setEnabled(true);
        ui->n3Button->setEnabled(true);
        ui->n4Button->setEnabled(true);
        ui->n5Button->setEnabled(true);
        ui->n6Button->setEnabled(true);
        ui->n7Button->setEnabled(true);
        ui->n8Button->setEnabled(true);
        ui->n9Button->setEnabled(true);

    } else if (tila == 2){
        qDebug() << "Tila 2 kontrollit";
        ui->plusButton->setEnabled(true);
        ui->minusButton->setEnabled(true);
        ui->multiplyButton->setEnabled(true);
        ui->divideButton->setEnabled(true);
        ui->n0Button->setEnabled(false);
        ui->n1Button->setEnabled(false);
        ui->n2Button->setEnabled(false);
        ui->n3Button->setEnabled(false);
        ui->n4Button->setEnabled(false);
        ui->n5Button->setEnabled(false);
        ui->n6Button->setEnabled(false);
        ui->n7Button->setEnabled(false);
        ui->n8Button->setEnabled(false);
        ui->n9Button->setEnabled(false);

    } else {
            qDebug() << "Mahdoton tila";

    }
}

