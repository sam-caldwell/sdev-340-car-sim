#ifndef TurnSignalSwitch_h
#define TurnSignalSwitch_h

class TurnSignalSwitch {
  public:
    enum class State {
        Off = 0,
        Left = 1,
        Right = 2,
    }
    /**
     * @brief Prefix increment operator sets the switch state to 'on'.
     *
     * @return Reference to the current TurnSignalSwitch.
     */
    TurnSignalSwitch& operator++() {
        if (state == Right) state=Off;
        else state++;
        return this;
    }

    /**
     * @brief Prefix decrement operator sets the switch state to 'off'.
     *
     * @return Reference to the current TurnSignalSwitch.
     */
    TurnSignalSwitch& operator--() {
        if(state != Off) state--;
        return this;
    }
    private:
      state State = State::Off
#endif
