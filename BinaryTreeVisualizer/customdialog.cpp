#include "customdialog.h"


CustomDialog::CustomDialog(QWidget *parent) : QDialog(parent)
{
    spinBox = new QSpinBox(this);
    okButton = new QPushButton("OK", this);
    cancelButton = new QPushButton("Cancel", this);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(spinBox);



    //aqui solo instancia los botones en el dialog
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(okButton);
    buttonLayout->addWidget(cancelButton);


    mainLayout->addLayout(buttonLayout);

    //creo que aquí es donde esta la logica de dibujarlo
    connect(okButton, &QPushButton::clicked, [this]() {
        //el valor del nodo
        int value = spinBox->value();

        //opción seleccionada
        bool optionASelected = true;

        //aqui no se que pedo la verdad
        emit intValueSelected(value, optionASelected);

        //se cierra simplemente
        close();
    });


    connect(cancelButton, &QPushButton::clicked, this, &QDialog::close);

    setWindowTitle("ADD");
}
