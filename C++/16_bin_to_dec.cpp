#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Binary Stream: ";
    cin >> n;

    int ans = 0;
    int base = 1;

    while (n != 0) {
        int digit = n % 10;
        if (digit == 1) {
            ans = ans + base;
        }
        n = n / 10;
        base = base * 2;
    }

    cout << "Decimal Output: " << ans << endl;
    return 0;
}