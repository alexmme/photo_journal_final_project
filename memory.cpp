#include "memory.h"

Memory::Memory() : img(QImage()), filename(QString()), text(QString()) {}

Memory::Memory(QImage image, QString fname, QString mem_text) : img(image), filename(fname), text(mem_text) {}

QImage Memory::getImage(){
    return img;
}

QString Memory::getFilename(){
    return filename;
}

QString Memory::getText(){
    return text;
}

