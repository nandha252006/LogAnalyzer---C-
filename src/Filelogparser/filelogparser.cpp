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

void Filelogparser::output(const std::string& line){
    regex_ouput.open("C:/Users/Admin/igx@cipher/program/CPP/LogAnalyzer/logs/Output.log",std::ios::app);
    if(!regex_ouput){
        throw std::runtime_error("Failed to create file");
    }
    regex_ouput << line << std::endl;
    regex_ouput.close();
}