#ifndef LUHN_CHECKSUM_HPP_
#define LUHN_CHECKSUM_HPP_

#include <stdint.h>

namespace luhn {
namespace detail {

class Accumulator {
public:
    void addDigit(uint8_t digit);

    uint8_t calculate() const;

private:
    uint32_t m_sum{0};
    bool m_double{false};
};

} // namespace detail

/**
 * Calculate the check digit for the given sequence.
 */
template <typename Iterator>
uint8_t calculateCheckDigit(Iterator first, Iterator last)
{
    detail::Accumulator acc{};
    for (; first != last; ++first) {
        acc.addDigit(*first);
    }
    return acc.calculate();
}

} // namespace luhn

#endif // LUHN_CHECKSUM_HPP_
