#include <iostream>
#include "TrainCar.h"

// Cosntructor
TrainCar::TrainCar()
{
    previous_car_ = NULL;
    next_car_ = NULL;
}

// Adds car to next_car_
int TrainCar::AttachCar(TrainCar* tc)
{
    int errorCode;
    if (NULL != tc)
    {
        next_car_ = tc;
        tc->previous_car_ = this;
        errorCode = 0;
    }
    else
    {
        errorCode = -1;
    }
    return errorCode;
}

int TrainCar::ActivateBrake()
{

}

int TrainCar::DeactivateBrake()
{

}

// Destructor
TrainCar::~TrainCar()
{
    std::cout << "Destructing TrainCar" << std::endl;
}
