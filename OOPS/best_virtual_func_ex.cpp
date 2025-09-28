#include <iostream>
using namespace std;
/*
class Animal {
public:
     void speak() {
        cout << "Animal speak" << endl;
    }
};

class Dog : public Animal {
public:
    void speak()  {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak()  {
        cout << "Cat meows" << endl;
    }
};


void makeItSpeak(Animal* a) {
    a->speak();  // Polymorphic call
}

void makeItSpeak(Dog* a) {
    a->speak();  // Polymorphic call
}

void makeItSpeak(Cat* a) {
    a->speak();  // Polymorphic call
}


int main(){

    Dog d;
    Cat c;
    Animal an;
makeItSpeak(&an);  //Animal speak
makeItSpeak(&d);  // Dog barks
makeItSpeak(&c);  // Cat meows

}
*/
/*This is the best example why we need virtual function, that is to call the function on the basis of object*/
/*now above we seen to call the function we have given the different object but for that we created the 3 different function, that is unpractical

With the help of virtual function we can use one function only, with the basis of object passing the speak function will get execute
*/

class Animal
{
public:
    virtual void speak()
    {
        cout << "Animal speak" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak() override
    {
        cout << "Cat meows" << endl;
    }
};

void makeItSpeak(Animal *a)
{
    a->speak(); // Polymorphic call
}

int main()
{

    Dog d;
    Cat c;

    makeItSpeak(&d); // Dog barks
    makeItSpeak(&c); // Cat meows
    /*Now with just passing a different object, we can achive the our speak func called*/
}