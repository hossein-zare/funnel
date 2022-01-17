#include "funnel.h"

int main()
{
    std::string path = "./code.fl";

    Scanner s(&path);

    std::cout << *s.getPath();

    return 0;
}