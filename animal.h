#include<iostream>
using namespace std;
class Animal{
    public:
        virtual void MakeSound()=0;
        Animal();
};

class Dog: public Animal{
    public:
        Dog();
        void MakeSound();
};

class Cat: public Animal{
    public:
        Cat();
        void MakeSound();
};

class Pig: public Animal{
    public:
        Pig();
        void MakeSound();
};

class Cow: public Animal{
    public:
        Cow();
        void MakeSound();
};