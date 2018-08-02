#ifndef PLATYPUS_H
#define PLATYPUS_H

// An example of multiple inheritance
// Diamond problem which solved by virtual inheritance

class Animal
{
    public:

        int age;

        Animal();
};


class Mammal: public virtual Animal
{
    public:

        void feedBabyMilk();
};


class Reptile: public virtual Animal
{
    public:

        void splitVenom();
};


class Bird: public virtual Animal
{
    public:

        void layEggs();

};


class Platypus final : public Mammal, public Bird, public Reptile
{
    public:

        Platypus();

        void swim();

};

#endif // PLATYPUS_H
