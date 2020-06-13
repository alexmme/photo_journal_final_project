#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "add_memory.h"
#include "browse_memories.h"
#include "memory_bank.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void add_mem_to_bank(Memory);
    Memory get_mem_from_bank(int);

private slots:
    void on_new_mem_button_clicked();

    void on_browse_button_clicked();

private:
    Ui::MainWindow *ui;
    Memory_Bank *bank;
};
#endif // MAINWINDOW_H
