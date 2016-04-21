#ifndef DIALOGEDIT1_H
#define DIALOGEDIT1_H

#include <QDialog>

namespace Ui {
class DialogEdit1;
}

class DialogEdit1 : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEdit1(QWidget *parent = 0);
    ~DialogEdit1();

private:
    Ui::DialogEdit1 *ui;
};

#endif // DIALOGEDIT1_H
