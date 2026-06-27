#include <iostream>
using namespace std;

int main() {

    // The Pyramid Grid Matrix
    int n1;
    cout << "Enter N for Pyramid Grid Matrix: ";
    cin >> n1;
    int i1 = 1;
    while (i1 <= n1) {
        int space1 = n1 - i1;
        while (space1 > 0) {
            cout << "  ";
            space1--;
        }
        int j1 = 1;
        while (j1 <= i1) {
            cout << j1 << " ";
            j1++;
        }
        int k1 = i1 - 1;
        while (k1 >= 1) {
            cout << k1 << " ";
            k1--;
        }
        cout << endl;
        i1++;
    }


    // The Dabang Pattern
    int n2;
    cout << "Enter N for Ultimate Dabang Pattern: ";
    cin >> n2;
    int i2 = 1;
    while (i2 <= n2) {
        int j2 = 1;
        while (j2 <= n2 - i2 + 1) {
            cout << j2 << " ";
            j2++;
        }
        int stars = 2 * (i2 - 1);
        while (stars > 0) {
            cout << "* ";
            stars--;
        }
        int k2 = n2 - i2 + 1;
        while (k2 >= 1) {
            cout << k2 << " ";
            k2--;
        }
        cout << endl;
        i2++;
    }

}