#include<iostream>
#include<deque>
using namespace std;

void display(deque<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    deque<int> d;
    d.push_back(10);
    display(d);
    d.push_back(20);
    display(d);
    d.push_back(30);
    display(d);
    d.push_front(5);
    display(d);
    d.push_front(3);
    display(d);
    cout << "front = " << d.front() << endl;
    cout << "back = " << d.back() << endl;




}