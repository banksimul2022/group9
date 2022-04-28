#ifndef W1_H
#define W1_H

#include <QDialog>

namespace Ui {
class W2;
}

class W2 : public QDialog
{
    Q_OBJECT

public:
    explicit W2(QWidget *parent = nullptr);
    ~W2();

private:
    Ui::W2 *ui;
};

#endif // W1_H
