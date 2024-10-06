#include <iostream>
using namespace std;

int main() {
    /*
    4 3 2 1
    4 3 2 1
    4 3 2 1
    4 3 2 1
    */

    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    int row = 1;

    while(row <= n) {
        int col= n;

        while(col>= 1) {
            cout<<col<<" ";
            col= col- 1;
        }

        cout<<endl;
        row = row + 1;
    }
}


//using for loop
#include <iostream>
using namespace std;

int main() {
    /*
    4 3 2 1
    4 3 2 1
    4 3 2 1
    4 3 2 1
    */

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Outer loop for rows
    for (int row = 1; row <= n; ++row) {
        // Inner loop for columns (printing from n to 1)
        for (int col = n; col >= 1; --col) {
            cout << col << " ";
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
