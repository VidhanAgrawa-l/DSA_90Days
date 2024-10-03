#include <iostream>
using namespace std;

int main() {
    /*
        * * * *
        * * * *
        * * * *
        * * * *
    */

    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    int i = 1;

    while(i <= n) {    // while har row ke liye chalega -> i =1 hoga toh firts row ke liye ,similarly for all
        
        int j = 1;      // column ke liye ek variable j le liya
        while(j<=n) {
            cout<<"* ";
            j = j + 1;  // j bada do , move from c1->c2->c3->c4 ;c=column
        }

        cout<<endl; // har row print ke baad enter bhi toh mrna hai 
        i = i + 1; // j ke baad ,fir i bada do to print in next row
    }
}

//using for loop

#include <iostream>
using namespace std;

int main() {
    /*
        * * * *
        * * * *
        * * * *
        * * * *
    */

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; ++i) {
        // Inner loop for columns
        for (int j = 1; j <= n; ++j) {
            cout << "* ";  // Print an asterisk followed by a space
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
