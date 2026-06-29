#include <iostream>
using namespace std;

void dummy(int n) {
    n++;
    cout << "n inside function scope: " << n << endl;
}

int main() {
    int n = 15;
    dummy(n);
    cout << "n inside main function scope: " << n << endl;
    return 0;
}