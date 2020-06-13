#include "memory_bank.h"

Memory_Bank::Memory_Bank() : mems(std::vector<Memory>()) {}

void Memory_Bank::log_memory(Memory m){
    mems.push_back(m);
}

Memory Memory_Bank::get_memory(int index){
    return mems[index];
}
