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
#include <QObject>
#include <QTimer>


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



void MainWindow::on_pushButton_3_clicked()
{
    showCustomDialog();


}
void MainWindow::showCustomDialog()
{
    CustomDialog dialog(this);

    connect(&dialog, &CustomDialog::intValueSelected, this, &MainWindow::handleIntValueSelected);

    dialog.exec();
}
void MainWindow::handleIntValueSelected(int value) {
    binaryTreeWidget->binaryTree.insert(value);
    binaryTreeWidget->updateTree();

    QTimer::singleShot(100, [this]() {
        binaryTreeWidget->updateTree();
    });
}

