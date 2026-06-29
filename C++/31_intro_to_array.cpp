#include <iostream>
using namespace std;

void updateArray(int arr[], int size) {
    arr[0] = 120; // modifies the original element directly in RAM
}


int main() {
    
    // Initialization Variances & The Zero-Fill Trick
    int first[3] = {5, 7, 11}; // Fully initialized array
    int second[5] = {2, 4};    // Partially initialized. Remainder index locations (2, 3, 4) are filled with 0.
    int third[10] = {0};       // The Zero-Fill Trick: Entire array is initialized cleanly to 0.

    // sizeof() length operations
    int myArr[10];
    int totalBytes = sizeof(myArr); // 40 (10 int * 4 bytes each)
    int singleIntBytes = sizeof(int); // returns 4
    int arrayLength = totalBytes / singleIntBytes; // 40 / 4 = 10 elements

    // passing arrays into functions
    int arr[3] = {1, 2, 3};
    updateArray(arr, 3);
    cout << arr[0] << endl; // prints 120 not 1
    
    return 0;

}