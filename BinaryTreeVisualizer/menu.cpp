#include "menu.h"
#include "./ui_menu.h"
#include "mainwindow.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    mainWindow = new MainWindow;
    arbol = 0;


}

menu::~menu()
{
    delete ui;
    delete mainWindow; // Libera la memoria del objeto MainWindow

}

void menu::on_pushButton_2_clicked()
{
    arbol = 2;
    mainWindow->show();
    this->hide();
}


void menu::on_pushButton_clicked()
{
    arbol = 1;
    //luego
}

