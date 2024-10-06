#include <iostream>
using namespace std;

int main() {
    /*
    *
    * *
    * * *
    * * * *
    */

    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    int row = 1;

    while(row <= n) {
        int col = 1;

        while(col <= row) {
            cout<<"* ";
            col = col + 1;
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
    *
    * *
    * * *
    * * * *
    */

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Outer loop for rows
    for (int row = 1; row <= n; ++row) {
        // Inner loop for columns
        for (int col = 1; col <= row; ++col) {
            cout << "* ";  // Print asterisk followed by a space
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
