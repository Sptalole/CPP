#include <iostream>
#include <deque>
using namespace std;

void display(deque<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    // deque doble ended queue, here we can add the data from front and back
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
    cout << "d.empty() = " << d.empty() << endl;
}

/*OUTPUT*/
/*
10
10 20
10 20 30
5 10 20 30
3 5 10 20 30
front = 3
back = 30
d.empty() = 0
*/