#include "altura.h"
#include "ui_altura.h"

altura::altura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::altura)
{
    ui->setupUi(this);
}

altura::~altura()
{
    delete ui;
}
