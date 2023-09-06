#ifndef CUSTOMDIALOG_COPY_H
#define CUSTOMDIALOG_COPY_H

#include "binarytree.h"
#include <QDialog>
#include <QSpinBox>
#include <QRadioButton>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QComboBox>

class CustomDialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit CustomDialog2(QWidget *parent = nullptr);
     QComboBox* parentComboBox;

signals:

    void intValueSelected(int value, TreeNode* parentNode, bool isLeftChild);

private:
    QSpinBox *spinBox;
    QRadioButton *radioButtonOptionA;
    QRadioButton *radioButtonOptionB;
    QPushButton *okButton;
    QPushButton *cancelButton;


};

#endif // CUSTOMDIALOG_COPY_H
