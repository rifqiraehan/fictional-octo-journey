/********************************************************************************
** Form generated from reading UI file 'penghitungips.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PENGHITUNGIPS_H
#define UI_PENGHITUNGIPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PenghitungIPS
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout1;
    QLabel *labelMatkul;
    QLineEdit *matkulLineEdit;
    QHBoxLayout *horizontalLayout2;
    QLabel *labelSKS;
    QLineEdit *sksLineEdit;
    QHBoxLayout *horizontalLayout3;
    QLabel *labelNilai;
    QComboBox *nilaiComboBox;
    QHBoxLayout *horizontalLayout4;
    QPushButton *addButton;
    QPushButton *calculateButton;
    QTableWidget *tableWidget;
    QLabel *statusLabel;
    QLabel *ipsLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PenghitungIPS)
    {
        if (PenghitungIPS->objectName().isEmpty())
            PenghitungIPS->setObjectName("PenghitungIPS");
        PenghitungIPS->resize(800, 600);
        centralwidget = new QWidget(PenghitungIPS);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName("horizontalLayout1");
        labelMatkul = new QLabel(centralwidget);
        labelMatkul->setObjectName("labelMatkul");

        horizontalLayout1->addWidget(labelMatkul);

        matkulLineEdit = new QLineEdit(centralwidget);
        matkulLineEdit->setObjectName("matkulLineEdit");

        horizontalLayout1->addWidget(matkulLineEdit);


        verticalLayout->addLayout(horizontalLayout1);

        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setObjectName("horizontalLayout2");
        labelSKS = new QLabel(centralwidget);
        labelSKS->setObjectName("labelSKS");

        horizontalLayout2->addWidget(labelSKS);

        sksLineEdit = new QLineEdit(centralwidget);
        sksLineEdit->setObjectName("sksLineEdit");

        horizontalLayout2->addWidget(sksLineEdit);


        verticalLayout->addLayout(horizontalLayout2);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setObjectName("horizontalLayout3");
        labelNilai = new QLabel(centralwidget);
        labelNilai->setObjectName("labelNilai");

        horizontalLayout3->addWidget(labelNilai);

        nilaiComboBox = new QComboBox(centralwidget);
        nilaiComboBox->addItem(QString());
        nilaiComboBox->addItem(QString());
        nilaiComboBox->addItem(QString());
        nilaiComboBox->addItem(QString());
        nilaiComboBox->addItem(QString());
        nilaiComboBox->addItem(QString());
        nilaiComboBox->addItem(QString());
        nilaiComboBox->setObjectName("nilaiComboBox");

        horizontalLayout3->addWidget(nilaiComboBox);


        verticalLayout->addLayout(horizontalLayout3);

        horizontalLayout4 = new QHBoxLayout();
        horizontalLayout4->setObjectName("horizontalLayout4");
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");

        horizontalLayout4->addWidget(addButton);

        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName("calculateButton");

        horizontalLayout4->addWidget(calculateButton);


        verticalLayout->addLayout(horizontalLayout4);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName("statusLabel");

        verticalLayout->addWidget(statusLabel);

        ipsLabel = new QLabel(centralwidget);
        ipsLabel->setObjectName("ipsLabel");

        verticalLayout->addWidget(ipsLabel);

        PenghitungIPS->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PenghitungIPS);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        PenghitungIPS->setMenuBar(menubar);
        statusbar = new QStatusBar(PenghitungIPS);
        statusbar->setObjectName("statusbar");
        PenghitungIPS->setStatusBar(statusbar);

        retranslateUi(PenghitungIPS);

        QMetaObject::connectSlotsByName(PenghitungIPS);
    } // setupUi

    void retranslateUi(QMainWindow *PenghitungIPS)
    {
        PenghitungIPS->setWindowTitle(QCoreApplication::translate("PenghitungIPS", "PenghitungIPS", nullptr));
        labelMatkul->setText(QCoreApplication::translate("PenghitungIPS", "Nama Mata Kuliah", nullptr));
        labelSKS->setText(QCoreApplication::translate("PenghitungIPS", "Jumlah SKS", nullptr));
        labelNilai->setText(QCoreApplication::translate("PenghitungIPS", "Nilai", nullptr));
        nilaiComboBox->setItemText(0, QCoreApplication::translate("PenghitungIPS", "A", nullptr));
        nilaiComboBox->setItemText(1, QCoreApplication::translate("PenghitungIPS", "AB", nullptr));
        nilaiComboBox->setItemText(2, QCoreApplication::translate("PenghitungIPS", "B", nullptr));
        nilaiComboBox->setItemText(3, QCoreApplication::translate("PenghitungIPS", "BC", nullptr));
        nilaiComboBox->setItemText(4, QCoreApplication::translate("PenghitungIPS", "C", nullptr));
        nilaiComboBox->setItemText(5, QCoreApplication::translate("PenghitungIPS", "D", nullptr));
        nilaiComboBox->setItemText(6, QCoreApplication::translate("PenghitungIPS", "E", nullptr));

        addButton->setText(QCoreApplication::translate("PenghitungIPS", "Tambahkan Mata Kuliah", nullptr));
        calculateButton->setText(QCoreApplication::translate("PenghitungIPS", "Hitung IPS", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PenghitungIPS", "Mata Kuliah", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PenghitungIPS", "SKS", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PenghitungIPS", "Nilai", nullptr));
        ipsLabel->setText(QCoreApplication::translate("PenghitungIPS", "IPS: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PenghitungIPS: public Ui_PenghitungIPS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PENGHITUNGIPS_H
