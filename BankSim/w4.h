#ifndef W4_H
#define W4_H

#include <QDialog>

namespace Ui {
class W4;
}

class W4 : public QDialog
{
    Q_OBJECT

public:
    explicit W4(QWidget *parent = nullptr);
    ~W4();

private:
    Ui::W4 *ui;
};

#endif // W4_H
