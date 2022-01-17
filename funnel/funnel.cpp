#include "funnel.h"

int main()
{
    int code = 200;
  
    std::string path = "./code.fl";

    Scanner s(&path);

    std::cout << *s.path;

    return 0;
}