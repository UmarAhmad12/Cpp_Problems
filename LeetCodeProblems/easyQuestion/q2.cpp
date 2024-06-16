#include <iostream>
using namespace std;

int main(){
    int count = 0;
    int n = 11;
    while(n!=0){
        // Checking last bit
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    cout<<count<<endl;
    return count ;
}

/*
When you run this program, it will output 3 because the binary representation of 11 is 1011, which has three 1 bits.

Here's a step-by-step breakdown:

Initial n = 11 (binary 1011)
Check the last bit (11 & 1): it's 1, so increment count to 1.
Shift n right: n = 11 >> 1 (now n = 5 which is binary 101).
Check the last bit (5 & 1): it's 1, so increment count to 2.
Shift n right: n = 5 >> 1 (now n = 2 which is binary 10).
Check the last bit (2 & 1): it's 0, so count remains 2.
Shift n right: n = 2 >> 1 (now n = 1 which is binary 1).
Check the last bit (1 & 1): it's 1, so increment count to 3.
Shift n right: n = 1 >> 1 (now n = 0).
The loop ends since n is now 0.
Thus, the output is 3, representing the three 1 bits in the binary representation of 11.
 */