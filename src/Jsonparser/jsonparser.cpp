#include "Multiparse/jsonparser.h"

void Jsonparser::jsonparse(std::ifstream &file){
    std::string line;
    std::ofstream out_file("C:/Users/Admin/Desktop/LogAnalyzer---C-/logs/Jsonparse_out.log");
    while(std::getline(file,line)){
        std::regex pattern(R"regex(\{"timestamp":"([^"]+)","level":"([^"]+)","source":"([^"]+)","message":"([^"]+)"\})regex");
        std::smatch match;
        if(std::regex_search(line,match,pattern)){
            out_file << match[1] << " " << match[2] << " " << match[3] << " " << match[4] << std::endl;
        }
    }
}