#include <iostream>
#include <limits.h>
using namespace std;

//LEET CODE-231

bool isPowerOfTwo(int n) {
    int power = 1;

    for(int i=0; i<31; i++) {
        if(power == n) {
            return true;
        }

        if(power < INT_MAX/2) {
            power *= 2;
        }
    }

    return false;
}

int main() {
    int n;

    cout<<"Enter the number : ";
    cin>>n;

    if(isPowerOfTwo(n)) {
        cout<<n<<" is a power of two!"<<endl;
    } else {
        cout<<n<<" is not a power of two!"<<endl;
    }

    return 0;
}


// Approach 5(And Operator)

// And operation between multiple of 2 and next lower number will always give 0 and other wise it will never be 0.

// example 1: 8 & 7
// 1000(8) & 0111(7) => 0000(0)

// example 1: = 10 & 9
// 1010(10) & 1001(9) => 1000(8)

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        return  (n>0 && (n & (n-1))==0) ? true:false;
    }
};