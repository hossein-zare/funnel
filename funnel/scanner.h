#pragma once

#include <string>
#include <fstream>
#include "parser.h"

class Scanner {
public:
    Scanner(std::string* path);

    int getLine() const;
    const std::string* getPath() const;

    void scan(Parser& parser);

private:
    int line = 0;
    std::string* path;
};