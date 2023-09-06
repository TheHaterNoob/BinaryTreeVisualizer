#ifndef MENU_H
#define MENU_H

#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
        ~menu();

    int arbol;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    MainWindow *mainWindow;

    Ui::menu *ui;
};

#endif // MENU_H
