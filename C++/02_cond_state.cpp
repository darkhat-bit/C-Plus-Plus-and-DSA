#include <iostream>
using namespace std;

int main() {
    // Single if / if-else
    int a = 101;
    if (a > 0) {
        cout << "Positive" << endl;
    } else {
        cout << "Negative" << endl;
    }

    // Nested if-else
    if (a > 0) {
        if (a > 100) { cout << "Large Positive" << endl; }
        else { cout << "Small Positive" << endl; }
    }

    // The if-else-if Ladder
    if (a > 0) {
        cout << "Positive" << endl;
    } else if (a < 0) {
        cout << "Negative << endl";
    } else {
        cout << "Zero << endl"; // Default catch-all
    }

    return 0;

}