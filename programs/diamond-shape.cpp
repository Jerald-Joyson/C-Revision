// -----*
// ----*-*
// ---*---*
// --*-----*
// -*-------*
// *---------*
// -*-------*
// --*-----*
// ---*---*
// ----*-*
// -----*


#include <iostream>
using namespace std;

int main() {
    int n = 6; // Total number of rows for the top half

    // Print the top half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "-";
        }
        // Print star and spaces
        cout << "*";
        for (int j = 1; j < 2 * (i - 1); j++) {
            cout << "-";
        }
        // Print star for the second half (avoid for first row)
        if (i > 1) {
            cout << "*";
        }
        cout << endl;
    }

    // Print the bottom half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "-";
        }
        // Print star and spaces
        cout << "*";
        for (int j = 1; j < 2 * (i - 1); j++) {
            cout << "-";
        }
        // Print star for the second half (avoid for last row)
        if (i > 1) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
