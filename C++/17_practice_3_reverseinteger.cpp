#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter integer to reverse: ";
    cin >> n;

    int trailingZeros = 0;
    int temp = n;
    while (temp % 10 == 0 && temp != 0) {
        trailingZeros++;
        temp /= 10;
    }

    int ans = 0;
    while (n != 0) {
        int digit = n % 10;

        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
            cout << 0 << endl;
            return 0;
        }

        ans = (ans * 10) + digit;
        n /= 10;
    }

    for (int i = 0; i < trailingZeros; i++) {
        cout << "0";
    }
    cout << ans << endl;

    return 0;
}