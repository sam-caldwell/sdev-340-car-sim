#ifndef CLASS_TRANSMISSION_GEAR_H
#define CLASS_TRANSMISSION_GEAR_H

#include "Shifter.h"

/**
 * @brief Class representing a generic car transmission.
 *
 * This class serves as a base for different types of transmissions,
 * such as automatic and manual. It is designed to be extended or
 * templated over time to support various transmission types.
 */
template <ShifterType shifter>
class Transmission {
public:
    /**
     * @brief Constructs a Transmission.
     */
    Transmission() {}

    /**
     * @brief Shifts the transmission up by one gear.
     */
    void shiftUp() {
        gear.shiftUp();
    }

    /**
     * @brief Shifts the transmission down by one gear.
     */
    void shiftDown() {
        gear.shiftDown();
    }

    /**
     * @brief Retrieves the current gear.
     *
     * @return The current gear as an integer.
     */
    int getCurrentGear() const {
        return currentGear;
    }

protected:
    BaseGear gear;
};

#endif