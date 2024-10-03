#include <iostream>
using namespace std;

int main() {
    /*
        1 1 1 1
        2 2 2 2
        3 3 3 3
        4 4 4 4
    */

    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    int i = 1;

    while(i <= n) {
        int j = 1;

        while(j<=n) {
            cout<<i<<" ";
            j = j + 1;
        }

        cout<<endl;
        i = i + 1;
    }
}

//using for loop

#include <iostream>
using namespace std;

int main() {
    /*
        1 1 1 1
        2 2 2 2
        3 3 3 3
        4 4 4 4
    */

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; ++i) {
        // Inner loop for columns
        for (int j = 1; j <= n; ++j) {
            cout << i << " ";  // Print the current row number
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
