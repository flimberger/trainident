#ifndef VCLASS_SERIAL_NUMBER_HPP_
#define VCLASS_SERIAL_NUMBER_HPP_

#include <stdint.h>

namespace vclass {

class SerialNumber {
public:
    explicit SerialNumber(uint16_t num);

    int asInt() const;

private:
    uint16_t m_data;
};

} // namespace vclass

#endif // VCLASS_SERIAL_NUMBER_HPP_
