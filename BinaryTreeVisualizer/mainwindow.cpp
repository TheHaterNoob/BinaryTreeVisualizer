#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMenuBar>
#include <QMenu>
#include <QGraphicsView>
#include <QGraphicsTextItem>
#include <QInputDialog>
#include "altura.h"
#include "balance.h"
#include "binarytree.h"
#include "binarytreewidget.h"
#include <QMessageBox>
#include "customdialog.h"
#include "customdialog_copy.h"
#include <QObject>
#include <QTimer>
#include "searchdialog.h"
#include "deletedialog.h"
#include <QScrollBar>
#include "profundidad.h"



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
    connect(ui->openButton, &QPushButton::clicked, this, &MainWindow::on_actionAbrir_Arbol_triggered);
    connect(ui->limpiar, &QPushButton::clicked, this, &MainWindow::on_limpiar_clicked);
    connect(ui->saveScreenshot, &QPushButton::clicked, this, &MainWindow::saveScreenshot);
    connect(ui->showRecorridosButton, &QPushButton::clicked, this, &MainWindow::showRecorridosDialog);




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

void MainWindow::saveScreenshot() {
    QPixmap screenshot = binaryTreeWidget->view->grab();

    QString filePath = QFileDialog::getSaveFileName(this, "Guardar Captura de Pantalla", "", "Imágenes (*.png)");

        if (!filePath.isEmpty()) {

        screenshot.save(filePath, "PNG");
        QMessageBox::information(this, "Guardado", "La captura de pantalla se ha guardado como un archivo .png.");
    }
}

void MainWindow::saveTreeToFile(TreeNode* node, std::ofstream& outFile) {
    if (!node) {
    outFile << "null\n";
    return;
}
outFile << node->data << "\n";
saveTreeToFile(node->left, outFile);
saveTreeToFile(node->right, outFile);
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
    if(Unicornio){
        binaryTreeWidget->updateTreeUnicorn();
    }else{
        binaryTreeWidget->updateTree();
    }
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
    if(this->Head) {
                if(type=='n'){
                    CustomDialog2 dialog(this);

                    // Fill the parentComboBox
                    TreeNode* root = binaryTreeWidget->binaryTree.getRoot();
                    fillParentComboBox(dialog.parentComboBox, root, "");

                    connect(&dialog, &CustomDialog2::intValueSelected, this, &MainWindow::handleIntValueSelectedNode2);

                    dialog.exec();
                }else{
                    CustomDialog dialog(this);

                    //se conecta
                    connect(&dialog, &CustomDialog::intValueSelected, this, &MainWindow::handleIntValueSelectedNode);

                    dialog.exec();
                }
    } else {
                QMessageBox::information(this, "ERROR", "NO HAY HEAD");
    }
}


void MainWindow::fillParentComboBox(QComboBox* comboBox, TreeNode* node, QString prefix) {
    if (node) {
                comboBox->addItem(prefix + QString::number(node->data), QVariant::fromValue<void*>(node));
                fillParentComboBox(comboBox, node->left, prefix + "L ");
                fillParentComboBox(comboBox, node->right, prefix + "R ");
    }
}

void MainWindow::handleIntValueSelectedHead(int value) {
    binaryTreeWidget->binaryTree.insert(value);
    if(Unicornio){
                binaryTreeWidget->updateTreeUnicorn();
    }else{
                binaryTreeWidget->updateTree();
    }
    if(binaryTreeWidget->binaryTree.getRoot()){
    this->Head=true;
    }
}

void MainWindow::handleIntValueSelectedNode(int value) {
    if(type=='b'){
    binaryTreeWidget->binaryTree.insert(value);
    }else if(type=='a'){
    binaryTreeWidget->binaryTree.insertNodeAVL(value);
    }

    updateTreeBasedOnUnicornio();
}

void MainWindow::handleIntValueSelectedNode2(int value, TreeNode* parentNode, bool isLeftChild) {
    if(type=='n'){
    binaryTreeWidget->binaryTree.insertNodeNormal(value,parentNode,isLeftChild);
    }

    updateTreeBasedOnUnicornio();
}

