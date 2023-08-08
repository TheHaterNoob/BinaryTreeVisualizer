#include "customdialog_copy.h"


CustomDialog2::CustomDialog2(QWidget *parent) : QDialog(parent)
{
    spinBox = new QSpinBox(this);
    radioButtonOptionA = new QRadioButton("Left", this);
    radioButtonOptionB = new QRadioButton("Right", this);
    okButton = new QPushButton("AGREGAR", this);
    cancelButton = new QPushButton("Cancel", this);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(spinBox);
    mainLayout->addWidget(radioButtonOptionA);
    mainLayout->addWidget(radioButtonOptionB);


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
        bool optionASelected = radioButtonOptionA->isChecked();

        //aqui no se que pedo la verdad
        emit intValueSelected(value, optionASelected);

        //se cierra simplemente
        close();
    });


    connect(cancelButton, &QPushButton::clicked, this, &QDialog::close);

    setWindowTitle("ADD");
}
