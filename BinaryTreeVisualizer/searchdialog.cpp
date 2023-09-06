#include "searchdialog.h"
#include "qboxlayout.h"
#include "mainwindow.h"

SearchDialog::SearchDialog(MainWindow *mainWindow, QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Search Node");
    resize(300, 100);
    mainWindowPtr = mainWindow;
    searchLineEdit = new QLineEdit(this);
    searchButton = new QPushButton("Search", this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(searchLineEdit);
    layout->addWidget(searchButton);

    connect(searchButton, &QPushButton::clicked, this, &SearchDialog::searchButtonClicked);

}

void SearchDialog::searchButtonClicked()
{
    int searchValue = searchLineEdit->text().toInt();
    bool exist = mainWindowPtr->binaryTreeWidget->binaryTree.searchNodeNormal(mainWindowPtr->binaryTreeWidget->binaryTree.getRoot(),searchValue);
    emit searchResult(exist);
    this->close();
}
