#include <iostream>
using namespace std;

int main(){
    int n;
    int i = 2;

    cout<<"enter the no to check prime :"<<endl;
    cin>>n;

    while(i<n){
        if (n%i == 0){
            cout<<"no is not prime for "<<i<<endl;
        
        }else{
            cout<<"no is prime for "<<i<<endl;
        }

        i = i + 1;

    }
}