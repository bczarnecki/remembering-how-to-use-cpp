#ifndef TRAINCAR_H
#define TRAINCAR_H

class TrainCar
{
private:
    enum class BrakeStatus {kBrakeNotEngaged, kBrakeEngaged};
    TrainCar* previous_car_;
    TrainCar* next_car_;
    BrakeStatus brake_status_;
public:
    TrainCar();
    int ActivateBrake();
    int DeactivateBrake();
    int AttachCar(TrainCar*);
    virtual ~TrainCar();
};

#endif
