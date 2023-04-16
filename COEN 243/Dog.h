#ifndef DOG_H
#define DOG_H
#include <string>

using namespace std;

class Dog
{
    public:
        //Default Constructor
        Dog();
        //Overloaded Constructor
        Dog(std::string name, std::string color, std::string breed, int age);
        //Member Function
        void Speak();
        //Destructor
        virtual ~Dog();
        //Setters and Getters (Member Functions)
        int GetAge() { return age; };
        void SetAge(int a) { if (a < 0) { a = 0; } age = a; };
        std::string GetName() { return name; };

        //implicitly assigned
        const int a = 5;
        const static int c = 100;

    private:
        std::string name;
        std::string breed;
        std::string color;
        int age;
};

#endif // DOG_H
