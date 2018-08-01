#ifndef PLATYPUS_H
#define PLATYPUS_H

// An example of multiple inheritance

class Mammal
{
    public:

        void feedBabyMilk();
};


class Reptile
{
    public:

        void splitVenom();
};


class Bird
{
    public:

        void layEggs();

};


class Platypus: public Mammal, public Bird, public Reptile
{
    public:

        void swim();

};

#endif // PLATYPUS_H
