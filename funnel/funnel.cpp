#include "funnel.h"

int main()
{
    std::string path = "./test/test.fl";

    Scanner s(&path);
    Parser p;

    s.scan(p);

    return 0;
}