#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMouseTracking(true);

    input_labPlayer << ui->input1_labPlayer << ui->input2_labPlayer << ui->input3_labPlayer << ui->input4_labPlayer << ui->input5_labPlayer << ui->input6_labPlayer;
    for(int i=0;i<input_labPlayer.size() ;i++)
    {
    connect(input_labPlayer.at(i), SIGNAL(singleClicked()), this, SLOT(input_Clicked()));
    connect(input_labPlayer.at(i), SIGNAL(doubleClicked()), this, SLOT(input_DbClicked()));
    }
    connect(ui->pgm_labPlayer, SIGNAL(doubleClicked()), this, SLOT(pvw_pgmswitch()));
    connect(ui->pvw_labPlayer, SIGNAL(doubleClicked()), this, SLOT(pvw_pgmswitch()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::input_Clicked()
{
    qDebug("pvw");
}

void MainWindow::input_DbClicked()
{
    qDebug("pgm");
}

void MainWindow::pvw_pgmswitch()
{
    qDebug("Switch");
}
