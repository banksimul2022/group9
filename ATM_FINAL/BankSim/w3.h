#ifndef W3_H
#define W3_H

#include <QDialog>

namespace Ui {
class W3;
}

class W3 : public QDialog
{
    Q_OBJECT

public:
    explicit W3(QWidget *parent = nullptr);
    ~W3();

private:
    Ui::W3 *ui;
};

#endif // W3_H
