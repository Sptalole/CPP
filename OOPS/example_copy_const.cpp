/*
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
};

int main()
{
    Student s1("sagar", 9.8);
    Student s2(s1);
    cout << s1.name << " " << *s1.cgpaPtr << endl;
    cout << s2.name << " " << *s2.cgpaPtr << endl;
    *s2.cgpaPtr = 3.4;
    cout << "s1" << endl << s1.name << " " << *s1.cgpaPtr << endl;
    cout << "s2" << endl << s2.name << " " << *s2.cgpaPtr << endl;
    return 0;
}
*/
/*Output*/
/*
sagar 9.8
sagar 9.8
s1
sagar 3.4
s2
sagar 3.4
*/
/*Here we are using default constructor so shallow copy is happening*/
/*even we change the value of s2 , s1 value get changed because same memory is allocated for both object cgapaPtr*/

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &orjobj)
    {
        this->name = orjobj.name;
        cgpaPtr = new double;
        *cgpaPtr = *orjobj.cgpaPtr;
    }
};

int main()
{
    Student s1("sagar", 9.8);
    Student s2(s1);
    cout << s1.name << " " << *s1.cgpaPtr << endl;
    cout << s2.name << " " << *s2.cgpaPtr << endl;
    *s2.cgpaPtr = 3.4;
    cout << "s1" << endl
         << s1.name << " " << *s1.cgpaPtr << endl;
    cout << "s2" << endl
         << s2.name << " " << *s2.cgpaPtr << endl;
    return 0;
}
/*Output*/
/*
sagar 9.8
sagar 9.8
s1
sagar 9.8
s2
sagar 3.4
*/
/*Here we changed the value of s2 but s1 value does not changed*/
/*Because we are using our custom copy constructor and we are assiging new address for the cgpa varible to new address is created and we are copying just value from the first object to new address*/