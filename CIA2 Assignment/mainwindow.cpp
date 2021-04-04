#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QIcon>
#include <QDebug>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_5->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Rohith 21218106212","This is a warning message");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Rohith 21218106212","This is a custom message",QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
    if(reply == QMessageBox::Yes || reply == QMessageBox::No)
    {
        qDebug() <<"Nothing is displayed";
    }
    if(reply == QMessageBox::YesToAll)
    {
       QMessageBox::warning(this,"Rohith 21218106212","Display the message with warning as YesToAll");
    }
    if(reply == QMessageBox::NoToAll)
    {
       QMessageBox::warning(this,"Rohith 21218106212","Don't display the message with warning as YesToAll");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Rohith 21218106212","Do you like apples?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QMessageBox::information(this,"Apple","Yes");
    }
    else
    {
        QMessageBox::information(this,"No apple","No");
    }
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Rohith 21218106212","This is information box");
}

void MainWindow::on_pushButton_5_toggled(bool checked)
{
    if(checked)
        {
            checked=false;
            QPixmap pixmap("C:/Users/P Rohith/Downloads/CIA2-ASSIGNMENTS-main/CIA2-ASSIGNMENTS-main/assignment2/images/poweron.webp");
            QIcon ButtonIcon(pixmap);
            ui->pushButton_5->setIcon(ButtonIcon);
            ui->pushButton_5->setIconSize(QSize(75,75));
            qDebug()<<"Button Checked--ON--";

        }
        else
        {   QPixmap pixmap("C:/Users/P Rohith/Downloads/CIA2-ASSIGNMENTS-main/CIA2-ASSIGNMENTS-main/assignment2/images/poweroff.jpg");
            QIcon ButtonIcon(pixmap);
            ui->pushButton_5->setIcon(ButtonIcon);
            ui->pushButton_5->setIconSize(QSize(200,200));
            qDebug()<<"Button Checked--OFF--";
        }
}
