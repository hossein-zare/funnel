#include "parser.h"

void Parser::parse(const std::string* content, const int& line) {
    std::cout << line << ". " << * content << std::endl;
}