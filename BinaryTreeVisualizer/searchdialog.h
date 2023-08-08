#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = nullptr);

signals:
    void searchResult(bool found);

private slots:
    void searchButtonClicked();

private:
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
};

#endif // SEARCHDIALOG_H
