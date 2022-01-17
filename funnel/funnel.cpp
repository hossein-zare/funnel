#include "funnel.h"

using namespace std;

int main()
{
    std::string path = "./test/test.fl";

    Scanner s(&path);
    Parser p;

    s.scan(p);

    return 0;
}