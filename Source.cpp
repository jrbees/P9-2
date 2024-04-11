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

bool hasAdjacentDuplicates(int values[], int size) {
    for (int i = 1; i < size; ++i) {
        if (values[i] == values[i - 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    // Example usage:
    int arrWithAdjacentDuplicates[] = { 1, 2, 2, 4, 5 }; // Example array with adjacent duplicates
    int arrWithoutAdjacentDuplicates[] = { 1, 2, 3, 4, 5 }; // Example array without adjacent duplicates
    int size = sizeof(arrWithAdjacentDuplicates) / sizeof(arrWithAdjacentDuplicates[0]); // Calculating size of array

    // Testing isSortedIncreasing
    cout << "Is sorted increasing? " << boolalpha << isSortedIncreasing(arrWithAdjacentDuplicates, size) << endl;

    // Testing isSortedDecreasing
    cout << "Is sorted decreasing? " << boolalpha << isSortedDecreasing(arrWithAdjacentDuplicates, size) << endl;

    // Testing hasAdjacentDuplicates
    cout << "Has adjacent duplicates? " << boolalpha << hasAdjacentDuplicates(arrWithAdjacentDuplicates, size) << endl;
    cout << "Has adjacent duplicates? " << boolalpha << hasAdjacentDuplicates(arrWithoutAdjacentDuplicates, size) << endl;

    return 0;
}
