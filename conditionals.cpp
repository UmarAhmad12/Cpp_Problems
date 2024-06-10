#include <iostream>
using namespace std;

int main()
{
    // +++++++ Example -1 ++++++

    // int n;
    // cin >> n;
    // cout << "Value of n is:" << n << endl;

    // +++++++++ Example -2 ++++++++++

    // if else statements
    // int a;
    // cin >> a;
    // If a is positive
    // if(a>0){
    //     cout<<"A is positive"<<endl;
    // }
    // else {
    //     cout<<"A is negative"<<endl;
    // }

    // ++++++++ Example-3 ++++++++

    // int a, b;

    // cin >> a >> b;

    // cout << "Value of a and b is " << a << " " << b << endl;

    // +++++++++ Example -4 +++++++

    // int a, b;
    // cout << "Enter the value of a: " << endl;
    // cin >> a;
    // cout<< "Enter the value of b:" <<endl;
    // cin>> b;
    // if(a>b){
    //     cout<<"a is greater"<<endl;
    // }
    // if(b>a) {
    //     cout<<"b is grater"<<endl;
    // }

    // ++++++++ Example -5 ++++++++++
    // int a;
    // cout << "Enter the value of a" << endl;
    // cin >> a;

    // if (a > 0)
    // {
    //     cout << "A is positive";
    // }
    // else
    // {
    //     if (a < 0)
    //     {
    //         cout << "A is negative";
    //     }
    //     else
    //     {
    //         cout << "A is 0";
    //     }
    // }

    // ++++++++++ if else-if statement +++++

    // ++++++++++++ Example -6 ++++++++
    // int a;
    // cout << "Enter the value of a" << endl;
    // cin >> a;

    // if(a>0) {
    //     cout<< "A is positive"<<endl;
    // }
    // else if(a<0){
    //     cout<<"A is negative"<<endl;
    // }
    // else {
    //     cout<<"A is 0"<<endl;
    // }

    // Q1. --> output--> Niney positive

    // int a = 9;
    // if (a == 9)
    // {
    //     cout << "Niney"<<endl;
    // }
    // if (a > 0)
    // {
    //     cout << "Positive"<<endl;
    // }
    // else
    // {
    //     cout << "Negative"<<endl;
    // }

    // Q2. --> output --> 3
    // int a=2;
    // int b = a+1;     // here b = 2+1 = 3

    // if((a=3)==b) {   // here a become 3 so 3 == 3 true
    //     cout<<a;     // 3
    // }
    // else {
    //     cout<<a+1;
    // }

    // Q3. --> output --> Love24

    /*
    In summary, else if (a == 24) would be true if the preceding if condition were false, and a would be equal to 24. But in your code snippet, the preceding if condition is true, so the else if condition is not evaluated.
    */

    // int a = 24;

    // if (a > 20)
    // {
    //     cout << "Love";
    // }
    // else if (a == 24)
    // {
    //     cout << "Lovely";
    // }
    // else
    // {
    //     cout << "Babbar";
    // }
    // cout << a;

    // Q4.
    char ch = '1';
    // cout << "Enter a character: ";
    // cin >> ch;

    if (isupper(ch))
    {
        cout << "The character is uppercase.\n";
    }
    else if (islower(ch))
    {
        cout << "The character is lowercase.\n";
    }
    else if (isdigit(ch))
    {
        cout << "The character is numeric.\n";
    }
    else
    {
        cout << "The character is neither uppercase, lowercase, nor numeric.\n";
    }
}