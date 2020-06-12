#ifndef BROWSE_MEMORIES_H
#define BROWSE_MEMORIES_H

#include <QDialog>

namespace Ui {
class browse_memories;
}

class browse_memories : public QDialog
{
    Q_OBJECT

public:
    explicit browse_memories(QWidget *parent = nullptr);
    ~browse_memories();

private:
    Ui::browse_memories *ui;
};

#endif // BROWSE_MEMORIES_H
