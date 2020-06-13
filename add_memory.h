#ifndef ADD_MEMORY_H
#define ADD_MEMORY_H

#include <QDialog>
#include <QFileDialog>
#include "memory_bank.h"

namespace Ui {
class add_memory;
}

class add_memory : public QDialog
{
    Q_OBJECT

public:
    explicit add_memory(Memory_Bank*, QWidget *parent = nullptr);
    ~add_memory();

private slots:
    void on_choose_image_clicked();

    void on_save_mem_clicked();

private:
    Ui::add_memory *ui;
    QImage img;
    Memory_Bank *bank;
};

#endif // ADD_MEMORY_H
