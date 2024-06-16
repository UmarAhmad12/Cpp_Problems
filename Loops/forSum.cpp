#include <iostream>
using namespace std;

int main()
{
    // ++++++ Print sum from 1 to n +++++++++++

    int n;
    cout << "Enter a value" << endl;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;

}