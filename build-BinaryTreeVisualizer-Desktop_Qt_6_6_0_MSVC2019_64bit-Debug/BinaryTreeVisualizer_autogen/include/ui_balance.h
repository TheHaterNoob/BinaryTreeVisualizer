/********************************************************************************
** Form generated from reading UI file 'balance.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCE_H
#define UI_BALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_balance
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *balance)
    {
        if (balance->objectName().isEmpty())
            balance->setObjectName("balance");
        balance->resize(632, 521);
        label = new QLabel(balance);
        label->setObjectName("label");
        label->setGeometry(QRect(-190, -110, 1081, 751));
        label->setStyleSheet(QString::fromUtf8("image: url(:/Downloads/4f01f948-b2ce-4f03-907e-6275a18da166.png);"));
        label_2 = new QLabel(balance);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, -10, 371, 201));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font.setPointSize(72);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(balance);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 170, 551, 271));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/Downloads/balance.png);"));

        retranslateUi(balance);

        QMetaObject::connectSlotsByName(balance);
    } // setupUi

    void retranslateUi(QDialog *balance)
    {
        balance->setWindowTitle(QCoreApplication::translate("balance", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("balance", "BALANCE", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class balance: public Ui_balance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCE_H
