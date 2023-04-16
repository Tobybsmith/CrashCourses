#include "Animal.h"

Animal::Animal()
{
    //Do nothing
}

Animal::Animal(std::string aName, std::string aSpecies)
{
    mName = aName;
    mSpecies = aSpecies;
}

std::ostream& operator<<(std::ostream& out, const Animal& a)
{
    out << a.mName << " " << a.mSpecies;
    return out;
}

Animal::~Animal()
{
    std::cout << "Goodbye" << std::endl;
}
