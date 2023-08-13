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
#include "deletedialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{

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

void MainWindow::showSearchDialog()
{
    SearchDialog searchDialog(this);
    connect(&searchDialog, &SearchDialog::searchResult, this, &MainWindow::handleSearchResult);
    searchDialog.exec();
}

void MainWindow::showDeleteDialog()
{
    DeleteDialog deleteDialog(this);
    connect(&deleteDialog, &DeleteDialog::deleteResult, this, &MainWindow::handleDeleteResult);
    deleteDialog.exec();
}

void MainWindow::handleSearchResult(bool found) {

    if (found) {
        QMessageBox::information(this, "Search Result", "TRUE");

    } else {
        QMessageBox::information(this, "Search Result", "FALSE");
    }
}

void MainWindow::handleDeleteResult(bool pudo) {
    binaryTreeWidget->updateTree();

    QTimer::singleShot(100, [this]() {
        binaryTreeWidget->updateTree();
    });
    if(binaryTreeWidget->binaryTree.getRoot()==nullptr){
        this->Head=false;
    }
}

//funcion para mostrar el dialog
void MainWindow::showCustomDialog()
{

    if(!this->Head){
        CustomDialog dialog(this);

        //se conecta
        connect(&dialog, &CustomDialog::intValueSelected, this, &MainWindow::handleIntValueSelectedHead);

        dialog.exec();

    }else{
                QMessageBox::information(this, "ERROR", "YA HAY HEAD");
    }
}

void MainWindow::showCustomDialog2()
{
    if(this->Head){


    CustomDialog2 dialog(this);

    //se conecta
    connect(&dialog, &CustomDialog2::intValueSelected, this, &MainWindow::handleIntValueSelectedNode);

    dialog.exec();
    }else{
    QMessageBox::information(this, "ERROR", "NO HAY HEAD");
    }
}

void MainWindow::handleIntValueSelectedHead(int value) {
    binaryTreeWidget->binaryTree.insert(value);
    binaryTreeWidget->updateTree();
    this->Head=true;
    QTimer::singleShot(100, [this]() {
        binaryTreeWidget->updateTree();
    });
}

void MainWindow::handleIntValueSelectedNode(int value) {
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
}


void MainWindow::on_pushButton_clicked()
{
    showSearchDialog();
}


void MainWindow::on_pushButton_4_clicked()
{
 showDeleteDialog();
}

