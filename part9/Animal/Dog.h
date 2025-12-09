#ifndef DOG_H
#define DOG_H

#include <string>
#include "Animal.h"
using namespace std;


class Dog : public Animal
{
    private:
        string breed;
    public:
        Dog(string name, string breed, double weight);
        string digHole() const;
        string getBreed() const;
        string makeNoise() const override;
        void chaseCat() const;
        string eat() const override;
};


#endif
