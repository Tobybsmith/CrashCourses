#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal
{
    public:
        Cat(std::string aName, std::string aColor);
        virtual ~Cat();
        virtual void Speak();
        void Speak() const;
        std::string GetColor() { return mColor; };
        void SetColor(std::string s) { mColor = s; };
        static int mCatCount;
        int a = 0;
    protected:
        std::string mColor;
};

#endif // CAT_H
