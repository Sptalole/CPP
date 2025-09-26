#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
public:
    int a;
    char ch;
    char *name;

    Hero()
    {
        cout << "default constructor called " << endl;
        cout << "address of = default constructor is : " << this << endl;
        name = new char[100];
    }

    Hero(Hero &orgobj)
    {
        cout << "copy constructor called" << endl;
        this->a = orgobj.a;

        char *cha = new char[strlen(orgobj.name + 1)];
        strcpy(cha, orgobj.name);
        this->name = cha;
    }

    void setname(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "name:- " << name << endl;
    }
};

int main()
{
    Hero h1;
    h1.a = 40;
    char name[7] = "sagar";
    h1.setname(name);
    h1.print();

    Hero h2(h1);
    cout << "h2.a:- " << h2.a << endl;
    h1.name[0] = 'm';
    h1.print();
    cout << endl;
    h2.print();

    cout << "address of hero1:- " << &h1 << endl;

    return 0;
}

/*OUTPUT*/
/*
default constructor called
address of = default constructor is : 0xd0d55ffba0
name:- sagar
copy constructor called
h2.a:- 40
name:- magar

name:- sagar
address of hero1:- 0xd0d55ffba0
*/