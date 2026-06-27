#include <iostream>
using namespace std;

int main() {
    int a = 2; // 0010
    int b = 3; // 0011

    cout << (a & b) << endl; // 0010 - 2
    cout << (a | b) << endl; // 0011 - 3
    cout << (~a) << endl; // 1100(but opposite) - -3
    cout << (a ^ b) << endl; // 0001 - 1
    cout << (a<<1) << endl; // 0100 - 4
    cout << (b>>1) << endl; // 0001 - 1

    return 0;

}