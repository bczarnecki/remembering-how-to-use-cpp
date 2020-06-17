#ifndef TRAIN_H
#define TRAIN_H

#include "TrainCar.h"

class Train
{
private:
    TrainCar* first_car_;
    TrainCar* last_car_;

public:
    Train();
    virtual ~Train();
};


#endif
