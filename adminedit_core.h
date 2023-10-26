#ifndef ADMINEDIT_CORE_H
#define ADMINEDIT_CORE_H

#include <QDialog>

namespace Ui {
class Adminedit_core;
}

class Adminedit_core : public QDialog
{
    Q_OBJECT

public:
    explicit Adminedit_core(QWidget *parent = nullptr);
    ~Adminedit_core();

private slots:
    void on_submitbtn_clicked();

    void on_quit_clicked();

private:
    Ui::Adminedit_core *ui;
};

#endif // ADMINEDIT_CORE_H
