#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(std::string, std::string);
        virtual ~Animal();
        std::string GetName() { return mName; };
        std::string GetSpecies() { return mSpecies; };
        void SetName(std::string s) { mName = s; };
        void SetSpecies(std::string s) { mSpecies = s; };
        //Abstract Class
        virtual void Speak() = 0;
        //Overloading <<
        friend std::ostream& operator<<(std::ostream& out, const Animal& a);
    protected:
        std::string mSpecies;
        std::string mName;
};

#endif // ANIMAL_H
