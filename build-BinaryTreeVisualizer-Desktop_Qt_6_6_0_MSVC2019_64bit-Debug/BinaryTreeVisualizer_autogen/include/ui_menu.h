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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName("menu");
        menu->resize(1099, 784);
        pushButton = new QPushButton(menu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 190, 371, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font.setPointSize(22);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}"));
        pushButton_2 = new QPushButton(menu);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(360, 350, 371, 91));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}"));
        label = new QLabel(menu);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 60, 271, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font1.setPointSize(36);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(menu);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(360, 510, 371, 91));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}"));

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("menu", "Arbol BST", nullptr));
        pushButton_2->setText(QCoreApplication::translate("menu", "Arbol Binario", nullptr));
        label->setText(QCoreApplication::translate("menu", "ARBOLES", nullptr));
        pushButton_3->setText(QCoreApplication::translate("menu", "Arbol AVL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
