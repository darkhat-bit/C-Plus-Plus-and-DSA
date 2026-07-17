#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
using namespace std;

void demonstrateStaticArray() {
    array<int, 4> basicArray = {1, 2, 3, 4};
    cout << "Size: " << basicArray.size() << endl;
    cout << "Element at Index 2: " << basicArray.at(2) << endl;
    cout << "First Element: " << basicArray.front() << endl;
    cout << "Last Element: " << basicArray.back() << endl << endl;
}

void demonstrateDynamicVector() {
    vector<int> adaptiveVector;

    adaptiveVector.push_back(10);
    cout << "Size: " << adaptiveVector.size() << " | Capacity: " << adaptiveVector.capacity() << endl;
    
    adaptiveVector.push_back(20);
    cout << "Size: " << adaptiveVector.size() << " | Capacity: " << adaptiveVector.capacity() << endl;
    
    adaptiveVector.push_back(30);
    cout << "Size: " << adaptiveVector.size() << " | Capacity: " << adaptiveVector.capacity() << endl;

    adaptiveVector.pop_back();
    cout << "After pop_back -> Size: " << adaptiveVector.size() << " | Capacity: " << adaptiveVector.capacity() << endl << endl;
}

void demonstrateDequeAndList() {
    deque<int> doubleEndedQueue;
    doubleEndedQueue.push_back(100);
    doubleEndedQueue.push_front(200);

    cout << "Front item: " << doubleEndedQueue.front() << " | Back item: " << doubleEndedQueue.back() << endl;

    list<int> doublyLinkedList;
    doublyLinkedList.push_back(10);
    doublyLinkedList.push_front(20);

    cout << "First item: " << doublyLinkedList.front() << " | Back item: " << doublyLinkedList.back() << endl;
    doublyLinkedList.pop_back();
    cout << "First item: " << doublyLinkedList.front() << " | Back item: " << doublyLinkedList.back() << endl;
    doublyLinkedList.pop_front();
    cout << "First item: " << doublyLinkedList.front() << " | Back item: " << doublyLinkedList.back() << endl;
}

int main() {
    demonstrateStaticArray();
    demonstrateDynamicVector();
    demonstrateDequeAndList();
    return 0;
}