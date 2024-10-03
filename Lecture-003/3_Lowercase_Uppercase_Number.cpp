#include <iostream>
using namespace std;

int main() {
    char ch;
    // HW Quuestion tha 
    // amazing this is that ki ch>='A' && ch<='z' se aapan A to Z dekh skte hai
    cout<<"Enter the character : ";
    cin>>ch;

    if(ch>='A' && ch<='Z') {
        cout<<"Uppercase Character !"<<endl;
    } else if(ch>='a' && ch<='z') {
        cout<<"Lowercase Character !"<<endl;
    } else {
        cout<<"Number !"<<endl;
    }
}


// ALTERANTIVE SOLUTION-1


#include <iostream>
using namespace std;

// Function to check the type of character
void checkCharacterType(char ch) {
    if (isupper(ch)) {  // Using isupper() to check if it's an uppercase letter
        cout << "Uppercase Character!" << endl;
    } else if (islower(ch)) {  // Using islower() to check if it's a lowercase letter
        cout << "Lowercase Character!" << endl;
    } else if (isdigit(ch)) {  // Using isdigit() to check if it's a digit
        cout << "Number!" << endl;
    } else {
        cout << "Special Character!" << endl;  // Handles other characters
    }
}

int main() {
    char ch;

    // Input the character
    cout << "Enter the character: ";
    cin >> ch;

    // Function call to check the character type
    checkCharacterType(ch);

    return 0;
}


// ALTERANTIVE SOLUTION-2

#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input the character
    cout << "Enter the character: ";
    cin >> ch;

    // Using switch-case to handle ranges
    switch (ch) {
        // For uppercase letters
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G':
        case 'H': case 'I': case 'J': case 'K': case 'L': case 'M': case 'N':
        case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U':
        case 'V': case 'W': case 'X': case 'Y': case 'Z':
            cout << "Uppercase Character!" << endl;
            break;

        // For lowercase letters
        case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g':
        case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n':
        case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u':
        case 'v': case 'w': case 'x': case 'y': case 'z':
            cout << "Lowercase Character!" << endl;
            break;

        // For digits
        case '0': case '1': case '2': case '3': case '4': case '5':
        case '6': case '7': case '8': case '9':
            cout << "Number!" << endl;
            break;

        // Default case for special characters
        default:
            cout << "Special Character!" << endl;
    }

    return 0;
}

