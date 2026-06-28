#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Negative Decimal Number: ";
    cin >> n;

    unsigned int mask = 1 << 31;

    cout << "Raw Hardware Bits: ";
    for (int i = 0; i < 32; i++) {
        if ((n & mask) == 0) {
            cout << "0";
        } else {
            cout << "1";
        }
        mask = mask >> 1;
    }
    cout << endl;

    return 0;
}