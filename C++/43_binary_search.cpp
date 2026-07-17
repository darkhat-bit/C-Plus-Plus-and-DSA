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
    int arr[8] = {0, 1, 2, 5, 7, 10, 15, 16};
    int resultIndex = binarySearch(arr, 8, 7);
    cout << "Element found at index: " << resultIndex << endl;
    return 0;
}