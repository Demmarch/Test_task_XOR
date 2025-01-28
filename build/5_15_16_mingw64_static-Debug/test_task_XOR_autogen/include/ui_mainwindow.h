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
    QTextBrowser *textBrowserLog;
    QLabel *labelInputMask;
    QLabel *labelOutputPath;
    QLabel *labelLog;
    QLineEdit *lineEditInputMask;
    QLineEdit *lineEditOutputPath;
    QGroupBox *groupBoxFileConflict;
    QRadioButton *radioButtonOverwrite;
    QRadioButton *radioButtonAddCounter;
    QGroupBox *groupBoxRunMode;
    QRadioButton *radioButtonSingleRun;
    QRadioButton *radioButtonTimerRun;
    QCheckBox *checkBoxDeleteAfterProcessing;
    QPushButton *buttonSelectPath;
    QLabel *labelInterval;
    QSpinBox *spinBoxInterval;
    QLabel *labelXorValue;
    QLineEdit *lineEditXorValue;
    QPushButton *buttonStart;
    QPushButton *pushbuttonStop;
    QPushButton *buttonExit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(704, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowserLog = new QTextBrowser(centralwidget);
        textBrowserLog->setObjectName(QString::fromUtf8("textBrowserLog"));
        textBrowserLog->setGeometry(QRect(430, 40, 256, 391));
        labelInputMask = new QLabel(centralwidget);
        labelInputMask->setObjectName(QString::fromUtf8("labelInputMask"));
        labelInputMask->setGeometry(QRect(20, 10, 221, 20));
        labelOutputPath = new QLabel(centralwidget);
        labelOutputPath->setObjectName(QString::fromUtf8("labelOutputPath"));
        labelOutputPath->setGeometry(QRect(20, 50, 221, 20));
        labelLog = new QLabel(centralwidget);
        labelLog->setObjectName(QString::fromUtf8("labelLog"));
        labelLog->setGeometry(QRect(430, 10, 63, 20));
        lineEditInputMask = new QLineEdit(centralwidget);
        lineEditInputMask->setObjectName(QString::fromUtf8("lineEditInputMask"));
        lineEditInputMask->setGeometry(QRect(240, 10, 161, 28));
        lineEditOutputPath = new QLineEdit(centralwidget);
        lineEditOutputPath->setObjectName(QString::fromUtf8("lineEditOutputPath"));
        lineEditOutputPath->setGeometry(QRect(240, 50, 161, 28));
        groupBoxFileConflict = new QGroupBox(centralwidget);
        groupBoxFileConflict->setObjectName(QString::fromUtf8("groupBoxFileConflict"));
        groupBoxFileConflict->setGeometry(QRect(20, 150, 241, 101));
        radioButtonOverwrite = new QRadioButton(groupBoxFileConflict);
        radioButtonOverwrite->setObjectName(QString::fromUtf8("radioButtonOverwrite"));
        radioButtonOverwrite->setGeometry(QRect(10, 30, 221, 26));
        radioButtonOverwrite->setChecked(false);
        radioButtonAddCounter = new QRadioButton(groupBoxFileConflict);
        radioButtonAddCounter->setObjectName(QString::fromUtf8("radioButtonAddCounter"));
        radioButtonAddCounter->setGeometry(QRect(10, 60, 221, 26));
        groupBoxRunMode = new QGroupBox(centralwidget);
        groupBoxRunMode->setObjectName(QString::fromUtf8("groupBoxRunMode"));
        groupBoxRunMode->setGeometry(QRect(20, 260, 241, 101));
        radioButtonSingleRun = new QRadioButton(groupBoxRunMode);
        radioButtonSingleRun->setObjectName(QString::fromUtf8("radioButtonSingleRun"));
        radioButtonSingleRun->setGeometry(QRect(10, 30, 221, 26));
        radioButtonSingleRun->setChecked(true);
        radioButtonTimerRun = new QRadioButton(groupBoxRunMode);
        radioButtonTimerRun->setObjectName(QString::fromUtf8("radioButtonTimerRun"));
        radioButtonTimerRun->setGeometry(QRect(10, 60, 221, 26));
        checkBoxDeleteAfterProcessing = new QCheckBox(centralwidget);
        checkBoxDeleteAfterProcessing->setObjectName(QString::fromUtf8("checkBoxDeleteAfterProcessing"));
        checkBoxDeleteAfterProcessing->setGeometry(QRect(20, 120, 321, 26));
        buttonSelectPath = new QPushButton(centralwidget);
        buttonSelectPath->setObjectName(QString::fromUtf8("buttonSelectPath"));
        buttonSelectPath->setGeometry(QRect(20, 80, 83, 29));
        labelInterval = new QLabel(centralwidget);
        labelInterval->setObjectName(QString::fromUtf8("labelInterval"));
        labelInterval->setGeometry(QRect(20, 380, 231, 20));
        spinBoxInterval = new QSpinBox(centralwidget);
        spinBoxInterval->setObjectName(QString::fromUtf8("spinBoxInterval"));
        spinBoxInterval->setGeometry(QRect(240, 380, 171, 29));
        spinBoxInterval->setMinimum(100);
        spinBoxInterval->setMaximum(99000);
        spinBoxInterval->setValue(1000);
        labelXorValue = new QLabel(centralwidget);
        labelXorValue->setObjectName(QString::fromUtf8("labelXorValue"));
        labelXorValue->setGeometry(QRect(20, 420, 221, 20));
        lineEditXorValue = new QLineEdit(centralwidget);
        lineEditXorValue->setObjectName(QString::fromUtf8("lineEditXorValue"));
        lineEditXorValue->setGeometry(QRect(240, 420, 161, 28));
        buttonStart = new QPushButton(centralwidget);
        buttonStart->setObjectName(QString::fromUtf8("buttonStart"));
        buttonStart->setGeometry(QRect(20, 460, 83, 29));
        pushbuttonStop = new QPushButton(centralwidget);
        pushbuttonStop->setObjectName(QString::fromUtf8("pushbuttonStop"));
        pushbuttonStop->setGeometry(QRect(150, 460, 83, 29));
        buttonExit = new QPushButton(centralwidget);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));
        buttonExit->setGeometry(QRect(280, 460, 83, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 704, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelInputMask->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\320\272\320\260 \320\262\321\205\320\276\320\264\320\275\321\213\321\205 \321\204\320\260\320\271\320\273\320\276\320\262: (*.\"*\"):", nullptr));
        labelOutputPath->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\264\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \321\204\320\260\320\271\320\273\320\276\320\262:", nullptr));
        labelLog->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270", nullptr));
        groupBoxFileConflict->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \320\277\321\200\320\270 \321\201\320\276\320\262\320\277\320\260\320\264\320\265\320\275\320\270\320\270 \320\270\320\274\320\265\320\275:", nullptr));
        radioButtonOverwrite->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\267\320\260\320\277\320\270\321\201\320\260\321\202\321\214", nullptr));
        radioButtonAddCounter->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\207\320\265\321\202\321\207\320\270\320\272 \320\272 \320\270\320\274\320\265\320\275\320\270", nullptr));
        groupBoxRunMode->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \320\267\320\260\320\277\321\203\321\201\320\272\320\260:", nullptr));
        radioButtonSingleRun->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\276\320\262\321\213\320\271 \320\267\320\260\320\277\321\203\321\201\320\272", nullptr));
        radioButtonTimerRun->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276 \321\202\320\260\320\271\320\274\320\265\321\200\321\203", nullptr));
        checkBoxDeleteAfterProcessing->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\321\217\321\202\321\214 \320\276\321\200\320\270\320\263\320\270\320\275\320\260\320\273\321\214\320\275\321\213\320\265 \321\204\320\260\320\271\320\273\321\213", nullptr));
        buttonSelectPath->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        labelInterval->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\276\320\277\321\200\320\276\321\201\320\260 (\320\274\321\201):", nullptr));
        labelXorValue->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\264\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \321\204\320\260\320\271\320\273\320\276\320\262:", nullptr));
        buttonStart->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        pushbuttonStop->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\277", nullptr));
        buttonExit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
