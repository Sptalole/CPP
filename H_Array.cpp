#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// int main() {

//     int length;
//     cin >> length;
//     int arr[length];
//     for (int i =0 ; i < length ; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << endl;
//     for (int i =length-1 ; i >= 0 ; i--)
//     {
//         cout << arr[i];
//     }
    
  
//     return 0;
// }



int main(){
    int n; cin >> n; 
    int *arr = new int[n]; // since cpp doent support VLAs sizing 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " "; 
    }
    delete [] arr; 
    return 0;
}