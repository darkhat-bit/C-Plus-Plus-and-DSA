#include <iostream>
using namespace std;

bool searchElementStatus(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

int searchElementValue(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element key to search for: ";
    cin >> key;

    bool found = searchElementStatus(arr, size, key);
    if (found) {
        cout << "Element found inside array at index " << searchElementValue(arr, size, key) << endl;
    } else {
        cout << "Element not found inside array" << endl;
    }
    return 0;
}