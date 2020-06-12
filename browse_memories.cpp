#include "browse_memories.h"
#include "ui_browse_memories.h"

browse_memories::browse_memories(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::browse_memories)
{
    ui->setupUi(this);
}

browse_memories::~browse_memories()
{
    delete ui;
}
