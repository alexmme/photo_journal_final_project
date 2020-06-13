#ifndef MEMORY_H
#define MEMORY_H

#include <QImage>
#include <QString>

class Memory
{
private:
    QImage img;
    QString filename;
    QString text;
public:
    Memory();
    Memory(QImage, QString, QString);
    QImage getImage();
    QString getFilename();
    QString getText();
};

#endif // MEMORY_H
