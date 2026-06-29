#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) { cout << 0 << endl; return 0; }
    if (n == 1) { cout << 0 << " " << 1 << endl; return 0; }

    int prev2 = 0; // f(0)
    int prev1 = 1; // f(1)
    int curr = 0;

    for (int i = 2; i <= n; i++) {
        curr = prev2 + prev1;
        cout << prev2 << " ";
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev2 << " " << prev1 << endl;
    cout << "Fibonacci at index " << n << " = " << curr << endl;
    return 0;
}