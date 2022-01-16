#include "funnel.h"
#include "net/http-server.h"

int main()
{
    int code = 200;
  
    std::cout << get_http_response_message(&code);

    return 0;
}
