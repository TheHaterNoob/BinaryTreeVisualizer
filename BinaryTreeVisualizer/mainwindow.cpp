#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMenuBar>
#include <QMenu>
#include <QGraphicsView>
#include <QGraphicsTextItem>
#include <QInputDialog>
#include "binarytree.h"
#include "binarytreewidget.h"
#include <QMessageBox>
#include "customdialog.h"
#include "customdialog_copy.h"
#include <QObject>
#include <QTimer>
#include "searchdialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
   // ui->frame->setStyleSheet("background-color: rgb(255,255,255)");

    ui->setupUi(this);
    setMinimumSize(
        1200,
        900
        );

    binaryTreeWidget = new BinaryTreeWidget(this);


    ui->Visualizer->addWidget(binaryTreeWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}



//se muestra el dialog
void MainWindow::on_pushButton_3_clicked()
{
    showCustomDialog();


}

void MainWindow::showSearchDialog() {
    SearchDialog searchDialog(this);
    connect(&searchDialog, &SearchDialog::searchResult, this, &MainWindow::handleSearchResult);
    searchDialog.exec();
}

void MainWindow::handleSearchResult(bool found) {
    if (found) {
        QMessageBox::information(this, "Search Result", "TRUE");

    } else {
        QMessageBox::information(this, "Search Result", "FALSE");
    }
}

//funcion para mostrar el dialog
void MainWindow::showCustomDialog()
{

    CustomDialog dialog(this);

    //se conecta
    connect(&dialog, &CustomDialog::intValueSelected, this, &MainWindow::handleIntValueSelected);

    dialog.exec();
}

void MainWindow::showCustomDialog2()
{

    CustomDialog2 dialog(this);

    //se conecta
    connect(&dialog, &CustomDialog2::intValueSelected, this, &MainWindow::handleIntValueSelected);

    dialog.exec();
}

void MainWindow::handleIntValueSelected(int value) {
    binaryTreeWidget->binaryTree.insert(value);
    binaryTreeWidget->updateTree();

    QTimer::singleShot(100, [this]() {
        binaryTreeWidget->updateTree();
    });
}


//nuevo planel
void MainWindow::on_pushButton_2_clicked()
{
    showCustomDialog2();
    /*primero* pr = new primero(this);
    pr->setModal(true);
    pr->exec();
*/
}


void MainWindow::on_pushButton_clicked()
{
    showSearchDialog();
}

