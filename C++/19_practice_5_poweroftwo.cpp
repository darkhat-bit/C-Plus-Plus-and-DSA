#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter integer to check: ";
    cin >> n;

    int ans = 1; 
    bool isPower = false;
    
    for (int i = 0; i <= 30; i++) {
        if (ans == n) {
            isPower = true;
            break;
        }
        if (ans < INT_MAX / 2) {
            ans = ans * 2;
        }
    }
    
    if (isPower) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}