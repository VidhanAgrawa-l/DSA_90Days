#include <iostream>
using namespace std;


//1 -> Even
// 0 →> odd
bool isEven(int x) {
    if(x&1) { //odd      //(x&1) --> explantion below
        return 0;
    } else {  //even
        return 1;
    }
}

int main() {
    int num;

    cout<<"Enter the num : ";
    cin>>num;

    if(isEven(num)) {
        cout<<"Even Number!"<<endl;
    } else {
        cout<<"Odd Number!"<<endl;
    }

    return 0;
}



// In the code, (x & 1) is used to check if a number is odd or even by performing a bitwise AND operation with 1. Here’s why this works:

// Binary Representation:

// For an even number, the LSB is 0 (e.g., 10 in binary is 1010).
// For an odd number, the LSB is 1 (e.g., 11 in binary is 1011).

// Bitwise AND Operation:

// If x is odd, the result of x & 1 is 1, because the LSB of odd numbers is always 1.
// If x is even, the result of x & 1 is 0, as the LSB of even numbers is always 0.

// Efficiency:

// This method is efficient because bitwise operations are fast and require minimal computation.
