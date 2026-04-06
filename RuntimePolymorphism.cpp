#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks\n";
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows\n";
    }
};

int main() {
    Dog d;
    Cat c;
    cout << "Dog object calling sound()\n";
    d.sound();
    cout << "Cat object calling sound()\n";
    c.sound();
}
