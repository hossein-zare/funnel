#pragma once

#include <string>
#include <fstream>

class Scanner {
public:
    int line = 0;
    const std::string* path;

    Scanner(const std::string* path);

    int getLine();
};