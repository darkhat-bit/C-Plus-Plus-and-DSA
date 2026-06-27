#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int a = i++;
    int b = ++i;
    cout << i << endl;
    cout << a << endl;
    cout << b << endl;
    return 0;
}