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

bool isSortedDecreasing(int values[], int size) {
    for (int i = 1; i < size; ++i) {
        if (values[i] > values[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Example usage:
    int arrIncreasing[] = { 1, 2, 3, 4, 5 }; // Example increasing array
    int arrDecreasing[] = { 5, 4, 3, 2, 1 }; // Example decreasing array
    int size = sizeof(arrIncreasing) / sizeof(arrIncreasing[0]); // Calculating size of array

    // Testing isSortedIncreasing
    cout << "Is sorted increasing? " << boolalpha << isSortedIncreasing(arrIncreasing, size) << endl;

    // Testing isSortedDecreasing
    cout << "Is sorted decreasing? " << boolalpha << isSortedDecreasing(arrDecreasing, size) << endl;

    return 0;
}
