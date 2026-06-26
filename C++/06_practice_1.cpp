#include <iostream>
using namespace std;

int main() {
    // Character Classifier Matrix
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "This is lowercase" << endl;
    } 
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "This is uppercase" << endl;
    } 
    else if (ch >= '0' && ch <= '9') {
        cout << "This is numeric" << endl;
    } 
    else {
        cout << "This is a special character" << endl;
    }


    // Column Number Grid
    int n;
    cout << "Enter N: ";
    cin >> n;

    int i = 1; 
    while (i <= n) {
        
        int j = 1; 
        while (j <= n) {
            cout << j << " "; 
            j = j + 1;
        }
        
        cout << endl; 
        i = i + 1;
    }

    return 0;
}

