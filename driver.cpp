#include "animal.h"
#include<iostream>
using namespace std;
void grow(Animal* a[], int s, int max){
    max += 50;
    Animal * tmp[max];
    for (int i = 0; i < s; i++){
        tmp[i] = a[i];
    }
    a = tmp;
}
int main(){
    Animal * animals[50];
    int num = 0;
    int maxsize = 50;
    int size = 0;
    int end = 0;
    cout << "Welcome to the program. You may add an animal or print the list. That's it.\n";
    while (end == 0){
        if (size == maxsize){
            grow(animals, size, maxsize);
        }
        cout << "Menu (Enter the number listed to exucute the command):\n" << "\t1. Enter dog\n\t2. Enter cat\n\t3. Enter pig\n\t4. Enter Cow\n\t5. Print\n\tAnything else: exit program\n";
        cin >> num;
        if (size == maxsize){
            grow(animals, size, maxsize);
            maxsize += 5;
        }
        if (num == 1){
            Animal * d = new Dog();
            animals[size] = d;
            size++;
        }
        else if (num == 2){
            Animal * c = new Cat();
            animals[size] = c;
            size++;
        }
        else if (num == 3){
            Animal * p = new Pig();
            animals[size] = p;
            size++;
        }
        else if (num == 4){
            Animal * co = new Cow();
            animals[size] = co;
            size++;
        }
        else if (num == 5){
            for (int i = 0; i < size; i++){
                animals[i]->MakeSound();
            }
        }
        else end++;
    }
}