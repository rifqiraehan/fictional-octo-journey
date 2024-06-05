#ifndef PENGHITUNGIPS_H
#define PENGHITUNGIPS_H

#include <QMainWindow>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui {
class PenghitungIPS;
}
QT_END_NAMESPACE

class PenghitungIPS : public QMainWindow
{
    Q_OBJECT

public:
    PenghitungIPS(QWidget *parent = nullptr);
    ~PenghitungIPS();

private slots:
    void on_addButton_clicked();
    void on_calculateButton_clicked();
    void on_cellChanged(int row, int column);

private:
    Ui::PenghitungIPS *ui;
    QVector<float> grades;
    QVector<int> credits;

    void calculateIPS();
};

#endif // PENGHITUNGIPS_H
