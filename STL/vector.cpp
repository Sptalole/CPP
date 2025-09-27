#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> v;
    cout << "cap = " << v.capacity() << " size " << v.size() << endl;
    v.push_back(5);
    cout << "cap = " << v.capacity() << " size " << v.size() << endl;
    v.push_back(6);
    cout << "cap = " << v.capacity() << " size " << v.size() << endl;
    v.push_back(7);
    cout << "cap = " << v.capacity() << " size " << v.size() << endl;
    // v.at(1);
    // cout << "cap = " << v.capacity() << " size "<< v.size() << endl;
    cout << v.at(0) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.data() << endl;
    display(v);

    //     vector<int>
    //         vec1;
    // int size, element;
    // cout << "Enter the size" << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the element" << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter + 1, 786);
    // display(vec1);
    // cout << "Size ->" << vec1.size() << endl;
    // cout << "Capacity ->" << vec1.capacity() << endl;

    // vec1.insert(iter + 1, 5, 786);
    // display(vec1);
    // cout << "Size ->" << vec1.size() << endl;
    // cout << "Capacity ->" << vec1.capacity() << endl;
}

/*OUTPUT*/
/*
cap = 0 size 0
cap = 1 size 1
cap = 2 size 2
cap = 4 size 3
5
5
7
0x2619979d9b0
5 6 7
*/