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

        // A virtual copy constructor. It's workaround.
        virtual Fish* Clone();

        // Virtual function to make sure that an object of derived class
        // can invoke right swim function.
        virtual void Swim();

};


class Tuna: public Fish
{
    public:

        Tuna();

        ~Tuna();

        Fish* Clone() override;

        // Overriding the base class method
        void Swim() override;

};


class Carp: public Fish
{
    public:

        Carp();

        ~Carp();

        Fish* Clone() override;

        void Swim() override;

};


void makeFishSwim(Fish& inputFish);

void deleteFishMemory(Fish* pFish);

#endif // FISH_H
