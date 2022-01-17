#include "funnel.h"

int main()
{
    std::string path = "./code.fl";

    Scanner s(&path);

    std::cout << s.getLine();

    return 0;
}