void MainWindow::updateTreeBasedOnUnicornio() {
    if(Unicornio){
    binaryTreeWidget->updateTreeUnicorn();
    }else{
    binaryTreeWidget->updateTree();
    }
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


void MainWindow::on_Guardar_clicked()
{
 QString filePath = QFileDialog::getSaveFileName(this, "Guardar árbol", "", "Archivos de texto (*.txt)");

     if (!filePath.isEmpty()) {
                std::ofstream outFile(filePath.toStdString());

                if (outFile.is_open()) {
                    TreeNode* root = binaryTreeWidget->binaryTree.getRoot();
                    saveTreeToFile(root, outFile);
                    outFile.close();
                    QMessageBox::information(this, "Guardado", "El árbol se ha guardado en el archivo.");
                } else {
                    QMessageBox::critical(this, "Error", "No se pudo abrir el archivo para guardar.");
                }
 }

}


void MainWindow::on_actionYEP_triggered()
{
 QString filePath = QFileDialog::getSaveFileName(this, "Guardar árbol", "", "Archivos de texto (*.txt)");

     if (!filePath.isEmpty()) {
                std::ofstream outFile(filePath.toStdString());

                if (outFile.is_open()) {
                    TreeNode* root = binaryTreeWidget->binaryTree.getRoot();
                    saveTreeToFile(root, outFile);
                    outFile.close();
                    QMessageBox::information(this, "Guardado", "El árbol se ha guardado en el archivo.");
                } else {
                    QMessageBox::critical(this, "Error", "No se pudo abrir el archivo para guardar.");
                }
 }

}


void MainWindow::on_actionAbrir_Arbol_triggered()
{

}


void MainWindow::on_pushButton_5_clicked()
{
 altura alturaDialog(this); // Suponiendo que "altura" es un QDialog

 // Muestra la ventana de "altura" como un diálogo modal
 alturaDialog.exec();



}


void MainWindow::on_openButton_clicked()
{
 QString filePath = QFileDialog::getOpenFileName(this, "Abrir archivo de árbol", "", "Archivos de texto (*.txt)");

     if (!filePath.isEmpty()) {
                if(type=='n'){
                    binaryTreeWidget->binaryTree.loadFromFileNormal(filePath);
                }else if(type=='b'){
                    binaryTreeWidget->binaryTree.loadFromFile(filePath);
                }else if(type=='a'){
                    binaryTreeWidget->binaryTree.loadFromFileAVL(filePath);
                }
                if(Unicornio){
                    binaryTreeWidget->updateTreeUnicorn();
                }else{
                    binaryTreeWidget->updateTree();
                }
                if(binaryTreeWidget->binaryTree.getRoot()!=nullptr){
                    this->Head=true;
                }
 }
}


void MainWindow::on_limpiar_clicked()
{
 binaryTreeWidget->clearTree();
 this->Head=false;
     if(Unicornio){
                    binaryTreeWidget->updateTreeUnicorn();
     }else{
                    binaryTreeWidget->updateTree();
     }
}


void MainWindow::on_actionConvert_to_BST_triggered()
{
 type='b';
 binaryTreeWidget->binaryTree.animateInsertionFromUnorderedTree(binaryTreeWidget,binaryTreeWidget->binaryTree.getRoot());

     if(Unicornio){
                    binaryTreeWidget->updateTreeUnicorn();
     }else{
                    binaryTreeWidget->updateTree();
     }
}


void MainWindow::on_actionConvert_to_Binary_disorder_triggered()
{
     type='n';
    if(Unicornio){
                binaryTreeWidget->updateTreeUnicorn();
    }else{
                binaryTreeWidget->updateTree();
    }
}


void MainWindow::on_actionConvert_to_AVL_triggered()
{
     type='a';
      binaryTreeWidget->binaryTree.animateConversionToAVLTree(binaryTreeWidget);
     if(Unicornio){
        binaryTreeWidget->updateTreeUnicorn();
     }else{
        binaryTreeWidget->updateTree();
     }
}





void MainWindow::on_actionTwilight_Sparkle_triggered()
{
     if(ui->actionTwilight_Sparkle->isChecked()){
                Unicornio=true;
        binaryTreeWidget->updateTreeUnicorn();
     }else{
              Unicornio=false;
                binaryTreeWidget->updateTree();
     }
}

void MainWindow::showRecorridosDialog() {
     // Crear un diálogo para mostrar los recorridos
     QDialog recorridosDialog(this);
     recorridosDialog.setWindowTitle("Recorridos del Árbol Binario");

         // Crear un layout para el diálogo
         QVBoxLayout* layout = new QVBoxLayout(&recorridosDialog);

     // Obtener el nodo raíz del árbol binario
     TreeNode* root = binaryTreeWidget->binaryTree.getRoot();

     // Crear etiquetas para los recorridos y agregarlas al layout
     QLabel* preorderLabel = new QLabel("Preorder: ");
     QLabel* inorderLabel = new QLabel("Inorder: ");
     QLabel* postorderLabel = new QLabel("Postorder: ");

     // Obtener los recorridos y convertirlos en cadenas de texto
     QString preorderStr = getPreorder(root);
     QString inorderStr = getInorder(root);
     QString postorderStr = getPostorder(root);

     QLabel* preorderValueLabel = new QLabel(preorderStr);
     QLabel* inorderValueLabel = new QLabel(inorderStr);
     QLabel* postorderValueLabel = new QLabel(postorderStr);

     layout->addWidget(preorderLabel);
     layout->addWidget(preorderValueLabel);
     layout->addWidget(inorderLabel);
     layout->addWidget(inorderValueLabel);
     layout->addWidget(postorderLabel);
     layout->addWidget(postorderValueLabel);

     // Mostrar el diálogo
     recorridosDialog.exec();
}

QString MainWindow::getPreorder(TreeNode* node) {
     if (!node) {
                return "";
     }

     QString result = QString::number(node->data) + " ";
     result += getPreorder(node->left);
     result += getPreorder(node->right);

     return result;
}

QString MainWindow::getInorder(TreeNode* node) {
     if (!node) {
                return "";
     }

     QString result = getInorder(node->left);
     result += QString::number(node->data) + " ";
     result += getInorder(node->right);

     return result;
}

QString MainWindow::getPostorder(TreeNode* node) {
     if (!node) {
                return "";
     }

     QString result = getPostorder(node->left);
     result += getPostorder(node->right);
     result += QString::number(node->data) + " ";

     return result;
}


void MainWindow::on_showRecorridosButton_clicked()
{

}


void MainWindow::on_pushButton_6_clicked()
{
     profundidad profundidadDialog(this);


     profundidadDialog.exec();
}


void MainWindow::on_pushButton_7_clicked()
{

     balance balanceDialog(this);


     balanceDialog.exec();

}


void MainWindow::on_saveScreenshot_clicked()
{

}

