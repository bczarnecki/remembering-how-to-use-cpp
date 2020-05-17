#include <iostream>
#include "TrainCar.h"

// Cosntructor
TrainCar::TrainCar()
{
    previousCar_m = NULL;
    nextCar_m = NULL;
}

// Adds car to nextCar_m
int TrainCar::attachCar(TrainCar* tc)
{
    int errorCode;
    if (NULL != tc)
    {
        nextCar_m = tc;
        tc->previousCar_m = this;
        errorCode = 0;
    }
    else
    {
        errorCode = -1;
    }
    return errorCode;
}

// Destructor
TrainCar::~TrainCar()
{
    std::cout << "Destructing TrainCar" << std::endl;
}
