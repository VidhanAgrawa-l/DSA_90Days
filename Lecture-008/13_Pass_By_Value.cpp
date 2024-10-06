#include <iostream>
using namespace std;

void dummy(int n) {
    n++;
    cout<<"In dummy : n = "<<n<<endl;
}

int main() {
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    cout<<"Before call : n = "<<n<<endl;

    dummy(n);

    cout<<"After call : n = "<<n<<endl;

    return 0;
}

// Enter the value of n : 69
// Before call : n = 69
// In dummy : n = 70
// After call : n = 69


// H.W QUESTION FOR OUTPUT

// QUES -1    // output-> 10

void update (int a){
    a = a/2;

}
int main(){
    int a = 10;
    update(a);
    cout<<a<<endl;
}



// QUES -2    // output -- 196
int update(int a){
    int ans = a * a;
    return ans;

}
int main(){
    int a = 14;
    a = update(a);
    cout<<a<<endl;
}


// QUES -3    // output -- 15
int update (int a){
    a -= 5;
    return a;

}
int main () {

    int a = 15;
    update (a);
    cout << a << endl;
}