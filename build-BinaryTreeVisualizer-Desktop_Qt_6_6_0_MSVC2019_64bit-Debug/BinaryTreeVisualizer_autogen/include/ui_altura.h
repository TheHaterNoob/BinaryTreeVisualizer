/********************************************************************************
** Form generated from reading UI file 'altura.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTURA_H
#define UI_ALTURA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_altura
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *altura)
    {
        if (altura->objectName().isEmpty())
            altura->setObjectName("altura");
        altura->resize(632, 521);
        label = new QLabel(altura);
        label->setObjectName("label");
        label->setGeometry(QRect(-80, -140, 1021, 811));
        label->setStyleSheet(QString::fromUtf8("image: url(:/Downloads/4f01f948-b2ce-4f03-907e-6275a18da166.png);"));
        label_2 = new QLabel(altura);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 20, 311, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font.setPointSize(72);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(altura);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 160, 451, 271));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/Downloads/hola.png);"));

        retranslateUi(altura);

        QMetaObject::connectSlotsByName(altura);
    } // setupUi

    void retranslateUi(QDialog *altura)
    {
        altura->setWindowTitle(QCoreApplication::translate("altura", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("altura", "ALTURA", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class altura: public Ui_altura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTURA_H
