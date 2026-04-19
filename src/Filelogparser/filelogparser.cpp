#include "Logparser/Filelogparser.h"
#include <stdexcept>


Filelogparser::Filelogparser(const std::string& filename){
    file.open(filename);
    if (!file.is_open()){
        throw std::runtime_error("Failed to open file");
    }
}

bool Filelogparser::getNextline(std::string& line){
    if (std::getline(file,line)){
        return true;
    }
    else{
        return false;
    }
}