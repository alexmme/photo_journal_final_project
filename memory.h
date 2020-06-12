#ifndef MEMORY_H
#define MEMORY_H

#include <QImage>
#include <QString>

class Memory
{
private:
    QImage img;
    QString text;
public:
    Memory();
    Memory(QImage, QString);
    QImage getImage();
    QString getText();
};

#endif // MEMORY_H
