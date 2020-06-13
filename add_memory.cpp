#include "add_memory.h"
#include "ui_add_memory.h"
#include "memory_bank.h"


add_memory::add_memory(Memory_Bank *m, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_memory),
    img(QImage()),
    bank(m),
    filename(QString())
{
    ui->setupUi(this);
}

add_memory::~add_memory()
{
    delete ui;
}

void add_memory::on_choose_image_clicked()
{
    filename = QFileDialog::getOpenFileName(this, "Choose", "", "Images (*.png *.jpg *.jpeg)");
    if(QString::compare(filename, QString()) != 0){ //if user actually provided filename
        QImage image;
        bool loaded = image.load(filename);
        if(loaded){
            image = image.scaledToWidth(ui->img_display->width(), Qt::SmoothTransformation);
            ui->img_display->setPixmap(QPixmap::fromImage(image));
            img = image;
        }
    }
}

void add_memory::on_save_mem_clicked()
{
    QString text = ui->mem_text->toPlainText();
    Memory mem(img, filename, text);
    bank->log_memory(mem);
    close();
}
