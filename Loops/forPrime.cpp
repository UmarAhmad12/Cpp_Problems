#include <iostream>
using namespace std;

int main()
{
    // ++++++ Print sum from 1 to n +++++++++++

    int n;
    cout << "Enter a value" << endl;
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            isPrime=0;
            break;
        }
        
    }

    if (isPrime==0)
    {
        cout<<"Not a prime number"<<endl;
    } else {
        cout<<"is a prime number"<<endl;
    }
    
    

}