#include "Logparser/Filelogparser.h"
#include "Logparser/logparser.h"
#include <iostream>


int main(int argc , char* argv[]){
    if(argc<2){
        std::cout<< "Failed" << "\t" << "Format : ./main <logfile>" << std::endl; 
    }
    Logparser *files = new Filelogparser(argv[1]);
    std::string line;
    while(files->getNextline(line)){
        std::cout << line << std::endl;
    }
    return 0;
}


