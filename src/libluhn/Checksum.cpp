#include "luhn/Checksum.hpp"

namespace luhn {
namespace detail {

void Accumulator::addDigit(uint8_t digit)
{
    if (m_double) {
        digit *= 2;
    }
    if (digit > 9) {
        m_sum += digit % 10;
        m_sum += digit / 10;
    } else {
        m_sum += digit;
    }
    m_double = !m_double;
}

uint8_t Accumulator::calculate() const
{
    int mod = m_sum % 10;
    return static_cast<uint8_t>(10 - mod);
}

} // namespace detail
} // namespace luhn
