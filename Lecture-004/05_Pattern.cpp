#include <iostream>
using namespace std;

int main() {
    /*
    1
    2 2
    3 3 3
    4 4 4 4
    */

    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    int row = 1;

    while(row <= n) {
        int col = 1;

        while(col <= row) {
            cout<<row<<" ";
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
    1
    2 2
    3 3 3
    4 4 4 4
    */

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Outer loop for rows
    for (int row = 1; row <= n; ++row) {
        // Inner loop for columns
        for (int col = 1; col <= row; ++col) {
            cout << row << " ";  // Print the row number
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}

