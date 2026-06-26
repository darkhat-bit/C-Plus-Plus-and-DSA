#include <iostream>
using namespace std;

int main() {

    // Square Star Grid
    cout << "Enter any number: ";
    int x;
    cin >> x;
    int i = 1;
    while (i<=x) {
        int j = 1;
        while (j<=x) {
            cout << "* ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }


    // Row Number Grid
    cout << "Enter any number: ";
    int n;
    cin >> n;
    int a = 1;
    while (a<=n) {
        int b = 1;
        while (b<=n) {
            cout << a << " ";
            b += 1;
        }
        cout << endl;
        a += 1;
    }

    return 0;
}