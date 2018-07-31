#ifndef CAR_H
#define CAR_H


class Motor
{
    public:

        void switchIgnition();

        void pumpFeul();

        void fireCylinders();

};


// Private inheritance
// and protected inheritance
class Car: protected Motor
{
    public:

        void moveCar();

};


class RaceCar: protected Car
{
    public:

        void moveCar()
        {
            switchIgnition();
            pumpFeul();
            fireCylinders();
            fireCylinders();
            fireCylinders();
        }

};


#endif // CAR_H
