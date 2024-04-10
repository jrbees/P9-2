//initilaized 
#include <iostream>
using namespace std;

bool isSortedIncreasing(int values[], int size) {
    for (int i = 1; i < size; ++i) {
        if (values[i] < values[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Example usage:
    int arr[] = { 1, 2, 3, 4, 5 }; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculating size of array

    // Testing isSortedIncreasing
    cout << "Is sorted increasing? " << boolalpha << isSortedIncreasing(arr, size) << endl;

    return 0;
}

