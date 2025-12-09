#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;


class Animal
{
    private:
        string name;
        double weight;
    public:
        Animal(string name, double weight);
        string getName() const;
        double getWeight() const;
        void setName(string name);
        void setWeight(double weight);
        virtual string makeNoise() const;
        virtual string eat() const = 0;
        virtual ~Animal() = default;
};


#endif
