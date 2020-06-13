#include "browse_memories.h"
#include "ui_browse_memories.h"

browse_memories::browse_memories(Memory_Bank *m, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::browse_memories),
    bank(m)
{
    ui->setupUi(this);
}

browse_memories::~browse_memories()
{
    delete ui;
}
