#include <iostream>
using namespace std;

int main()
{
    // +++++ Q1. print from 1 to n ++++++
    // int n;
    // cout << "Enter a number" << endl;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {

    //     cout << i << " ";
    //     i = i + 1;
    // }

    // ++++++++ Q2 print sum from 1 to n ++++++++

    // int n;
    // cout << "Enter a number" << endl;
    // cin >> n;

    // int sum = 0;
    // int i = 1;
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i = i + 1;
    // }
    // cout << "Value of sum is:" << sum << endl;

    // ++++++++ Q3. print even number from 1 to n ++++

    // int n;
    // cout<<"Enter a number"<<endl;
    // cin>>n;
    // int number = 2;
    // while(number<n){
    //     cout<<number<<" ";
    //     number = number + 2;
    // }

    // ++++++++ Q4. print sum of even number from 1 to n ++++

    // int n;
    // cout<<"Enter a number"<<endl;
    // cin>>n;
    // int number = 2;
    // int sum = 0;
    // while(number<n){
    //     sum = sum + number;
    //     number = number + 2;
    // }
    // cout<<"Sum of even number:"<<sum<<endl;

    // ++++++++ Q5. print prime number +++++++

    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not prime for " << i << endl;
        }
        else
        {
            cout << "Prime for " << i << endl;
        }
        i = i + 1;
    }
}