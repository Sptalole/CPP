#include<iostream>
using namespace std;

class Human{
public:
    int age=10;
    string color;
    void print(){
        cout<<"In print function"<<endl;
    }
};

class Humanity{
public:
    int age=20;
    void print(){
        cout<<"In Humanity print function"<<endl;
    }
};

class Male : public Human, public Humanity{
public:
    int age=30;
    int sum(){

        cout << Human::age <<"---" << Humanity::age<< endl;
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


 //m.Humanity::print();

 cout <<m.age<<endl;
  cout << m.sum()<<endl;

return 0;

}
