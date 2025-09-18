#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
    //Person(){cout << "default parent constructor called"<<endl;}
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
    public:

    int rollno;
    Student(string name, int age,int rollno) : Person( name, age){
        this -> rollno = rollno;
    }
    void getinfo(){
        cout <<"name " << name<<  endl;
        cout <<"age " << age <<endl;
        cout <<"rollno " << rollno << endl;
        
    }
}; 

int main(){
    Student s1("rahul kumar", 20, 44);
    s1.getinfo();




    return 0;
}