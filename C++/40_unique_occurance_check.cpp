#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[], int size) {

    int freq[2001] = {0};
    for (int i = 0; i < size; i++) {
        freq[arr[i] + 1000]++;
    }

    bool freqCheck[1001] = {false};
    for (int i = 0; i < 2001; i++) {
        if (freq[i] > 0) {
            if (freqCheck[freq[i]]) {
                return false;
            }
            freqCheck[freq[i]] = true;
        }
    }
    return true;

}

int main() {
    int arr[6] = {1, 2, 2, 1, 1, 3};
    cout << boolalpha << uniqueOccurrences(arr, 6) << endl;
    return 0;
}