#include <iostream>
using namespace std;
// function signature
void printCounting(int n) {
    // function body
    for(int i=1; i<=n; i++) {
        cout<<i<<endl;
    }
}

int main() {
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;
    //function call
    printCounting(n);

    return 0;
}