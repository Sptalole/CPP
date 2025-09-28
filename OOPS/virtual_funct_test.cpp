#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base" << endl;
    }
};

class Derived : public Base
{
public:
    // void print()
    // {
    //     cout << "Derived" << endl;
    // }
};

int main()
{
    // Using object based on the call we can call the base class or derived class function
    // Base b;
    // b.print(); // Base
    // Derived d;
    // d.print(); // Derived
    // // using pointer based on the class object we able to call the function
    // Base *bptr;
    // bptr = &b;
    // bptr->print(); // Base

    // Derived *dptr;
    // dptr = &d;
    // dptr->print(); // Derived

    // Now add virtual func
    Base *bptr;
    Base b;
    bptr = &b;
    bptr->print(); // Base

    Derived d;
    bptr = &d;
    bptr->print(); // Derived
    /*Now we have added virtual function in the class, then with the base class pointer pointing to his derived class, will call the derived function*/
    /*Using virtual call give  you the ability to call the function based on the object point to base class */
    /*If we dont have func present in the derived class then stil it will call the base class function*/
}
