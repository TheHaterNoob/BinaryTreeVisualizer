#include "profundidad.h"
#include "ui_profundidad.h"

profundidad::profundidad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profundidad)
{
    ui->setupUi(this);
}

profundidad::~profundidad()
{
    delete ui;
}
