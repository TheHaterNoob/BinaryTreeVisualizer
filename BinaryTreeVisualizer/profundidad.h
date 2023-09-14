#ifndef PROFUNDIDAD_H
#define PROFUNDIDAD_H

#include <QDialog>

namespace Ui {
class profundidad;
}

class profundidad : public QDialog
{
    Q_OBJECT

public:
    explicit profundidad(QWidget *parent = nullptr);
    ~profundidad();

private:
    Ui::profundidad *ui;
};

#endif // PROFUNDIDAD_H
