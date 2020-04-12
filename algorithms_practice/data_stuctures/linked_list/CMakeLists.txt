cmake_minimum_required(VERSION 3.0.0)
project(linked_list VERSION 0.1.0)

include(CTest)
enable_testing()
file(GLOB linked_list_src
    "headers/*.h"
    "src/*.cpp"
)

add_executable(linked_list ${linked_list_src})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
