# CMakeList.txt : CMake project for funnel, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (funnel "funnel.cpp" "funnel.h" "net/http-server.h" "net/http-server.cpp")

# TODO: Add tests and install targets if needed.
