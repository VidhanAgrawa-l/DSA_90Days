#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout<<"Enter the value of a : ";
    cin>>a;

    cout<<"Enter the value of b : ";
    cin>>b;

    // cin>>a;>>b;  --> aaise bhi ek sath input le skte hai

    if(a>b) {
        cout<<"a is greater"<<endl;
    } else {
        cout<<"b is greater"<<endl;
    }
}