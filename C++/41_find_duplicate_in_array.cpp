#include <iostream>
#include <cmath>
using namespace std;

void findAllDuplicates(int arr[], int size) {
    cout << "Duplicates: ";
    for (int i = 0; i < size; i++) {
        int index = abs(arr[i]) - 1;
        if (arr[index] < 0) {
            cout << index + 1 << " ";
        } else {
            arr[index] = -arr[index];
        }
    }
    cout << endl;
}

int main() {
    int arr[8] = {4, 3, 2, 7, 8, 2, 3, 1};
    findAllDuplicates(arr, 8);
    return 0;
}