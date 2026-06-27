#include <iostream>
using namespace std;

int main() {

    // The Uniform Character Row Array
    int n1;
    cout << "Enter N for Uniform Row Char Array: ";
    cin >> n1;
    int i1 = 1;
    while (i1 <= n1) {
        int j1 = 1;
        while (j1 <= n1) {
            char ch = 'A' + i1 - 1; 
            cout << ch << " ";
            j1++;
        }
        cout << endl;
        i1++;
    }


    // Interspersed Diagonal Character Grid
    int n2;
    cout << "Enter N for Interspersed Diagonal Char Grid: ";
    cin >> n2;
    int i2 = 1;
    while (i2 <= n2) {
        int j2 = 1;
        while (j2 <= n2) {
            char ch = 'A' + i2 + j2 - 2;
            cout << ch << " ";
            j2++;
        }
        cout << endl;
        i2++;
    }


    // Absolute Reverse Character Sequence
    int n3;
    cout << "Enter N for Absolute Reverse Char Sequence: ";
    cin >> n3;
    int i3 = 1;
    while (i3 <= n3) {
        int j3 = 1;
        char startChar = 'A' + n3 - i3; 
        while (j3 <= i3) {
            cout << startChar << " ";
            startChar++; 
            j3++;
        }
        cout << endl;
        i3++;
    }


    // Mirrored Floating Right-Triangle
    int n4;
    cout << "Enter N for Mirrored Right Triangle: ";
    cin >> n4;
    int i4 = 1;
    while (i4 <= n4) {
        int space1 = n4 - i4;
        while (space1 > 0) {
            cout << "  "; 
            space1--;
        }
        int j4 = 1;
        while (j4 <= i4) {
            cout << "* ";
            j4++;
        }
        cout << endl;
        i4++;
    }


    // Inverse Shifting Number Triangle
    int n5;
    cout << "Enter N for Inverse Shifting Number Triangle: ";
    cin >> n5;
    int i5 = 1;
    while (i5 <= n5) {
        int space2 = i5 - 1;
        while (space2 > 0) {
            cout << "  ";
            space2--;
        }
        int j5 = i5;
        while (j5 <= n5) {
            cout << j5 << " ";
            j5++;
        }
        cout << endl;
        i5++;
    }

}