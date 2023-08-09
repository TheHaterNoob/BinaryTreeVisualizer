#ifndef DELETEDIALOG_H
#define DELETEDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include "mainwindow.h"

class DeleteDialog : public QDialog
{
    Q_OBJECT

public:
    DeleteDialog(MainWindow *mainWindow, QWidget *parent = nullptr);

signals:
    void deleteResult(bool posible);

private slots:
    void deleteButtonClicked();

private:
    QLineEdit *deleteLineEdit;
    QPushButton *deleteButton;
    MainWindow *mainWindowPtr;
};

#endif // DELETEDIALOG_H
