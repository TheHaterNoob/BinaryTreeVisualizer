#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include "mainwindow.h"

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    SearchDialog(MainWindow *mainWindow, QWidget *parent = nullptr);

signals:
    void searchResult(bool found);

private slots:
    void searchButtonClicked();

private:
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    MainWindow *mainWindowPtr;
};

#endif // SEARCHDIALOG_H
