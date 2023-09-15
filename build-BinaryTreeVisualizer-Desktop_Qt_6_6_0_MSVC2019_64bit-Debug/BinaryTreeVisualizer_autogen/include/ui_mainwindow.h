/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionYEP;
    QAction *actionAbrir_Arbol;
    QAction *actionConvert_to_Binary_disorder;
    QAction *actionConvert_to_BST;
    QAction *actionConvert_to_AVL;
    QAction *actionTwilight_Sparkle;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *Visualizer;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Y;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *Guardar;
    QPushButton *openButton;
    QPushButton *showRecorridosButton;
    QPushButton *limpiar;
    QLabel *label;
    QPushButton *saveScreenshot;
    QFrame *frame_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuOptions;
    QMenu *menuTools;
    QMenu *menuWindow;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1591, 1106);
        actionYEP = new QAction(MainWindow);
        actionYEP->setObjectName("actionYEP");
        actionAbrir_Arbol = new QAction(MainWindow);
        actionAbrir_Arbol->setObjectName("actionAbrir_Arbol");
        actionConvert_to_Binary_disorder = new QAction(MainWindow);
        actionConvert_to_Binary_disorder->setObjectName("actionConvert_to_Binary_disorder");
        actionConvert_to_BST = new QAction(MainWindow);
        actionConvert_to_BST->setObjectName("actionConvert_to_BST");
        actionConvert_to_AVL = new QAction(MainWindow);
        actionConvert_to_AVL->setObjectName("actionConvert_to_AVL");
        actionTwilight_Sparkle = new QAction(MainWindow);
        actionTwilight_Sparkle->setObjectName("actionTwilight_Sparkle");
        actionTwilight_Sparkle->setCheckable(true);
        actionTwilight_Sparkle->setChecked(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(180, 40, 1221, 731));
        Visualizer = new QVBoxLayout(verticalLayoutWidget_2);
        Visualizer->setObjectName("Visualizer");
        Visualizer->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 50, 141, 711));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
" border: 2px solid black;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 160, 123, 431));
        Y = new QVBoxLayout(verticalLayoutWidget);
        Y->setObjectName("Y");
        Y->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font.setPointSize(11);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}\n"
""));

        Y->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}\n"
""));

        Y->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}\n"
""));

        Y->addWidget(pushButton_4);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}\n"
""));

        Y->addWidget(pushButton);

        Guardar = new QPushButton(verticalLayoutWidget);
        Guardar->setObjectName("Guardar");
        Guardar->setFont(font);
        Guardar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}"));

        Y->addWidget(Guardar);

        openButton = new QPushButton(verticalLayoutWidget);
        openButton->setObjectName("openButton");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font1.setPointSize(12);
        openButton->setFont(font1);
        openButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}"));

        Y->addWidget(openButton);

        showRecorridosButton = new QPushButton(verticalLayoutWidget);
        showRecorridosButton->setObjectName("showRecorridosButton");
        showRecorridosButton->setFont(font1);
        showRecorridosButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}"));

        Y->addWidget(showRecorridosButton);

        limpiar = new QPushButton(verticalLayoutWidget);
        limpiar->setObjectName("limpiar");
        limpiar->setFont(font1);
        limpiar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}"));

        Y->addWidget(limpiar);

        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 121, 121));
        label->setStyleSheet(QString::fromUtf8("image: url(:/otro - copia.png);\n"
"border-color: rgb(240, 240, 240);"));
        saveScreenshot = new QPushButton(frame);
        saveScreenshot->setObjectName("saveScreenshot");
        saveScreenshot->setGeometry(QRect(50, 590, 41, 31));
        saveScreenshot->setStyleSheet(QString::fromUtf8("image: url(:/Downloads/1200px-Picture_icon_BLACK.svg.png);\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(190, 50, 1201, 711));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
" border: 2px solid black;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(190, 780, 101, 24));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(300, 780, 111, 24));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(420, 780, 111, 24));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(119, 193, 75);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        frame->raise();
        verticalLayoutWidget_2->raise();
        frame_2->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1591, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName("menuOptions");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName("menuWindow");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionYEP);
        menuFile->addAction(actionAbrir_Arbol);
        menuTools->addAction(actionConvert_to_Binary_disorder);
        menuTools->addAction(actionConvert_to_BST);
        menuTools->addAction(actionConvert_to_AVL);
        menuWindow->addAction(actionTwilight_Sparkle);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "BinaryTree", nullptr));
        actionYEP->setText(QCoreApplication::translate("MainWindow", "Guardar Arbol", nullptr));
        actionAbrir_Arbol->setText(QCoreApplication::translate("MainWindow", "Abrir Arbol", nullptr));
        actionConvert_to_Binary_disorder->setText(QCoreApplication::translate("MainWindow", "Convert to Binary (disorder)", nullptr));
        actionConvert_to_BST->setText(QCoreApplication::translate("MainWindow", "Convert to BST", nullptr));
        actionConvert_to_AVL->setText(QCoreApplication::translate("MainWindow", "Convert to AVL", nullptr));
        actionTwilight_Sparkle->setText(QCoreApplication::translate("MainWindow", "Twilight Sparkle", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Create Head", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Create Leaf Node", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Delete Node", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Search Node", nullptr));
        Guardar->setText(QCoreApplication::translate("MainWindow", "Save Tree", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "Open Tree", nullptr));
        showRecorridosButton->setText(QCoreApplication::translate("MainWindow", "Orders", nullptr));
        limpiar->setText(QCoreApplication::translate("MainWindow", "Clean Screen", nullptr));
        label->setText(QString());
        saveScreenshot->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "ALTURA", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "PROFUNDIDAD", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "BALANCE", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "Window", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
