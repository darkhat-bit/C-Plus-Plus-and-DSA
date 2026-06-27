#include <iostream>
using namespace std;

int main() {

    // for (initialization; condition; update) {
    //     // Loop body
    // }

    int i = 1;
    for ( ; ; ) {
        if (i > 5) break; 
        cout << i << " ";
        i++;
    }
}