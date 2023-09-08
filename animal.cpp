#include "animal.h"
#include<iostream>
using namespace std;
Animal::Animal(){}
Dog::Dog(){};
Cat::Cat(){};
Pig::Pig(){};
Cow::Cow(){};

void Dog::MakeSound(){
    cout << "woof\n";
}

void Cat::MakeSound(){
    cout << "meow\n";
}

void Pig::MakeSound(){
    cout << "oink\n";
}

void Cow::MakeSound(){
    cout << "moo\n";
}