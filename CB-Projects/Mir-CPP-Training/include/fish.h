#ifndef FISH_H
#define FISH_H


class Fish
{
    protected:

        bool isFreshWaterFish;

    public:

        Fish(bool isFreshWater);

        void Swim();

};


class Tuna: public Fish
{
    public:

        Tuna();

};


class Carp: public Fish
{
    public:

        Carp();

};

#endif // FISH_H
