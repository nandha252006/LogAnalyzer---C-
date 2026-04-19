#ifndef PARSER_H
#define PARSER_H

#include "Regexparser/parser.h"
class Regexparser: public Parser{
    public:
    std::string parseline(const std::string& line) override;
};
#endif 