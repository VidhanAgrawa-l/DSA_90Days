#include <iostream>
using namespace std;

//LEET CODE-1009

int bitwiseComplement(int n) {
    int m = n;
    int mask = 0;

    // Edge case
    if(n == 0) {
        return 1;
    }
    while(m != 0) {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    return ans;
}

int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int complement = bitwiseComplement(n);
    cout<<"Required bitwise complement = "<<complement<<endl;

    return 0;
}

// Here's a step-by-step explanation of the approach used in this code:

// Initialize m to the value of n. m will be used to calculate the length of the binary representation of n.

// Check if m is equal to 0. If n is 0, its bitwise complement is 1. In this case, the function directly returns 1.

// Initialize a variable mask to 0. The mask variable is used to create a bit mask of 1s with the same length as the binary representation of n.

// Use a while loop to calculate the mask:

// In each iteration, mask is left-shifted by 1 bit and then bitwise ORed with 1. This effectively adds a '1' to the mask.
// The loop continues until m becomes 0. This loop calculates a bit mask with all 1s, and the length of the mask is equal to the number of bits required to represent n.
// Calculate the bitwise complement of n:

// (~n) computes the bitwise negation of n, changing all 0s to 1s and all 1s to 0s.

// & mask performs a bitwise AND operation between the negated value and the mask. This operation sets all bits in n to 0 except for the least significant bits that are part of the binary representation of n.
// Return the result, which is the bitwise complement of the input integer n.

// This code successfully calculates the bitwise complement of an integer n by creating a mask with the same length as the binary representation of n and then applying the negation and bitwise AND operations.

