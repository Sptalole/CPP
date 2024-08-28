#include<iostream>
using namespace std;


class Hero{
    private:
     int health;
    public:
     char level;

    void print() {  
        cout << level << endl;
    }
     
    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }

    void setHealth(int h ) {
        health = h ;
    }
    void setLevel(char l) {
        level = l;
    }
};

int main(){

    Hero ramesh;
    ramesh.setHealth(70);
    cout << "ramesh health is " <<  ramesh.getHealth() << endl;
    cout << "ramesh size is " << sizeof(ramesh) << endl;
}
