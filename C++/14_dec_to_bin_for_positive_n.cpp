#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;

    int ans = 0;
    int base = 1;

    while (n != 0) {
        int bit = n & 1;
        ans = (bit * base) + ans;
        n >>= 1;
        base *= 10;
        cout << ans << " " << n << " " << base << endl;
    }

    cout << "Binary Output: " << ans << endl;
    return 0;
}