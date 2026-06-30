#include <iostream>
using namespace std;

void tripletSum(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    cout << "Triplet: " << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                }
            }
        }
    }
}

int main() {
    int arr[5] = {1, 5, 3, 4, 5};
    tripletSum(arr, 5, 12);
    return 0;
}