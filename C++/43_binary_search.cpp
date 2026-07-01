#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if  (target > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[7] = {1, 2, 3, 4, 6, 8, 9};
    int resultIndex = binarySearch(arr, 7, 6);
    cout << "Element found at index: " << resultIndex << endl;
    return 0;
}