#include "customdialog.h"

CustomDialog::CustomDialog(QWidget *parent) : QDialog(parent)
{
    spinBox = new QSpinBox(this);
    radioButtonOptionA = new QRadioButton("Left", this);
    radioButtonOptionB = new QRadioButton("Right", this);
    okButton = new QPushButton("OK", this);
    cancelButton = new QPushButton("Cancel", this);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(spinBox);
    mainLayout->addWidget(radioButtonOptionA);
    mainLayout->addWidget(radioButtonOptionB);

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(okButton);
    buttonLayout->addWidget(cancelButton);

    mainLayout->addLayout(buttonLayout);

    connect(okButton, &QPushButton::clicked, [this]() {
        int value = spinBox->value();
        bool optionASelected = radioButtonOptionA->isChecked();
        emit intValueSelected(value, optionASelected);
        close();
    });

    connect(cancelButton, &QPushButton::clicked, this, &QDialog::close);

    setWindowTitle("ADD");
}
