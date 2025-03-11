#ifndef CLASS_BASE_GEAR_H
#define CLASS_BASE_GEAR_H
#include "string"
/**
 * @brief Base class for transmission gear behavior.
 */
class BaseGear {
public:
    /**
     * @brief Get a string representation of the gear.
     *
     * @return const char* representing the gear state.
     */
    virtual const string toString() const;
    /**
     *  @brief shift up to the next gear
     */
    virtual shiftUp() =0;
    /**
     *  @brief shift down the next gear
     */
    virtual shiftDown() =0;
    /**
     *  @brief returns the gear ratio for the current gear
     *         shifter setting which can be used to calculate
     *         vehicle velocity.
     *  @return double
     */
    virtual double getRatio() const = 0.0;
    /**
     *  @brief destructor
     */
    virtual ~BaseGear() = default;
};

#endif
