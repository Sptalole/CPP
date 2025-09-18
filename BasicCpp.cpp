#include<iostream>
using namespace std;

//creating class employee
class Employee{
private:
    int age;
    string name;
public :
    void setAge (int a){
        age = a;
    }
    void setName(string n){
        name = n;
    }
    int getAge(){
        return age;
    }
    string getName(){
        return name;
    }
    Employee(){
        cout << "default constructor called" << endl;
    }


};



int main()
{

Employee e;

e.setAge(20);
e.setName("Sagar");
//cout << "name "<< e.name << endl;
cout << "e.age " << e.getAge() << endl;
cout << "e.name" << e.getName() << endl;

Employee e2(e);
cout << "e2.age " << e2.getAge() << endl;
cout << "e2.name" << e.getName() << endl;

return 0;
}