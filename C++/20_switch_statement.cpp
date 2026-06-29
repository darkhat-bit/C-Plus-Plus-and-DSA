#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent! Perfect execution." << endl;
            break;
        case 'B':
            cout << "Good job! Solid work." << endl;
            break;
        case 'C':
            cout << "Passed! Room to grow." << endl;
            break;
        case 'D':
            cout << "Passed poorly. Needs improvement." << endl;
            break;
        case 'F':
            cout << "Failed. Please seek assistance." << endl;
            break;
        default:
            cout << "Error: Invalid grade entered." << endl;
    }
    return 0;
}
