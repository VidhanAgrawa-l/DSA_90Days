#include <iostream>
using namespace std;

int main() {
    
    int a = 123;
    cout << a << endl;

    char ch = 'a';
    // char ch = 'abc'; // not work bcoz char mai single character hi de skte hai bs
    cout << ch << endl;

    float f = 1.2;
    cout << f << endl;

    bool bl = true;
    cout << bl << endl;

    double d = 1.23;
    cout << d << endl;

    int size = sizeof(d); // sizeof()
    cout << "Size of d is : " << size << endl;
    
}