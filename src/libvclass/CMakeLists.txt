project(libvclass CXX)

add_library(vclass
    SerialNumber.cpp
    VehicleNumber.cpp
    VehicleClass.cpp)
target_include_directories(vclass
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(vclass
    PUBLIC luhn)
