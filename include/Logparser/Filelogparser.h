#pragma once
#include "logparser.h"

class Filelogparser : public Logparser{
    private:
    std::ifstream file;
    std::ofstream regex_ouput;
    public:
    Filelogparser(const std::string& filename);
    bool getNextline(std::string& line ) override;
    void output(const std::string& line) override;
};