#include "Cat.h"

int Cat::mCatCount = 0;

Cat::Cat(std::string aName, std::string aColor)
{
    mName = aName;
    mColor = aColor;
    mSpecies = "Cat";
    Cat::mCatCount += 1;
}

void Cat::Speak()
{
    std::cout << "Meow" << std::endl;
}

void Cat::Speak() const
{
    std::cout << "Meow... but const-ly" << std::endl;
}

Cat::~Cat()
{
    //dtor
}
