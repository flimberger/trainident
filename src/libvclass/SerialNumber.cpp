#include "vclass/SerialNumber.hpp"

namespace vclass {

SerialNumber::SerialNumber(uint16_t num)
    : m_data{static_cast<uint16_t>(num % 1000)}
{}

int SerialNumber::asInt() const
{
    return static_cast<int>(m_data);
}

} // namespace vclass
