cmake_minimum_required(VERSION 3.16)

LIST(PREPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

project(trainids CXX)

include(compiler)

add_subdirectory(src)
