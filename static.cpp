#include<iostream>
using namespace std;

class Hero{
public:

int age;
static int mark;

};


//int Hero::mark = 5;

int main(){

cout << Hero::mark << endl;

Hero h1;
cout << h1.mark<<endl;
h1.mark = 7;
cout << h1.mark<<endl;
cout << Hero::mark << endl;

return 0 ;

}


