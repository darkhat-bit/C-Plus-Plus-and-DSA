#include <iostream>
using namespace std;

int main() {
    
    // The Fibonacci Sequence Generator
    int n1;
    cout << "Enter the value: ";
    cin >> n1;
    int a1 = 0;
    int b1 = 1;
    cout << a1 << " " << b1 << " ";
    for (int i1 = 1; i1 <= n1-2; i1++) {
        int nextNumber = a1 + b1;
        cout << nextNumber << " ";
        a1 = b1;
        b1 = nextNumber;
    }


    // Direct Prime Number Checker
    int n2;
    cout << endl << "Enter N to check is it a prime number: ";
    cin >> n2;
    bool isPrime = true;

    if (n1 <= 1) isPrime = false;

    for (int i2 = 2; i2 < n2; i2++) {
        if (n2 % i2 == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) cout << "Prime Number" << endl;
    else cout << "Not a Prime Number" << endl;


    // difference between the Product and the Sum of digits of an integer input N
    int N;
    cout << "Enter N: ";
    cin >> N;
    int prod = 1;
    int sum = 0;
    for (int i3 = 1; i3 <= N; i3++) {
        prod *= i3;
        sum += i3;
    }
    int result = prod - sum;
    cout << "Difference between the prod and sum of integer N: " << result << endl;
    

    return 0;

}