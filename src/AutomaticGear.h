#ifndef AUTOMATIC_GEAR_H
#define AUTOMATIC_GEAR_H
#include "BaseGear.h"
#include "string"
/**
 * @brief Class representing automatic transmission gears.
 */
class AutomaticGear : public BaseGear {
public:
    /**
     * @brief Enumeration for automatic transmission states.
     */
    enum class State {
        Park,    ///< Park gear.
        Reverse, ///< Reverse gear.
        Neutral, ///< Neutral gear.
        Drive    ///< Drive gear.
    };

    /**
     * @brief Construct a new AutomaticGear object.
     *
     * @param s Initial gear state.
     */
    AutomaticGear(State s) : state(s) {}

    /**
     * @brief Get a string representation of the gear.
     *
     * @return const string representing the gear state.
     */
    const string toString() const override {
        switch(state) {
            case State::Park: return "Park";
            case State::Reverse: return "Reverse";
            case State::Neutral: return "Neutral";
            case State::Drive: return "Drive";
            default: return "Unknown";
        }
    }

    /**
      * @brief Shift up to the next gear.
      *
      * Does not change state if already at the highest gear.
      */
    void shiftUp() override {
        if(state == State::Reverse) {
            // Already at highest gear; do nothing.
            return;
        }
        // Convert enum to underlying integer, increment, and cast back.
        state = static_cast<State>(static_cast<int>(state) + 1);
    }

    /**
     * @brief Shift down to the previous gear.
     *
     * Does not change state if already at the lowest gear.
     */
    void shiftDown() override {
        if(state == State::Neutral) {
            // Already at lowest gear; do nothing.
            return;
        }
        state = static_cast<State>(static_cast<int>(state) - 1);
    }

    /**
     *  @brief returns the gear ratio for the current gear
     *         shifter setting which can be used to calculate
     *         vehicle velocity.
     *  @return double
     */
    virtual double getRatio() const {
        switch(state) {
            case Park: return 0.00;
            case Neutral: return 0.0;
            case Drive: return 1.0;
            case Reverse: return -0.5;
            default: return 0.0;
        }
    };

private:
    State state;
};

#endif