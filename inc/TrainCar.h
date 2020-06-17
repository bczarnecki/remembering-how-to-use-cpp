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
    enum class ErrorStatus
    {
        kNoError = 0,
        kBrakeEngageError,
        kBrakeDisengageError,
        kAttachCarError
    };
    TrainCar();
    ErrorStatus ActivateBrake();
    ErrorStatus DeactivateBrake();
    ErrorStatus AttachCar(TrainCar*);
    virtual ~TrainCar();
};

#endif
