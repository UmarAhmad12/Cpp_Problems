#include <iostream>
using namespace std;

int main()
{
    // cout << a << endl; --> error --> 'a' was not declared in this scope
    // int a;
    // cout << a << endl; --> 0 (garbage value)

    int a = 3;
    cout << a << endl;

    if (true)
    {
        int b = 5;
        cout << b << endl;
    }

    int b = 1;
    cout << b << endl;

    // int b = 3;
    cout << b << endl;

    int i = 8;
    // for(int i = 0; i<8; i++){
    for(; i<8; i++){
        cout<<"Hi"<<endl;
    }

    if(1) {
        int b;
        if(1){
            int b;
            if(1){
                int b;
                // cout<<b<<endl;
            }
        }
    }
}