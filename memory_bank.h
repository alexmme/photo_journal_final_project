#ifndef MEMORY_BANK_H
#define MEMORY_BANK_H

#include <vector>
#include "memory.h"

class Memory_Bank
{
private:
    std::vector<Memory> mems;
public:
    Memory_Bank();
    void log_memory(Memory);
    Memory get_memory(int);
    int get_size();
};

#endif // MEMORY_BANK_H
