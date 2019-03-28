#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "UsersDialog/usersdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionUsers_triggered()
{
    UsersDialog *userDlg = new UsersDialog();
    userDlg->exec();
}
