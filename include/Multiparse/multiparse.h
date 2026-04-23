#pragma once 
#include <string>

class Multiparse{
    public:
    virtual ~Multiparse() = default;
    virtual std::string logentry() = 0;
};