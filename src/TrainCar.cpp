#include <iostream>
#include "TrainCar.h"

// Cosntructor
TrainCar::TrainCar()
{
    previous_car_ = nullptr;
    next_car_ = nullptr;
    brake_status_ = BrakeStatus::kBrakeEngaged;
}

// Adds car to next_car_
TrainCar::ErrorStatus TrainCar::AttachCar(TrainCar* tc)
{
    ErrorStatus errorCode;
    if (nullptr != tc)
    {
        next_car_ = tc;
        tc->previous_car_ = this;
        errorCode = ErrorStatus::kNoError;
    }
    else
    {
        errorCode = ErrorStatus::kAttachCarError;
    }
    return errorCode;
}

TrainCar::ErrorStatus TrainCar::ActivateBrake()
{
    brake_status_ = BrakeStatus::kBrakeEngaged;
    return ErrorStatus::kNoError;
}

TrainCar::ErrorStatus TrainCar::DeactivateBrake()
{
    brake_status_ = BrakeStatus::kBrakeNotEngaged;
    return ErrorStatus::kNoError;
}

void TrainCar::ReportStatus()
{
    // Report front linkage status
    if (nullptr == previous_car_)
    {
        std::cout << "Front linkage: Disconnected" << std::endl;
    }
    else
    {
        std::cout << "Front linkage: Connected" << std::endl;
    }

    // Report rear linkage status
    if (nullptr == next_car_)
    {
        std::cout << "Rear linkage: Disconnected" << std::endl;
    }
    else
    {
        std::cout << "Rear linkage: Connected" << std::endl;
    }

    // Report brake status
    if (BrakeStatus::kBrakeEngaged == brake_status_)
    {
        std::cout << "Brakes: Engaged" << std::endl;
    }
    else
    {
        std::cout << "Brakes: Disengaged" << std::endl;
    }
}

// Destructor
TrainCar::~TrainCar()
{
    //std::cout << "Destructing TrainCar" << std::endl;
}
