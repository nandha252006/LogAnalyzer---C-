#pragma once
#include <string>
#include <fstream>


class Logparser{
    public:
    virtual bool getNextline(std::string& line){
        return false;
    }
    virtual bool parseline(const std::string& line){
        return "";
    };
    virtual void output(const std::string& line) = 0 ;
    virtual ~Logparser() = default;
    
};