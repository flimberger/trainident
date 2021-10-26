#ifndef LIBVCLASS_VEHICLE_TYPE_HPP_
#define LIBVCLASS_VEHICLE_TYPE_HPP_

#include <stdint.h>

#include <array>

namespace vclass {

enum class ClassType {
    SteamLocomotive = 0,
    ElectricLocomotive = 1,
    DieselLocomotive = 2,
    SmallLocomotive = 3,
    ElectricMultipleUnit = 4,
    BatteryMultipleUnit = 5,
    DieselMultipleUnit = 6,
    RailbusAndService = 7,
    ElectricCabCar = 8,
    DieselCabCar = 9,
};

class VehicleClass {
public:
    explicit VehicleClass(ClassType type, uint8_t id);

    ClassType getType() const;

    int asInt() const;

private:
    ClassType m_type;
    uint8_t m_id;
};

} // namespace vclass

#endif // LIBVCLASS_VEHICLE_TYPE_HPP_
