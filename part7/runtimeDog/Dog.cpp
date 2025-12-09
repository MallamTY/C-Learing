#include "Dog.h"
#include <stdexcept>
using namespace std;


Dog::Dog(string breed){
    if (breed != "poodle" && breed != "Poodle")
    {
        this->breed = breed;
    }
    else {
        throw runtime_error("Poodle doesn't seem to be a dog breed");
    }
    
};

string Dog::getBreed() const noexcept {
    return breed;
    
}