#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    queue<int> temp(q); // copying data to temp

    while (!temp.empty())
    {
        cout << temp.front() << " " << endl;
        temp.pop();
    }
    cout << endl;
    cout << q.front() << endl; // 1
    cout << q.back() << endl;  // 5
    cout << q.size() << endl;

    queue<int> q1;
    q1.push(6);
    q1.push(7);
    q1.push(8);
    q1.push(9);
    q1.push(10);
    swap(q, q1);

    queue<int> data(q); // copying data to temp

    cout << endl;
    while (!data.empty())
    {
        cout << data.front() << " " << endl;
        data.pop();
    }

    queue<int> data1(q1); // copying data to temp

    cout << endl;
    while (!data1.empty())
    {
        cout << data1.front() << " " << endl;
        data1.pop();
    }

    return 0;
}

/*OUTPUT*/
/*
1
2
3
4
5

1
5
5

6
7
8
9
10

1
2
3
4
5
*/