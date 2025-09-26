#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;

private:
    int age;

public:
    void print()
    {
        cout << "health " << this->health << endl;
        cout << "level " << this->level;
    }
};

int main()
{

    Hero h1;
    h1.health = 50;
    h1.level = 'A';
    h1.print();
}
/*OUTPUT*/
/*
health 50
level A
*/