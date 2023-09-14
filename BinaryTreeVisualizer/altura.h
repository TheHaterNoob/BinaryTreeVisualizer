#ifndef ALTURA_H
#define ALTURA_H

#include <QDialog>

namespace Ui {
class altura;
}

class altura : public QDialog
{
    Q_OBJECT

public:
    explicit altura(QWidget *parent = nullptr);
    ~altura();

private:
    Ui::altura *ui;
};

#endif // ALTURA_H
