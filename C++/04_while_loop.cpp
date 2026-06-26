#include <iostream>
using namespace std;

int main() {
    cout << "Enter any number: ";
    int x;
    cin >> x;
    int i = 1;
    while (i<=x) {
        cout << i << endl;
        i += 1;
    }

    return 0;
}