#include <iostream>
using namespace std;

int main()
{

    // ++++++++ For Fibonacci ++++++++

    // ++++ Print first 10 number +++

    int n = 10;

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
}