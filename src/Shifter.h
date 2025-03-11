#ifndef CLASS_SHIFTER_H
#define CLASS_SHIFTER_H

/**
 * @brief Generic shifter type class.
 *
 * This class serves as a generic shifterType
 * We can use inheritance here to represent different shifter
 * types (automatic, manual 3 speed, manual 4 speed, etc).
 */
class ShifterType {
  public:
    void virtual shiftUp();
    void virtual shiftDown();
    string virtual getGear();
}

class enum gear {}
#endif