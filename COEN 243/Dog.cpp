#include "Dog.h"
#include <iostream>

//Classname::function

Dog::Dog()
{
    breed = "null";
    name = "null";
    color = "null";
    age = -1;
    //std::cout << name << " : Hello" << std::endl;
}

Dog::Dog(std::string n, std::string c, std::string b, int h)
{
    name = n;
    color = c;
    breed = b;
    age = h;
    //ptr = new int{10};
    //std::cout << name << " : Hello (overloaded)" << std::endl;
}

void Dog::Speak()
{
    std::cout << "Woof" << std::endl;
}

Dog::~Dog()
{
    std::cout << name << ": Goodbye" << std::endl;
}
