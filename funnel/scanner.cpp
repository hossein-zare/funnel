#include "scanner.h"

Scanner::Scanner(const std::string* path) {
    this->path = path;
}

int Scanner::getLine() {
    return this->line;
}