#ifndef BROWSE_MEMORIES_H
#define BROWSE_MEMORIES_H

#include <QDialog>
#include "memory_bank.h"

namespace Ui {
class browse_memories;
}

class browse_memories : public QDialog
{
    Q_OBJECT
public:
    explicit browse_memories(Memory_Bank*, QWidget *parent = nullptr);
    ~browse_memories();

private:
    Ui::browse_memories *ui;
    Memory_Bank *bank;
};

#endif // BROWSE_MEMORIES_H
