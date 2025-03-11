#ifndef CLASS_TOGGLE_SWITCH_H
#define CLASS_TOGGLE_SWITCH_H
#include "string"

class ToggleSwitch {
public:
    /**
     * @brief Prefix increment operator sets the switch state to 'on'.
     *
     * @return Reference to the current ToggleSwitch.
     */
    ToggleSwitch& operator++() {
        state = !state;
        return this;
    }

    /**
     * @brief Prefix decrement operator sets the switch state to 'off'.
     *
     * @return Reference to the current ToggleSwitch.
     */
    ToggleSwitch& operator--() {
        state = !state;
        return this;
    }

    /**
     * @brief return string representation of state
     * @return string
     */
    const string toString() const {
        switch (state) {
            case Off: return "Off";
            case Low: return "On";
            default: return "unknown";
        }
    }
private:

    bool state
};

#endif