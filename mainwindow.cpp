#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_new_mem_button_clicked()
{
    hide(); //hide main window when adding memory
    mem_window = new add_memory();
    mem_window->show();
}

void MainWindow::on_browse_button_clicked()
{
    hide(); //hide main window when adding memory
    browse_window = new browse_memories();
    browse_window->show();
}
