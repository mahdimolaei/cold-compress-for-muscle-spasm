#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QFile"
#include "QtDebug"
#include "QJsonDocument"
#include "QJsonObject"
#include <QTimer>
#include <QPushButton>
#include <QVBoxLayout>
//////
#include <QUdpSocket>

namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int timeremain=0;
    bool digitflag=1;
    bool auto_manual_run;
    int stepstatus=0;
    void SeyHello();
private:
    QUdpSocket *socket;
    //Ui::myudp *ui;
public slots:
    void readyRead();
public slots:
    void timeReduce();
    void stepsRuning();
private slots:
    void on_getvaluesbutton_clicked();
    void gettingValue();
    void on_startbutton_clicked();
    void counter1();
    void on_endbutton_clicked();

    //void on_pushButton_clicked();

    void on_nextStep_clicked();

    void on_SendJsonButton_clicked();

private:

    Ui::MainWindow *ui;
    QTimer *timer;
};

#endif // MAINWINDOW_H
