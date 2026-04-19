#pragma once
#include "logparser.h"

class Filelogparser : public Logparser{
    private:
    std::ifstream file;
    public:
    Filelogparser(const std::string& filename);
    bool getNextline(std::string& line ) override;
};