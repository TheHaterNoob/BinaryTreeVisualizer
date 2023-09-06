#include "deletedialog.h"
#include "qboxlayout.h"
#include "mainwindow.h"

DeleteDialog::DeleteDialog(MainWindow *mainWindow, QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Search Node");
    resize(300, 100);
    mainWindowPtr = mainWindow;
    deleteLineEdit = new QLineEdit(this);
    deleteButton = new QPushButton("Delete", this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(deleteLineEdit);
    layout->addWidget(deleteButton);

    connect(deleteButton, &QPushButton::clicked, this, &DeleteDialog::deleteButtonClicked);
}

void DeleteDialog::deleteButtonClicked()
{
    int deleteValue2 = deleteLineEdit->text().toInt();
    mainWindowPtr->binaryTreeWidget->binaryTree.deleteNodeDefault(deleteValue2);
    bool pudo=true;
    emit deleteResult(pudo);
    this->close();

}
