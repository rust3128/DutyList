#include "usersdialog.h"
#include "ui_usersdialog.h"

UsersDialog::UsersDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UsersDialog)
{
    ui->setupUi(this);
}

UsersDialog::~UsersDialog()
{
    delete ui;
}
