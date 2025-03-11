#ifndef CLASS_VARIABLE_SWITCH_H
#define CLASS_VARIABLE_SWITCH_H
#include "string"

class VariableSwitch {
public:
    enum class State {
        Off,
        Low,
        Medium,
        High
    };
    /**
     * @brief increment the variable state
     *
     * @return Reference to the current VariableSwitch.
     */
    VariableSwitch& operator++() {
      if (state != High) state++;
      return this;
    }

    /**
     * @brief decrement the variable state
     *
     * @return Reference to the current VariableSwitch.
     */
    VariableSwitch& operator--() {
      if (state != Off) state--;
      return this;
    }

    const string toString() const {
      switch (state) {
        case Off: return "Off";
        case Low: return "Low";
        case Medium: return "Medium";
        case High: return "High";
        default: return "unknown";
      }
    }
private:
    State state = State::Off;
};

#endif