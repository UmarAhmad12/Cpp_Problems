#include <iostream>
using namespace std;

int main()
{
    // ++++++++++++ bitwise operator

    // int a = 4;
    // int b = 6;
    // cout << "a&b " << (a & b) << endl;
    // cout << "a|b " << (a | b) << endl;
    // cout << "~a " << (~a) << endl;
    // cout << "a^b " << (a ^ b) << endl;

    // ++++++++++ right and left shift

    // cout << (17 >> 1) << endl;
    // cout << (17 >> 2) << endl;
    // cout << (19 << 1) << endl;
    // cout << (21 << 2) << endl;

    // ++++++++++ Incre/Decre Operator

    // int i = 7;

    // cout << (++i) << endl;
    // //  8
    // cout << (i++) << endl;
    // // 8 , i=9
    // cout << (i--) << endl;
    // // 9 , i=8
    // cout << (--i) << endl;
    // // 7

    // +++++++ Q1 ++++++

    // int a, b = 1;
    // a = 10;
    // if (++a)          // Since 11 is non-zero, the condition is true.
    //     cout << b;    // out --> 1
    // else
    //     cout << ++b;

    //  +++++++ Q2 ++++++++

    // int a = 1;
    // int b = 2;

    // if (a-- > 0 && ++b > 2)
    // {
    //     cout << "Stage1 - Inside If"<<endl;
    // }
    // else
    // {
    //     cout << "Stage2 - Inside else"<<endl;
    // }
    // cout << a << " " << b << endl;

    // +++++++ Q3 ++++++++

    // int a = 1;
    // int b = 2;

    // if (a-- > 0 || ++b > 2) //  if one of the conditions is true, the entire expression is true, and the if-block will be executed.
    // {
    //     cout << "Stage1 - Inside If" << endl;
    // }
    // else
    // {
    //     cout << "Stage2 - Inside else" << endl;
    // }
    // cout << a << " " << b << endl;    // cout << a << " " << b << endl;: This prints the values of a and b. Since a was post-decremented, its value is now 0. b was not incremented because the condition before it evaluated to true.

    // ++++++++ Q4 +++++++

    // int number = 3;
    // cout << (25 * (++number));

    // +++++++ Q5 +++++

    // int a = 1;
    // int b = a++;
    // int c = ++a;
    // cout << b<<endl;
    // cout << c<<endl;
}