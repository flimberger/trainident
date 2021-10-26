project(libluhn CXX)

add_library(luhn
    Checksum.cpp)
target_include_directories(luhn PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
