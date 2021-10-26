#include <iostream>

#include <vclass/SerialNumber.hpp>
#include <vclass/VehicleClass.hpp>
#include <vclass/VehicleNumber.hpp>

int main(int argc, char *argv[]) {
    std::cout << "tident version 0.1\n";

    vclass::VehicleNumber id{vclass::VehicleClass{vclass::ClassType::ElectricLocomotive, 20}, vclass::SerialNumber{123}};
    std::cout << "id: " << id.toString() << '\n';
}
