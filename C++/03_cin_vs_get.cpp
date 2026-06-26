#include <iostream>
using namespace std;

int main() {
    
    cout << "Press any single key (e.g., Spacebar, Enter, Tab, or a letter)" << endl;
    int x = cin.get();

    cout << "Raw Integer (ASCII Value): " << x << endl;

    if (x == 32) {
        cout << "Spacebar" << endl;
    } else if (x == 10) {
        cout << "Newline" << endl;
    } else if (x == 9) {
        cout << "Horizontal Tab" << endl;
    } else {
        cout << static_cast<char>(x) << endl;
    }

    return 0;

}