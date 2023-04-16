#include <iostream>
#include <vector>
#include <algorithm>

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

void print(vector<int>);
void sussyAdd(int a, int b);

//Differences between these two?
void randomFunc(const Cat &);
void worseRandomFunc(Cat);

template<typename T>
T addTwoOneType(T a, T b)
{
    return a + b;
}

template <typename T, typename U>
T addTwo(T a, U b)
{
    return a + b;
}

struct a
{
    int m = 1;
};

struct vector3
{
    int x = 0;
    int y = 0;
    int z = 0;
};

int main()
{
    //Static members
    //cout << "Cat's Serial Number: " << Cat::mCatCount << endl;
    //Cat remi = Cat("Remi", "Black");
    //cout << Cat::mCatCount << endl;
    //
    //cout << endl;

    //Cat mittens = Cat("Mittens", "Orange");
    //cout << "Cat's Serial Number: " << Cat::mCatCount<< endl;
    //cout << remi.mCatCount << endl;

    //Abstract class / polymorphism
    //Bad!
    //vector<Animal>
    //Animal a = Animal();
    //vector<Animal*> zoo;
    //zoo.push_back(new Cat("Terry", "Tigerstripe"));
    //zoo.push_back(new Dog("Air Bud", "Golden Retriever"));

    //Bad
    //Cat *c = new Animal();
    //Good!
    //Animal *a = new Cat();

    //for (Animal* animal : zoo)
    //{
        //Polymorphic
    //    animal->Speak();
        //animal->GetColor();
    //}

    //Templates and generic functions
    //Good!
    //cout << addTwo<int, int>(100, 31) << endl;

    //Bad!
    //cout << addTwoOneType<int, float>(100, 3.14f) << endl;

    //Good!
    //cout << addTwoOneType<Cat>(remi, mittens) << endl;

    //Lambdas - Anonymous Function
    //vector<Animal*> v = {1, 5, 6, 11, 4, 2, 19, 31};

    //std::sort(v.begin(), v.end());

    //print(v);

    //v = {1, 5, 6, 11, 4, 2, 19, 31};

    //print(v);

    //std::sort(v.begin(), v.end(),
              //Lambda function here
    //          [](int a, int b)
    //          {
    //              return a < b;
    //          });
    //print(v);

    //Exceptions? - clever solutions vs simple solutions

    //try
    //{
    //    sussyAdd(10, 10);
    //    cout << "I will never be reached!" << endl;
    //}
    //catch (int sum)
    //{
    //    cout << sum << endl;
    //}
    //catch (string e)
    //{
    //    cout << e << endl;
    //}
    //catch (...)
    //{
    //    cout << "hi" << endl;
    //}

    //Passing by ref, value, pointer, and the power of 'const'
    //Cat donald = Cat("Donald", "White");
    //cout << "sizeof(Cat): " << sizeof(donald) << endl;
    return 0;
}

void print(vector<int> a)
{
    for (auto i : a)
    {
        cout << i << ", ";
    }
    cout << endl;
}

void sussyAdd(int a, int b)
{
    if (a + b > 10)
    {
        //"hello" <- const char * (c-style string)
        //"hello"s <- std::string
        throw "Sum is greater than 10!"s;
    }
    throw a+b;
}

void worseRandomFunc(Cat c)
{
    c.a += 1;
    cout << c.a << endl;
}
