#ifndef __PARSER_H_
#define __PARSER_H_

#include <iostream>
#include <string>
#include <vector>
#include <regex>

struct Termo{
    double coef;
    int exp;
    std::string var;
};

class Parser {
public:
    static void interpretar(const std::string& input);
    static std::vector<Termo> parsePoli(const std::string& input);
};

#endif