#ifndef MANUAL4_SPEED_GEAR_H
#define MANUAL4_SPEED_GEAR_H
#include "BaseGear.h"
#include "string"
/**
 * @brief Class representing manual transmission gears with 4-speeds.
 */
class Manual4SpeedGear : public BaseGear {
public:
    /**
     * @brief Enumeration for manual transmission states.
     */
    enum class State {
        Neutral,
        First,
        Second,
        Third,
        Fourth,
        Reverse
    };

    /**
     * @brief Construct a new Manual4SpeedGear object.
     *
     * @param s Initial gear state.
     */
    Manual4SpeedGear(State s) : state(s) {}

    /**
     * @brief Get a string representation of the gear.
     *
     * @return const string representing the gear state.
     */
    const string toString() const override {
        switch(state) {
            case Neutral: return "Neutral";
            case First: return "First";
            case Second: return "Second";
            case Third: return "Third";
            case Fourth: return "Fourth";
            case Reverse: return "Reverse";
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
            case Neutral: return 0.0;
            case First: return 0.01;
            case Second: return 0.5;
            case Third: return 0.75;
            case Fourth: return 1.0;
            case Reverse: return -0.5;
            default: return 0.0;
        }
    };

private:
    State state;
};

#endif