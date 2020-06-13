#include "browse_memories.h"
#include "ui_browse_memories.h"

browse_memories::browse_memories(Memory_Bank *m, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::browse_memories),
    bank(m),
    index(0)
{
    ui->setupUi(this);
    display_memory();
}

browse_memories::~browse_memories()
{
    delete ui;
}

void browse_memories::display_memory(){
    Memory mem = bank->get_memory(index);
    QImage img = mem.getImage();
    QString txt = mem.getText();
    img = img.scaledToWidth(ui->img_display->width(), Qt::SmoothTransformation);
    ui->img_display->setPixmap(QPixmap::fromImage(img));
    ui->text_display->setText(txt);
}

void browse_memories::on_prev_clicked()
{
    if(index == 0){ //if at start of album
        index = bank->get_size() - 1; //loop to end
    }
    else{
        index--;
    }
    display_memory();
}

void browse_memories::on_next_clicked()
{
    if(index == bank->get_size() - 1){ //if at end of album
        index = 0; //loop to start
    }
    else{
        index++;
    }
    display_memory();
}
