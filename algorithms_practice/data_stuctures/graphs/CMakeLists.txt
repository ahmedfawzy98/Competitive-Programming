cmake_minimum_required(VERSION 3.0.0)
project(graphs VERSION 0.1.0)

include(CTest)
enable_testing()
file(GLOB source_files
    "headers/*.h"
    "src/*.cpp"
)

add_executable(graphs ${source_files})
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
