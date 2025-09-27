// // C++ program to illustrate
// // concept of Virtual Functions

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void show()
//     {
//         cout << "show A" << endl;
//     }
// };

// class B : public A{
// public:
//     void show()
//     {
//         cout << "show B" << endl;
//     }
// };

// int main()
// {
//     A *bptr;
//     A aa;
//     bptr = & aa;
//     bptr->show(); //show A

//     A *ptr;
//     B a;
//     ptr = &a;
//     ptr->show(); // show A

// }

/*If we want to call the derived class func
when we use virtual function it gives ability to use the function call inside the class based om pbject of class*/

#include <iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout << "show A" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "show B" << endl;
    }
};

int main()
{
    A *bptr;
    A aa;
    bptr = &aa;
    bptr->show(); // show A

    A *ptr;
    B a;
    ptr = &a;
    ptr->show(); // show B
    // now based on the object
}
