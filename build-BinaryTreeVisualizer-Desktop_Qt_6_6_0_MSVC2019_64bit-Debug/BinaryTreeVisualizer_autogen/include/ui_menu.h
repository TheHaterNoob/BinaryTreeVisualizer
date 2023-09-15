/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName("menu");
        menu->resize(1099, 784);
        pushButton_2 = new QPushButton(menu);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(500, 580, 81, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font.setPointSize(14);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	background-color: rgb(92, 203, 65);\n"
"\n"
"}"));
        label = new QLabel(menu);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 100, 421, 121));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font1.setPointSize(72);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(menu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-230, -30, 1601, 1261));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/Downloads/855180b4-d451-4a1d-b13c-76324558e010.png);"));
        label_3 = new QLabel(menu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(300, 250, 481, 311));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/Downloads/imagen_2023-09-09_000023045-removebg-preview.png);"));
        label_4 = new QLabel(menu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(470, 650, 141, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font2.setPointSize(12);
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        label_2->raise();
        pushButton_2->raise();
        label->raise();
        label_3->raise();
        label_4->raise();

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("menu", "\302\241START!", nullptr));
        label->setText(QCoreApplication::translate("menu", "ARBOLES", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("menu", "By AA Comp.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
