#include "Dog.h"

Dog::Dog(std::string aName, std::string aBreed)
{
    mName = aName;
    mBreed = aBreed;
    mSpecies = "Dog";
}

void Dog::Speak()
{
    std::cout << "Bark Bark" << std::endl;
}

Dog::~Dog()
{
    //dtor
}
