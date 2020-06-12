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

void add_memory::on_choose_image_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Choose", "", "Images (*.png, *.jpg, *.jpeg)");
    if(QString::compare(filename, QString()) != 0){ //if user actually provided filename
        QImage img;
        bool loaded = img.load(filename);
        if(loaded){
            img = img.scaledToWidth(ui->img_display->width(), Qt::SmoothTransformation);
            ui->img_display->setPixmap(QPixmap::fromImage(img));
        }
    }
}
