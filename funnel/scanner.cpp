#include "scanner.h"

Scanner::Scanner(std::string* path) {
    this->path = path;
}

int Scanner::getLine() const {
    return this->line;
}

const std::string* Scanner::getPath() const {
    return this->path;
}

void Scanner::scan(Parser& parser) {
    std::ifstream File(*this->getPath());

    if (File.fail()) {
        std::cout << *this->getPath() << ": " << std::strerror(errno) << std::endl;
    }

    std::string data;

    while (std::getline(File, data)) {
        this->line++;
        parser.parse(&data, this->getLine());
    }

    File.close();
}