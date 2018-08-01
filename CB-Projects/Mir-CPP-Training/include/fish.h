#ifndef FISH_H
#define FISH_H


class Fish
{
    protected:

        bool isFreshWaterFish;

    public:

        Fish(bool isFreshWater);

        // Virtual destructor
        virtual ~Fish();

        // Virtual function to make sure that an object of derived class
        // can invoke right swim function.
        virtual void Swim();

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


void makeFishSwim(Fish& inputFish);

void deleteFishMemory(Fish* pFish);

#endif // FISH_H
