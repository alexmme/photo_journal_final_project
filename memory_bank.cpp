#include "memory_bank.h"
#include <fstream>

Memory_Bank::Memory_Bank() : mems(std::vector<Memory>()) {}

void Memory_Bank::log_memory(Memory m){
    mems.push_back(m);
}

Memory Memory_Bank::get_memory(int index){
    return mems[index];
}

int Memory_Bank::get_size(){
    return mems.size();
}

void Memory_Bank::load_contents(){

}

void Memory_Bank::save_contents(){
    std::ofstream out_img_file("./memory_data/img_filenames.txt");
    std::ofstream out_text_file("./memory_data/captions.txt");
    for(int i=0; i<mems.size(); i++){
        Memory m = mems[i];
        out_img_file >> m.getFilename() >> '\n';
        out_text_file >> m.getText() >> '\n';
    }
}
