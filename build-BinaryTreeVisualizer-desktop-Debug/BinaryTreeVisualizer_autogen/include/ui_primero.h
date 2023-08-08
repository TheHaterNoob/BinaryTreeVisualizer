/********************************************************************************
** Form generated from reading UI file 'primero.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMERO_H
#define UI_PRIMERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_primero
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *AGREGAR;

    void setupUi(QDialog *primero)
    {
        if (primero->objectName().isEmpty())
            primero->setObjectName("primero");
        primero->resize(748, 487);
        comboBox = new QComboBox(primero);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(280, 150, 141, 31));
        pushButton = new QPushButton(primero);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 220, 121, 101));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/flecha - copia.png);"));
        pushButton_2 = new QPushButton(primero);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 220, 121, 101));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/flecha2 - copia.png);"));
        AGREGAR = new QPushButton(primero);
        AGREGAR->setObjectName("AGREGAR");
        AGREGAR->setGeometry(QRect(260, 380, 151, 61));

        retranslateUi(primero);

        QMetaObject::connectSlotsByName(primero);
    } // setupUi

    void retranslateUi(QDialog *primero)
    {
        primero->setWindowTitle(QCoreApplication::translate("primero", "Dialog", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        AGREGAR->setText(QCoreApplication::translate("primero", "CREAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class primero: public Ui_primero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMERO_H
