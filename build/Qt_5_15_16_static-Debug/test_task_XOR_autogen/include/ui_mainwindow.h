/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelLog;
    QTextBrowser *textBrowserLog;
    QLineEdit *lineEditInputMask;
    QLineEdit *lineEditOutputPath;
    QLabel *labelInputMask;
    QLabel *labelOutputPath;
    QCheckBox *checkBoxDeleteAfterProcessing;
    QGroupBox *groupBoxFileConflict;
    QRadioButton *radioButtonOverwrite;
    QRadioButton *radioButtonAddCounter;
    QGroupBox *groupBoxRunMode;
    QRadioButton *radioButtonSingleRun;
    QRadioButton *radioButtonTimerRun;
    QLabel *labelInterval;
    QSpinBox *spinBoxInterval;
    QLabel *labelXorValue;
    QLineEdit *lineEditXorValue;
    QPushButton *buttonStart;
    QPushButton *buttonStop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 515);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelLog = new QLabel(centralwidget);
        labelLog->setObjectName(QString::fromUtf8("labelLog"));
        labelLog->setGeometry(QRect(440, 10, 63, 20));
        textBrowserLog = new QTextBrowser(centralwidget);
        textBrowserLog->setObjectName(QString::fromUtf8("textBrowserLog"));
        textBrowserLog->setGeometry(QRect(440, 40, 311, 401));
        lineEditInputMask = new QLineEdit(centralwidget);
        lineEditInputMask->setObjectName(QString::fromUtf8("lineEditInputMask"));
        lineEditInputMask->setGeometry(QRect(230, 20, 161, 28));
        lineEditOutputPath = new QLineEdit(centralwidget);
        lineEditOutputPath->setObjectName(QString::fromUtf8("lineEditOutputPath"));
        lineEditOutputPath->setGeometry(QRect(230, 60, 161, 28));
        labelInputMask = new QLabel(centralwidget);
        labelInputMask->setObjectName(QString::fromUtf8("labelInputMask"));
        labelInputMask->setGeometry(QRect(10, 20, 211, 20));
        labelOutputPath = new QLabel(centralwidget);
        labelOutputPath->setObjectName(QString::fromUtf8("labelOutputPath"));
        labelOutputPath->setGeometry(QRect(10, 60, 221, 20));
        checkBoxDeleteAfterProcessing = new QCheckBox(centralwidget);
        checkBoxDeleteAfterProcessing->setObjectName(QString::fromUtf8("checkBoxDeleteAfterProcessing"));
        checkBoxDeleteAfterProcessing->setGeometry(QRect(10, 100, 331, 26));
        groupBoxFileConflict = new QGroupBox(centralwidget);
        groupBoxFileConflict->setObjectName(QString::fromUtf8("groupBoxFileConflict"));
        groupBoxFileConflict->setGeometry(QRect(20, 130, 241, 91));
        radioButtonOverwrite = new QRadioButton(groupBoxFileConflict);
        radioButtonOverwrite->setObjectName(QString::fromUtf8("radioButtonOverwrite"));
        radioButtonOverwrite->setGeometry(QRect(10, 30, 281, 26));
        radioButtonOverwrite->setChecked(true);
        radioButtonAddCounter = new QRadioButton(groupBoxFileConflict);
        radioButtonAddCounter->setObjectName(QString::fromUtf8("radioButtonAddCounter"));
        radioButtonAddCounter->setGeometry(QRect(10, 60, 311, 26));
        groupBoxRunMode = new QGroupBox(centralwidget);
        groupBoxRunMode->setObjectName(QString::fromUtf8("groupBoxRunMode"));
        groupBoxRunMode->setGeometry(QRect(20, 240, 241, 91));
        radioButtonSingleRun = new QRadioButton(groupBoxRunMode);
        radioButtonSingleRun->setObjectName(QString::fromUtf8("radioButtonSingleRun"));
        radioButtonSingleRun->setGeometry(QRect(10, 30, 221, 26));
        radioButtonSingleRun->setChecked(true);
        radioButtonTimerRun = new QRadioButton(groupBoxRunMode);
        radioButtonTimerRun->setObjectName(QString::fromUtf8("radioButtonTimerRun"));
        radioButtonTimerRun->setGeometry(QRect(10, 60, 221, 26));
        labelInterval = new QLabel(centralwidget);
        labelInterval->setObjectName(QString::fromUtf8("labelInterval"));
        labelInterval->setGeometry(QRect(10, 350, 221, 20));
        spinBoxInterval = new QSpinBox(centralwidget);
        spinBoxInterval->setObjectName(QString::fromUtf8("spinBoxInterval"));
        spinBoxInterval->setGeometry(QRect(230, 350, 151, 29));
        spinBoxInterval->setMinimum(100);
        spinBoxInterval->setMaximum(99000);
        spinBoxInterval->setValue(1000);
        labelXorValue = new QLabel(centralwidget);
        labelXorValue->setObjectName(QString::fromUtf8("labelXorValue"));
        labelXorValue->setGeometry(QRect(10, 380, 221, 20));
        lineEditXorValue = new QLineEdit(centralwidget);
        lineEditXorValue->setObjectName(QString::fromUtf8("lineEditXorValue"));
        lineEditXorValue->setGeometry(QRect(230, 380, 161, 28));
        buttonStart = new QPushButton(centralwidget);
        buttonStart->setObjectName(QString::fromUtf8("buttonStart"));
        buttonStart->setGeometry(QRect(20, 420, 83, 29));
        buttonStop = new QPushButton(centralwidget);
        buttonStop->setObjectName(QString::fromUtf8("buttonStop"));
        buttonStop->setGeometry(QRect(270, 420, 83, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "XOR", nullptr));
        labelLog->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270", nullptr));
        labelInputMask->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\320\272\320\260 \320\262\321\205\320\276\320\264\320\275\321\213\321\205 \321\204\320\260\320\271\320\273\320\276\320\262: (*.\"*\"):", nullptr));
        labelOutputPath->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\264\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \321\204\320\260\320\271\320\273\320\276\320\262:", nullptr));
        checkBoxDeleteAfterProcessing->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\321\217\321\202\321\214 \320\276\321\200\320\270\320\263\320\270\320\275\320\260\320\273\321\214\320\275\321\213\320\265 \321\204\320\260\320\271\320\273\321\213", nullptr));
        groupBoxFileConflict->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \320\277\321\200\320\270 \321\201\320\276\320\262\320\277\320\260\320\264\320\265\320\275\320\270\320\270 \320\270\320\274\320\265\320\275:", nullptr));
        radioButtonOverwrite->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\267\320\260\320\277\320\270\321\201\320\260\321\202\321\214", nullptr));
        radioButtonAddCounter->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\207\320\265\321\202\321\207\320\270\320\272 \320\272 \320\270\320\274\320\265\320\275\320\270", nullptr));
        groupBoxRunMode->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \320\267\320\260\320\277\321\203\321\201\320\272\320\260:", nullptr));
        radioButtonSingleRun->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\276\320\262\321\213\320\271 \320\267\320\260\320\277\321\203\321\201\320\272", nullptr));
        radioButtonTimerRun->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276 \321\202\320\260\320\271\320\274\320\265\321\200\321\203", nullptr));
        labelInterval->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\276\320\277\321\200\320\276\321\201\320\260 (\320\274\321\201):", nullptr));
        labelXorValue->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 XOR (8 \320\261\320\260\320\271\321\202, HEX):", nullptr));
        buttonStart->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        buttonStop->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
