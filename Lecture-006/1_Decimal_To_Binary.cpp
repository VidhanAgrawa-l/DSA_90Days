#include <iostream>
#include <math.h>
using namespace std;

// int pow(int n, int p) {
//     return (p==0) ? 1 : n*pow(n, p-1);
// }

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int answer = 0;
    int i = 0;

    while(n != 0) {
        
        int bit = n & 1;
        answer =  (bit * pow(10,i)) + answer ;
        
        n = n >> 1;
        i++;
       
    }

    cout<<"Converted Binary Number : "<< answer <<endl;

    return 0;
}