#include <iostream>
using namespace std;

int main() {

    // fibonacci series -> n = (n-1) + (n-2)
    int a = 0;
    int b = 1;
    int sum = 1;

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    cout<<a<<" "<<b<<" "; // a and b manually print kro fir ,loop se uske aage ke no's

    for(int i=2; i<n; i++) {
        sum = a + b;
        cout<<sum<<" ";
        // jab first two no(0,1) print ho jayenga toh 
        // 1 ko a bnana padega ,and 0+1 ke sum ko b bnaana padega 
        a = b;  
        b = sum;
    }
    
    return 0;
}

// FOR LOOP 
// multiple condition's

// for(int a = 0 , b =1, c = 2; a>=0 && b>=1 && c>=2; a--, b--, c-- ){
//     cout<<a <<" "<< b << " "<<c < endl;
// }