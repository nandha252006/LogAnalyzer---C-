#pragma once
#include <string>
#include <fstream>

class Logparser{
    public:
    virtual bool getNextline(std::string& line)=0;
    virtual ~Logparser() = default;
    
};