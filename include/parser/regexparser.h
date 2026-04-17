#ifndef PARSER_H
#define PARSER_H

#include "parser/parser.h"
class Regexparser: public Parser{
    public:
    std::string parseline(const std::string& line) override;
};
#endif 