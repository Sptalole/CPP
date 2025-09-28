#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

// Same function with different arguments
int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a = 5, b = 7, c = 11;

    // Add function to add two numbers
    cout << add(a, b) << endl;

    // Add function to add three numbers
    cout << add(a, b, c);

    return 0;
    /*we can call same function name with different parameters*/
    /*we can have diffrent data types of parameter in the second function*/
    /*But only return type change is not allowed, as compiler does not know the return type, its not present in the function call
    int add(int a, int b);
    double add(int a, int b);
    this is invalid
    */
    /*return type can be different but with that parameters should be different
    int add(int a, int b);
    double add(double a, double b);

| Rule          | Explanation                                                |
| ------------- | ---------------------------------------------------------- |
| ✅ Allowed     | Different parameter types (e.g., `int`, `double`, etc.)    |
| ✅ Allowed     | Different number of parameters                             |
| ❌ Not allowed | Only return type is different — not enough for overloading |
| ✅ Allowed     | Default arguments + overloads (but use carefully)          |


    */
}