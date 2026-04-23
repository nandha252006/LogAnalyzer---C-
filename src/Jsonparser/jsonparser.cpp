#include "Multiparse/jsonparser.h"

void Jsonparser::jsonparse(std::ifstream &file){
    std::string line;
    std::ofstream out_file("C:/Users/Admin/igx@cipher/program/CPP/LogAnalyzer/logs/JsonRegex.log");
    while(std::getline(file,line)){
        std::regex pattern(R"regex(\{"timestamp":"([^"]+),"level":"([^"]+)","source":"([^"]+)","message":"([^"]+)"\})regex");
        std::smatch match;
        out_file << match[0] << " " << match[1] << " " << match[2] << " " << match[3] << std::endl;

    }
}