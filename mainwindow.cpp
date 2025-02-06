#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , timer(new QTimer(this)) {
    ui->setupUi(this);
    ui->lineEditXorValue->setValidator(new QRegularExpressionValidator(QRegularExpression("^[0-9A-Fa-f]{1,16}$"), this));


    connect(ui->buttonStart, &QPushButton::clicked, this, &MainWindow::onStart);
    connect(ui->buttonStop, &QPushButton::clicked, this, &MainWindow::onStop);
    connect(timer, &QTimer::timeout, this, &MainWindow::processFiles);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onStart() {
    // Чтение настроек
    inputMask = ui->lineEditInputMask->text();
    outputPath = ui->lineEditOutputPath->text();
    deleteAfterProcessing = ui->checkBoxDeleteAfterProcessing->isChecked();
    overwriteFiles = ui->radioButtonOverwrite->isChecked();
    timerInterval = ui->spinBoxInterval->value();
    xorValue = QByteArray::fromHex(ui->lineEditXorValue->text().toUtf8());

    if (ui->radioButtonTimerRun->isChecked()) {
        timer->start(timerInterval);
    } else {
        processFiles();
    }
}

void MainWindow::onStop() {
    timer->stop();
}

void MainWindow::processFiles() {
    QDir dir(QDir::currentPath());
    QStringList files = dir.entryList(QStringList() << inputMask, QDir::Files);

    for (const QString &fileName : files) {
        modifyFile(dir.filePath(fileName));
    }
}

void MainWindow::modifyFile(const QString &filePath) {
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл: " + filePath);
        return;
    }

    QByteArray data = file.readAll();
    file.close();

    for (int i = 0; i < data.size(); ++i) {
        data[i] = data[i] ^ xorValue[i % xorValue.size()];
    }

    QString outputFileName = QFileInfo(file).fileName();
    if (!overwriteFiles) {
        int counter = 1;
        while (QFile::exists(outputPath + "/" + outputFileName)) {
            outputFileName = QFileInfo(file).baseName() + "_" + QString::number(counter++) + "." + QFileInfo(file).suffix();
        }
    }

    QFile outputFile(outputPath + "/" + outputFileName);
    if (!outputFile.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось записать файл: " + outputFile.fileName());
        return;
    }

    outputFile.write(data);
    outputFile.close();

    if (deleteAfterProcessing) {
        file.remove();
    }

    ui->textBrowserLog->append("Обработан файл: " + filePath + " -> " + outputFile.fileName());
}

/*
void MainWindow::on_LineEditXorValue_textChanged(const QString &arg1)
{
    QRegExp hexRegex("^[0-9A-Fa-f]{0,16}$");

    if (!hexRegex.exactMatch(arg1)) {
        QString sanitized = arg1;
        sanitized.remove(QRegExp("[^0-9A-Fa-f]"));
        if (sanitized.length() > 16) {
            sanitized = sanitized.left(16);
        }
        ui->lineEditXorValue->setText(sanitized);
    }
}
*/
