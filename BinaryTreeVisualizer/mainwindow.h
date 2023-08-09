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
    bool Head =false;
    BinaryTreeWidget* binaryTreeWidget;
private slots:


    void on_pushButton_3_clicked();
    void showCustomDialog();
    void showCustomDialog2();
    void showDeleteDialog();
    void handleDeleteResult(bool pudo);
    void handleIntValueSelectedHead(int value);
    void handleIntValueSelectedNode(int value);
    void handleSearchResult(bool found);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    BinaryTree* arbol;

    void showSearchDialog();


};
#endif // MAINWINDOW_H
