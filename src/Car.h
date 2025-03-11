#ifndef CLASS_CAR_H
#define CLASS_CAR_H
/**
 * @brief the car class represents a generic vehicle.
 *        from this we can create specific make-models
 */
class Vehicle {
  public:
  // Controls
  ToggleSwitch ignition;
  ToggleSwitch lights;
  ToggleSwitch highBeams;
  VariableSwitch windshieldWiper;
  TurnSignalSwitch turnSignal;

  SteeringWheel steer;
  Pedal accelerator;
  Pedal brake;

  private:
    MessageQueueWrapper *messageQueue;

    Vehicle();
    ~Vehicle();
}
#endif