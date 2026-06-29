#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int size) {
    int maxVal = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (num[i] > maxVal) {
            maxVal = num[i];
        }
    }
    return maxVal;
}

int getMin(int num[], int size) {
    int minVal = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (num[i] < minVal) {
            minVal = num[i];
        }
    }
    return minVal;

}

int main() {
    int size;
    cout << "Enter array capacity size: ";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Max value is: " << getMax(arr, size) << endl;
    cout << "Min value is: " << getMin(arr, size) << endl;
    return 0;
}