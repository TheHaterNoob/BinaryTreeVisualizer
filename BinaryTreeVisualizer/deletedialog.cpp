#include "deletedialog.h"
#include "qboxlayout.h"
#include "mainwindow.h"


DeleteDialog::DeleteDialog(MainWindow *mainWindow, QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Delete Node");
    resize(300, 100);
    mainWindowPtr = mainWindow;
    deleteLineEdit = new QLineEdit(this);
    deleteButton = new QPushButton("Delete", this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(deleteLineEdit);
    layout->addWidget(deleteButton);

    // Limitar la entrada a dígitos de menos de 99
    QIntValidator *validator = new QIntValidator(0, 98, this);
    deleteLineEdit->setValidator(validator);

    connect(deleteButton, &QPushButton::clicked, this, &DeleteDialog::deleteButtonClicked);
}


void DeleteDialog::deleteButtonClicked()
{
    int deleteValueI = deleteLineEdit->text().toInt();
    if(mainWindowPtr->type=='n'){
    mainWindowPtr->binaryTreeWidget->binaryTree.deleteNodeDefault(deleteValueI);
    }else{
    mainWindowPtr->binaryTreeWidget->binaryTree.deleteValue(deleteValueI);
    }
    bool pudo = true;
    emit deleteResult(pudo);
    this->close();
}
