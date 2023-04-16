#include "Dog.h"
//#include "Dog.cpp"
#include <fstream>
#include <vector>
#include <iomanip>
#include <iostream>
#include <fstream>

int fib(int);
int fac(int);

//Assume the file test.txt exists and contains "Hello World",
//predict the output on line 17
int main()
{
    cout << fib(5) << endl;
}

//f_(n) = f_(n-1) + f_(n-2)
//1 1 2 3 5 8 13
int fib(int a)
{
    if (a == 1 || a == 2)
    {
        return 1;
    }
    return fib(a - 1) + fib(a - 2);
}

int fac(int a)
{
    if (a == 1)
    {
        return 1;
    }
    return a * fac(a-1);
}

//Recursive functions call themselves
//Break condition <- exit recursion
//Factiorial
//5! = 1*2*3*4 *5
//5! = 5 * 4!
//n! = n * (n-1)!
//1! = 1
/*
factorial(5)
- 5 * factorial(4)
- - 4 * factorial(3);
*/
