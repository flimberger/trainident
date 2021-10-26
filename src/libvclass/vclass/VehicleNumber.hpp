#ifndef VCLASS_VEHICLE_NUMBER_HPP_
#define VCLASS_VEHICLE_NUMBER_HPP_

#include <stdint.h>

#include <vclass/SerialNumber.hpp>
#include <vclass/VehicleClass.hpp>

namespace vclass {

class VehicleNumber {
public:
    explicit VehicleNumber(VehicleClass vClass, SerialNumber serial);

    VehicleClass getVehicleClass() const;
    SerialNumber getSerialNumber() const;
    uint8_t getCheckDigit() const;

    std::string toString() const;

private:
    VehicleClass m_class;
    SerialNumber m_serial;
    uint8_t m_checkDigit;
};

} // namespace vclass

#endif // VCLASS_VEHICLE_NUMBER_HPP_
