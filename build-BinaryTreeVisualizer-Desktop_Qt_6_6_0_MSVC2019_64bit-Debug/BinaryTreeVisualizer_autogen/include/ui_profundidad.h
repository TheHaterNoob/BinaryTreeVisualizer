/********************************************************************************
** Form generated from reading UI file 'profundidad.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFUNDIDAD_H
#define UI_PROFUNDIDAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_profundidad
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *profundidad)
    {
        if (profundidad->objectName().isEmpty())
            profundidad->setObjectName("profundidad");
        profundidad->resize(632, 521);
        label = new QLabel(profundidad);
        label->setObjectName("label");
        label->setGeometry(QRect(-190, -120, 1071, 751));
        label->setStyleSheet(QString::fromUtf8("image: url(:/Downloads/4f01f948-b2ce-4f03-907e-6275a18da166.png);"));
        label_2 = new QLabel(profundidad);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, -30, 561, 241));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font.setPointSize(72);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(profundidad);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 180, 481, 241));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/Downloads/profundida.png);"));

        retranslateUi(profundidad);

        QMetaObject::connectSlotsByName(profundidad);
    } // setupUi

    void retranslateUi(QDialog *profundidad)
    {
        profundidad->setWindowTitle(QCoreApplication::translate("profundidad", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("profundidad", "PROFUNDIDAD", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class profundidad: public Ui_profundidad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFUNDIDAD_H
