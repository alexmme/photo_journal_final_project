#include "add_memory.h"
#include "ui_add_memory.h"

add_memory::add_memory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_memory)
{
    ui->setupUi(this);
}

add_memory::~add_memory()
{
    delete ui;
}
