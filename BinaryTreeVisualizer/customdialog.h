#ifndef CUSTOMDIALOG_H
#define CUSTOMDIALOG_H

#include <QDialog>
#include <QSpinBox>
#include <QRadioButton>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class CustomDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CustomDialog(QWidget *parent = nullptr);

signals:
    void intValueSelected(int value, bool optionASelected);

private:
    QSpinBox *spinBox;
    QRadioButton *radioButtonOptionA;
    QRadioButton *radioButtonOptionB;
    QPushButton *okButton;
    QPushButton *cancelButton;
};

#endif // CUSTOMDIALOG_H
