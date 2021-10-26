#include "vclass/VehicleClass.hpp"

#include <stdexcept>

namespace vclass {

VehicleClass::VehicleClass(ClassType type, uint8_t id)
    : m_type{type}, m_id{static_cast<uint8_t>(id % 100)} 
{}

ClassType VehicleClass::getType() const
{
    return m_type;
}

int VehicleClass::asInt() const
{
    return static_cast<int>(m_type) * 100 + m_id;
}

} // namespace vclass
