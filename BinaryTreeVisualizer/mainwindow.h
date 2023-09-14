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
#include "qcombobox.h"
#include <fstream>
#include <sstream>
#include <string>
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QParallelAnimationGroup>
#include <QGraphicsItemAnimation>
#include <QTimer>
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>

#include "altura.h"
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
    char type = 'n';
private slots:


    void on_pushButton_3_clicked();
    void showCustomDialog();
    void showCustomDialog2();
    void showDeleteDialog();
    void handleDeleteResult(bool pudo);
    void handleIntValueSelectedHead(int value);
    void handleIntValueSelectedNode2(int value, TreeNode* parentNode, bool isLeftChild);
    void handleIntValueSelectedNode(int value);
    void updateTreeBasedOnUnicornio();
    void handleSearchResult(bool found);
    void fillParentComboBox(QComboBox* comboBox, TreeNode* node, QString prefix);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_Guardar_clicked();

    void on_actionYEP_triggered();

    void on_actionAbrir_Arbol_triggered();

    void on_pushButton_5_clicked();

    void on_openButton_clicked();

    void on_limpiar_clicked();

    void on_actionConvert_to_BST_triggered();

    void on_actionConvert_to_Binary_disorder_triggered();

    void on_actionConvert_to_AVL_triggered();


    void on_actionTwilight_Sparkle_triggered();
    void saveScreenshot();

    void on_showRecorridosButton_clicked();

    void showRecorridosDialog();
    QString getPreorder(TreeNode* node);
    QString getInorder(TreeNode* node);
    QString getPostorder(TreeNode* node);




    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_saveScreenshot_clicked();

private:
    Ui::MainWindow *ui;
    BinaryTree* arbol;
    bool Unicornio=false;
    void showSearchDialog();
    void saveTreeToFile(TreeNode* node, std::ofstream& outFile);



};
#endif // MAINWINDOW_H
