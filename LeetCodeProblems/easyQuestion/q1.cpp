#include <iostream>
using namespace std;

int main()
{
    int prod = 1;
    int sum = 0;
    int n = 234;
    while (n != 0)
    {
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int answer = prod - sum;
    cout << "The answer is: " << answer << endl; // Print the result
    return 0;
}

/*
When you run this program, you should see the output "The answer is: 15". Here's how it works:

n = 234
Extract the last digit: digit = 4, update prod and sum, and reduce n:
prod = 1 * 4 = 4
sum = 0 + 4 = 4
n = 234 / 10 = 23
Extract the last digit: digit = 3, update prod and sum, and reduce n:
prod = 4 * 3 = 12
sum = 4 + 3 = 7
n = 23 / 10 = 2
Extract the last digit: digit = 2, update prod and sum, and reduce n:
prod = 12 * 2 = 24
sum = 7 + 2 = 9
n = 2 / 10 = 0
Calculate the answer: answer = prod - sum = 24 - 9 = 15
The final output will be "The answer is: 15".
*/
