#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter base-10 integer: ";
    cin >> n;

    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }
    
    int m = n;
    int mask = 0;
    
    while (m != 0) {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    
    int ans = (~n) & mask;
    cout << "Bitwise complement: " << ans << endl;
    return 0;
}