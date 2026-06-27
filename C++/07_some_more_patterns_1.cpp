#include <iostream>
#include <iomanip> 
using namespace std;

int main() {

    // The Decreasing Column Matrix
    int n1;
    cout << "Enter N: ";
    cin >> n1;
    int i1 = 1;
    while (i1 <= n1) {
        int j1 = 1;
        while (j1 <= n1) {
            cout << n1-j1+1 << " ";
            j1 += 1;
        }
        cout << endl;
        i1 += 1;
    }


    // The Linear Continuous Counting Grid
    int size;
    cout << "Enter the size of the square: ";
    cin >> size;
    int count1 = 1;
    int i2 = 1;
    while (i2 <= size) {
        int j2 = 1;
        while (j2 <= size){
            cout << setw(4) << count1;
            count1++;
            j2 += 1;
        }
        cout << endl;
        i2 += 1;
    }


    // The Standard Triangle Grid
    int n3;
    cout << "Enter the triangle size: ";
    cin >> n3;
    int i3 = 1;
    while (i3 <= n3) {
        int j3 = 1;
        while (j3 <= i3) {
            cout << "*" << " ";
            j3 += 1;
        }
        cout << endl;
        i3 += 1;
    }


    // The Continuous Row-Value Triangle
    int n4;
    int count2 = 1;
    cout << "Enter the triangle size: ";
    cin >> n4;
    int i4 = 1;
    while (i4 <= n4) {
        int j4 = 1;
        while (j4 <= i4) {
            cout << count2 << " ";
            count2 += 1;
            j4 += 1;
        }
        cout << endl;
        i4 += 1;
    }



    // The Row-Offset Triangle
    int n5;
    cout << "Enter the triangle size: ";
    cin >> n5;
    int i5 = 1;
    while (i5 <= n5) {
        int j5 = 1;
        while (j5 <= i5) {
            cout << i5+j5-1 << " ";
            j5 += 1;
        }
        cout << endl;
        i5 += 1;
    }



    // The Reverse Triangular Offset Array
    int n6;
    cout << "Enter the triangle size: ";
    cin >> n6;
    int i6 = 1;
    while (i6 <= n6) {
        int j6 = 1;
        while (j6 <= i6) {
            cout << i6-j6+1 << " ";
            j6 += 1;
        }
        cout << endl;
        i6 += 1;
    }




    return 0;


}