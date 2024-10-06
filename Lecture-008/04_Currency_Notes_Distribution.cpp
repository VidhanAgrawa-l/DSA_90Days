#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int hundredNotes = 0, fiftyNotes = 0, tenNotes = 0, oneNotes = 0;

    switch (1) {
        case 1:
            hundredNotes = amount / 100;
            amount = amount - hundredNotes * 100;  // Remaining amount after 100 rupee notes
        case 2:
            fiftyNotes = amount / 50;
            amount = amount - fiftyNotes * 50;  // Remaining amount after 50 rupee notes
        case 3:
            tenNotes = amount / 10;
            amount = amount - tenNotes * 10;  // Remaining amount after 10 rupee notes
        case 4:
            oneNotes = amount / 1;
            amount = amount - oneNotes * 1;  // Remaining amount after 1 rupee notes
    }

    cout << "100 Rs notes: " << hundredNotes << endl;
    cout << "50 Rs notes: " << fiftyNotes << endl;
    cout << "10 Rs notes: " << tenNotes << endl;
    cout << "1 Rs notes: " << oneNotes << endl;

    return 0;
}



// ek aur versionn

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int hundredNotes = 0, fiftyNotes = 0, tenNotes = 0, oneNotes = 0;

    switch (1) {
        case 1:
            hundredNotes = amount / 100;
            amount %= 100; // Remainder after 100 rupee notes
        case 2:
            fiftyNotes = amount / 50;
            amount %= 50; // Remainder after 50 rupee notes
        case 3:
            tenNotes = amount / 10;
            amount %= 10; // Remainder after 10 rupee notes
        case 4:
            oneNotes = amount / 1;
            amount %= 1; // Remainder after 1 rupee notes
    }

    cout << "100 Rs notes: " << hundredNotes << endl;
    cout << "50 Rs notes: " << fiftyNotes << endl;
    cout << "10 Rs notes: " << tenNotes << endl;
    cout << "1 Rs notes: " << oneNotes << endl;

    return 0;
}
