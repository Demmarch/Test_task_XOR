#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onStart();
    void onStop();
    void processFiles();
    void modifyFile(const QString &filePath);

private:
    Ui::MainWindow *ui;
    QTimer *timer;

    QString inputMask;
    QString outputPath;
    QByteArray xorValue;
    bool deleteAfterProcessing;
    bool overwriteFiles;
    int timerInterval;
};

#endif // MAINWINDOW_H
