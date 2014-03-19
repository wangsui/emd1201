#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "labevent.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void input_Clicked();
    void input_DbClicked();
    void pvw_pgmswitch();

private:
    Ui::MainWindow *ui;
public:
    QList<labevent *>input_labPlayer;
};

#endif // MAINWINDOW_H
