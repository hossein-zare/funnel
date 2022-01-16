#include "http-server.h"

string get_http_response_message(int* code) {
	switch (*code) {
		case 200: return "OK";
		case 201: return "Created";
		default:
			return 500;
	}

	return "Internal server error";
}