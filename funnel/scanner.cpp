#include "scanner.h"

Scanner::Scanner(const std::string* path) {
    this->path = path;
}

int Scanner::getLine() const {
    return this->line;
}

const std::string* Scanner::getPath() const {
    return this->path;
}