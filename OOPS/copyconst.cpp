#include<iostream>
#include<cstring>
using namespace std;


class Hero{
public: 
    int a;
    char ch;
    char *name;

Hero(){
    cout << "address of =   default constructor" << this << endl;
    name = new char[100];
    
}



Hero(Hero &orgobj){
    cout <<"copy" <<endl;
    this->a = orgobj.a;

    char *cha = new char[strlen(orgobj.name +1)];
    strcpy(cha, orgobj.name);
    this->name = cha;
}

void setname(char name[]){
    strcpy(this->name, name);
}

void print(){
cout << "name->" << name << endl;
}



};


int main(){
    Hero h1;
    h1.a = 40;
    char name[7] = "sagar";
    h1.setname(name);
    h1.print();

    Hero h2(h1);
    cout << "h2.a->" << h2.a << endl;
    h1.name[0] = 'm';
    h1.print();
    cout << endl;
    h2.print();
    
    cout << "address of hero1 " << &h1 << endl;

    return 0;
}