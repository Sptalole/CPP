#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int apple(vector<int>(&a),int k, int l)
{
    int i,applecollect =0;

    if ( (k + l) > a.size() )
        return -1;

    cout<<"apple collected by k "<<endl;

    for ( i = k-1; i < (2*k-1); i++){
        cout <<a[i]<<" ";
        applecollect += a[i];
    }

    cout<<"\napple collected by l "<<endl;
    for ( i = i +1; i < (2*k + l); i++){
        cout << a[i]<<" ";
        applecollect += a[i];
    }

    return applecollect;
}

int main()
{
    vector<int> a = {4,5,3,7,8,9,5,4};
    int status =0;
    int k = 7;
    int l = 2;
    status = apple(a,k,l);

    cout<<"\nApple collected = "<<status<<endl;

    return 0;


}
