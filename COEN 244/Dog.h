#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal
{
    public:
        Dog(std::string aName, std::string aBreed);
        virtual ~Dog();
        virtual void Speak();
        std::string GetBreed() { return mBreed; };
        void SetBreed(std::string s) { mBreed = s; };

    protected:
        std::string mBreed;
};

#endif // DOG_H
