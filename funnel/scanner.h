#pragma once

#include <string>
#include <fstream>

class Scanner {
public:
    Scanner(const std::string* path);

    int getLine() const;
    const std::string* getPath() const;

private:
    int line = 0;
    const std::string* path;
};