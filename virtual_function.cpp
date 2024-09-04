// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class BASE{
    public: 
    void virtual print(){
        cout << "Base class"<< endl;
    } ;

};
class DERIVED : public BASE{
    public: 
    void print() {
        cout << "Derived class" << endl;
    }
};

int main (){
    //Case 1
    /*BASE * b;
    BASE ba;
    b = &ba;
    b->print();   //Base class ((Class pointer and object is of base class then
    base function will get call))
*/
/*
    //Case 2
    DERIVED * d;
    DERIVED da;
    d = &da;
    d->print();   //Derived class ((Class pointer and object is of derived class then 
    derived function will get call))
*/
    /*Case 3 But virtual function used in 3rd case where Derived class object is assigend
    to Base class pointer  [We can do that because the derived class has inherited the Base class]*/
    BASE *b;
    DERIVED d;
    b = &d;
    b -> print();  // we will get the base class output. 
    //Why ?  We are using the base class pointer so it will point to base class, even though we have
    //assigned derived class object to it. 
    // example: base class is animal and derived class is cow, here if we say cow has properties of animal 
    // it make sense. But can we say the animal will have cow properties, no right. Animal is base class so
    // it can be belong to any animal. 
    // IF WE WANT TO CALL THE DERIVED CLASS FUNCTION USING BASE POINTER THEN BASE CLASS FUNCTION SHOULD BE 
    // VIRTUAL, VIRTUAL FUNC SAYING THAT CONSIDER I AM VIRTUAL (INVISIBLE) SO TRY TO GET THE DERIVED FUNCTION 
    // BUT IF THE DERIVED CLASS DOES NOT HAVE THE FUNCTION DEFINATION PRESENT SO THAT TIME AND ONLY THAT TIME
    // YOU CAN GET THE BASE CLASS FUNCTION CALLED.

    // If you want to get call derived func only then you can create a absolute virtual func in base class
    // that means you need to remove the defination of the func in base class and asssigned 0 
    // virtual void print() = 0;
    // this is the pure absolute virtual func and then the base class become the abstrat class
    // using the pure absolute virtual func it means in the derived class the you need to create the 
    // function overloading you can not skip the function now. 
    // Its mandatory to create the func in derived class now. 

    // for that use can use the " override " keyword in derived class 
    /*
        void print () override {
        cout << "Derived class" << endl;
    }*/

   /*
    There is a method with the same name in the parent class.
    The method in the parent class is declared as “virtual” which means it was intended to be rewritten.
    The method in the parent class has the same signature as the method in the subclass*/


    
    
}
