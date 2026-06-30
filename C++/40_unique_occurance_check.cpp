#include <iostream>
using namespace std;

bool uniqueOccurance(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[7] = {1, 2, 5, 3, 7, 9, 6};
    cout << boolalpha;
    cout << uniqueOccurance(arr, 7);
    return 0;
}