#ifndef FISH_H
#define FISH_H


class Fish
{
    protected:

        bool isFreshWaterFish;

    public:

        Fish(bool isFreshWater);

        ~Fish();

        void Swim();

};


class Tuna: public Fish
{
    public:

        Tuna();

        ~Tuna();

        // Overriding the base class method
        void Swim();

};


class Carp: public Fish
{
    public:

        Carp();

        ~Carp();

        void Swim();

};

#endif // FISH_H
