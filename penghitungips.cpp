#include "penghitungips.h"
#include "./ui_penghitungips.h"
#include <QTableWidgetItem>

PenghitungIPS::PenghitungIPS(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PenghitungIPS)
{
    ui->setupUi(this);

    QFont font = ui->ipsLabel->font();
    font.setBold(true);
    ui->ipsLabel->setFont(font);

    ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);

    connect(ui->tableWidget, &QTableWidget::cellChanged, this, &PenghitungIPS::on_cellChanged);

    connect(ui->addButton, &QPushButton::clicked, this, &PenghitungIPS::on_addButton_clicked);

    connect(ui->calculateButton, &QPushButton::clicked, this, &PenghitungIPS::on_calculateButton_clicked);

    connect(ui->deleteButton, &QPushButton::clicked, this, &PenghitungIPS::on_deleteButton_clicked);
}

PenghitungIPS::~PenghitungIPS()
{
    delete ui;
}

float convertGrade(const QString& grade) {
    if (grade == "A") return 4.0;
    else if (grade == "AB") return 3.5;
    else if (grade == "B") return 3.0;
    else if (grade == "BC") return 2.5;
    else if (grade == "C") return 2.0;
    else if (grade == "D") return 1.0;
    else if (grade == "E") return 0.0;
    else return -1;
}

void PenghitungIPS::calculateIPS()
{
    float sum = 0;
    int totalSKS = 0;
    for (int i = 0; i < ui->tableWidget->rowCount(); i++) {
        QTableWidgetItem* sksItem = ui->tableWidget->item(i, 1);
        QTableWidgetItem* nilaiItem = ui->tableWidget->item(i, 2);

        if (sksItem && nilaiItem) {
            int sks = sksItem->text().toInt();
            QString nilai = nilaiItem->text();
            float nilaiAngka = convertGrade(nilai);

            if (nilaiAngka != -1) {
                sum += nilaiAngka * sks;
                totalSKS += sks;
            }
        }
    }

    if (totalSKS > 0) {
        float ips = sum / totalSKS;
        ui->ipsLabel->setText("IPS: " + QString::number(ips));
    } else {
        ui->ipsLabel->setText("Tidak ada SKS yang diinput.");
    }
}

void PenghitungIPS::on_addButton_clicked()
{
    QString namaMatkul = ui->matkulLineEdit->text();
    int sks = ui->sksLineEdit->text().toInt();
    QString nilai = ui->nilaiComboBox->currentText();
    float nilaiAngka = convertGrade(nilai);

    if (nilaiAngka == -1 || sks <= 0 || namaMatkul.isEmpty()) {
        return;
    }

    int rowCount = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(rowCount);

    QTableWidgetItem *matkulItem = new QTableWidgetItem(namaMatkul);
    QTableWidgetItem *sksItem = new QTableWidgetItem(QString::number(sks));
    QTableWidgetItem *nilaiItem = new QTableWidgetItem(nilai);

    ui->tableWidget->setItem(rowCount, 0, matkulItem);
    ui->tableWidget->setItem(rowCount, 1, sksItem);
    ui->tableWidget->setItem(rowCount, 2, nilaiItem);

    ui->matkulLineEdit->clear();
    ui->sksLineEdit->clear();
    ui->nilaiComboBox->setCurrentIndex(0);

    ui->statusLabel->setText("Mata kuliah berhasil ditambahkan.");

    calculateIPS();
}

void PenghitungIPS::on_calculateButton_clicked()
{
    calculateIPS();
}

void PenghitungIPS::on_deleteButton_clicked()
{
    QList<QTableWidgetSelectionRange> selectionRanges = ui->tableWidget->selectedRanges();
    for (const QTableWidgetSelectionRange &range : selectionRanges) {
        for (int row = range.bottomRow(); row >= range.topRow(); row--) {
            ui->tableWidget->removeRow(row);
        }
    }
}

void PenghitungIPS::on_cellChanged(int row, int column)
{
    Q_UNUSED(row);
    Q_UNUSED(column);
    calculateIPS();
}
