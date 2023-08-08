#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QObject>
#include "binarytreewidget.h"
#include "binarytree.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:


    void on_pushButton_3_clicked();
    void showCustomDialog();
    void showCustomDialog2();
    void handleIntValueSelected(int value);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    BinaryTree* arbol;
    BinaryTreeWidget* binaryTreeWidget;
    void showSearchDialog();
    void handleSearchResult(bool found);

};
#endif // MAINWINDOW_H
