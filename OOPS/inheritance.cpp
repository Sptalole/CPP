#include <iostream>
using namespace std;

class Human
{
public:
    int age = 10;
    string color;
    void print()
    {
        cout << "In print function" << endl;
    }
};

class Humanity
{
public:
    int age = 20;
    void print()
    {
        cout << "In Humanity print function" << endl;
    }
};

class Male : public Human, public Humanity
{
public:
    int age = 30;
    int sum()
    {
        cout << "Human::age:- " << Human::age << endl
             << "Humanity::age:- " << Humanity::age << endl;
        cout << "Sum:-";
        return (Human::age + Humanity::age);
    }
};

int main()
{
    // Human h;
    // h.age = 30;

    Male m;
    m.age = 10;

    // Humanity hu;
    // hu.age = 20;

    // m.Humanity::print();

    cout << "age:- " << m.age << endl;
    cout << endl
         << m.sum() << endl;

    return 0;
}

/*OUTPUT*/
/*
age:- 10

Human::age:- 10
Humanity::age:- 20
Sum:-30
*/