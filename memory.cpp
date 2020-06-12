#include "memory.h"

Memory::Memory() : img(QImage()), text(QString()) {}

Memory::Memory(QImage image, QString mem_text) : img(image), text(mem_text) {}

QImage Memory::getImage(){
    return img;
}

QString Memory::getText(){
    return text;
}
