#include "Logparser/Filelogparser.h"
#include "Logparser/logparser.h"
#include "Logparser/Regexparser.h"
#include "multiparse/multiparse.h"
#include "multiparse/jsonparser.h"
#include <iostream>


int main(int argc , char* argv[]){
    // if(argc<2){
    //     std::cout<< "Failed" << "\t" << "Format : ./main <logfile>" << std::endl; 
    // }
    // Logparser *files = new Filelogparser(argv[1]);
    // Regexparser *reg;
    // std::string line;
    // while(files->getNextline(line)){
    //     if(reg->parseline(line)){
    //         files->output(line);
    //     }
    //     std::cout << line << std::endl;
    // }
    Jsonparser json;
    std::ifstream file("C:/Users/Admin/igx@cipher/program/CPP/LogAnalyzer/logs/JsonRegex.log");
    json.jsonparse(file);
    return 0;
}

