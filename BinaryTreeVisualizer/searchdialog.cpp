#include "searchdialog.h"
#include "qboxlayout.h"

SearchDialog::SearchDialog(QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Search Node");
    resize(300, 100);

    searchLineEdit = new QLineEdit(this);
    searchButton = new QPushButton("Search", this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(searchLineEdit);
    layout->addWidget(searchButton);

    connect(searchButton, &QPushButton::clicked, this, &SearchDialog::searchButtonClicked);
}

void SearchDialog::searchButtonClicked()
{
    bool found = false;
    int searchValue = searchLineEdit->text().toInt();

    emit searchResult(found);
}
