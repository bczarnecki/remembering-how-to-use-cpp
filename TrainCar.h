#ifndef TRAINCAR_H
#define TRAINCAR_H

class TrainCar
{
private:
    TrainCar* previousCar_m;
    TrainCar* nextCar_m;
public:
    TrainCar();
    int activateBrakes();
    int deactivateBrakes();
    int attachCar(TrainCar*);
    virtual ~TrainCar();
};

#endif
