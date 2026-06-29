#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int num100 = 0, num50 = 0, num20 = 0, num1 = 0;

    switch (1) {
        case 1:
            num100 = amount / 100;
            amount %= 100;
            cout << "100 Rupee Notes: " << num100 << endl;
        case 2:
            num50 = amount / 50;
            amount %= 50;
            cout << "50 Rupee Notes: " << num50 << endl;
        case 3:
            num20 = amount / 20;
            amount %= 20;
            cout << "20 Rupee Notes: " << num20 << endl;
        case 4:
            num1 = amount / 1;
            amount %= 1;
            cout << "1 Rupee Notes: " << num1 << endl;
    }
    return 0;
}