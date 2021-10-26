#include "vclass/VehicleNumber.hpp"

#include <sstream>
#include <vector>

#include <luhn/Checksum.hpp>

namespace vclass {

VehicleNumber::VehicleNumber(VehicleClass vClass, SerialNumber serial)
        : m_class{vClass}, m_serial{serial}
{
    std::vector<uint8_t> digits{};
    int classDigits = vClass.asInt();
    digits.push_back(classDigits / 100);
    classDigits = classDigits % 100;
    digits.push_back(classDigits / 10);
    classDigits = classDigits % 10;
    digits.push_back(classDigits);
    int serialDigits = serial.asInt();
    digits.push_back(serialDigits / 100);
    serialDigits = serialDigits % 100;
    digits.push_back(serialDigits / 10);
    serialDigits = serialDigits % 10;
    digits.push_back(serialDigits);
    m_checkDigit = luhn::calculateCheckDigit(std::cbegin(digits), std::cend(digits));
}

VehicleClass VehicleNumber::getVehicleClass() const
{
    return m_class;
}

SerialNumber VehicleNumber::getSerialNumber() const
{
    return m_serial;
}

uint8_t VehicleNumber::getCheckDigit() const
{
    return m_checkDigit;
}

std::string VehicleNumber::toString() const
{
    std::stringstream str{};
    str << m_class.asInt() << ' ' << m_serial.asInt() << '-' << static_cast<int>(m_checkDigit);
    return str.str();
}

} // namespace vclass
