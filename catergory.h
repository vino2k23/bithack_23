#ifndef CATERGORY_H
#define CATERGORY_H

#include <QDialog>
#include<QMessageBox>

namespace Ui {
class catergory;
}

class catergory : public QDialog
{
    Q_OBJECT

public:
    explicit catergory(QWidget *parent = nullptr);
    ~catergory();

private slots:
    void on_apti_btn_clicked();

private:
    Ui::catergory *ui;
};

#endif // CATERGORY_H
