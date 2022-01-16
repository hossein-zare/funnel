#include "http-server.h"

std::string get_http_response_message(const int* code) {
    switch (*code) {
    case 200:
        return "OK";
    case 201:
        return "Created";

    default:
        return "500";
    }

    return "Internal Server Error";
}