/********************************************************************************
** Form generated from reading UI file 'main03.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN03_H
#define UI_MAIN03_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main03
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *main03)
    {
        if (main03->objectName().isEmpty())
            main03->setObjectName("main03");
        main03->resize(800, 600);
        centralwidget = new QWidget(main03);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 200, 80, 24));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 160, 113, 23));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(300, 160, 42, 24));
        spinBox->setValue(0);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setEnabled(true);
        checkBox->setGeometry(QRect(420, 160, 81, 22));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(570, 160, 53, 16));
        main03->setCentralWidget(centralwidget);
        menubar = new QMenuBar(main03);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        main03->setMenuBar(menubar);
        statusbar = new QStatusBar(main03);
        statusbar->setObjectName("statusbar");
        main03->setStatusBar(statusbar);

        retranslateUi(main03);

        QMetaObject::connectSlotsByName(main03);
    } // setupUi

    void retranslateUi(QMainWindow *main03)
    {
        main03->setWindowTitle(QCoreApplication::translate("main03", "main03", nullptr));
        pushButton->setText(QCoreApplication::translate("main03", "PushButton", nullptr));
        checkBox->setText(QCoreApplication::translate("main03", "CheckBox", nullptr));
        label->setText(QCoreApplication::translate("main03", "1234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main03: public Ui_main03 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN03_H
