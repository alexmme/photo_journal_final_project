#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "add_memory.h"
#include "browse_memories.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_new_mem_button_clicked();

    void on_browse_button_clicked();

private:
    Ui::MainWindow *ui;
    add_memory *mem_window;
    browse_memories *browse_window;
};
#endif // MAINWINDOW_H
