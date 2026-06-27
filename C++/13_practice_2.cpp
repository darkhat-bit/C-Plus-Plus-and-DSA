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


    // Sequence product and sum difference
    int N1;
    cout << "Enter N: ";
    cin >> N1;
    int prod1 = 1;
    int sum1 = 0;
    for (int i3 = 1; i3 <= N1; i3++) {
        prod1 *= i3;
        sum1 += i3;
    }
    int result1 = prod1 - sum1;
    cout << "Difference between the prod and sum of integer N: " << result1 << endl;
    


    // difference between the Product and the Sum of digits of an integer input N
    int N2;
    cout << "Enter N: ";
    cin >> N2;

    int prod2 = 1;
    int sum2 = 0;
    int temp = N2; 

    while (temp > 0) {
        int lastDigit = temp % 10;
        prod2 *= lastDigit;
        sum2 += lastDigit;
        temp /= 10;
    }
    int result2 = prod2 - sum2;
    cout << "Difference between the product and sum of digits of N: " << result2 << endl;

    return 0;

}