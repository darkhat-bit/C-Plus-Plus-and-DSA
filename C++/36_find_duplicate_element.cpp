#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
    int ans = 0;
    // x ^ x = 0
    // x ^ 0 = x
    for (int i = 0; i < size; i++) {
        ans ^= arr[i];
    }

    for (int i = 1; i < size; i++) {
        ans ^= i;
    }
    return ans;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 3};
    cout << "Duplicate element: " << findDuplicate(arr, 5) << endl;
    return 0;
}