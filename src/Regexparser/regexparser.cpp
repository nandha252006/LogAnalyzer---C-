#include "Logparser/Regexparser.h"

bool Regexparser::parseline(const std::string& line){
    std::regex pattern("Error" , std::regex::icase);
    if(std::regex_search(line,pattern)){
        return true;
    }
    return false;
}