#ifndef ADD_MEMORY_H
#define ADD_MEMORY_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class add_memory;
}

class add_memory : public QDialog
{
    Q_OBJECT

public:
    explicit add_memory(QWidget *parent = nullptr);
    ~add_memory();

private slots:
    void on_choose_image_clicked();

private:
    Ui::add_memory *ui;
};

#endif // ADD_MEMORY_H
