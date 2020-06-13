#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    bank(std::vector<Memory>())
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
    add_memory mem_window;
    mem_window.setModal(true);
    hide(); //hide main window when adding memory
    mem_window.exec();
}

void MainWindow::on_browse_button_clicked()
{
    browse_memories browse_window;
    browse_window.setModal(true);
    hide(); //hide main window when adding memory
    browse_window.exec();
}
