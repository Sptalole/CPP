#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        std::cout << "Base show" << std::endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        std::cout << "Derived show" << std::endl;
    }
};

int main()
{

    Base *obj = new Base;
    obj->show(); // Output: "Base show"

    /*
    Base *obj = new Derived;
    obj->show(); // Output: "Base show"
    */

    /*
    Derived* obj = new Derived;
    obj->show(); // Output: "Derived show"
    */

    return 0;
}