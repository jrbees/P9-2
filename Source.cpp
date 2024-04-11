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

bool hasDuplicates(int values[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (values[i] == values[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    // Example usage:
    int arrWithDuplicates[] = { 1, 2, 2, 4, 5 }; // Example array with duplicates
    int arrWithoutDuplicates[] = { 1, 2, 3, 4, 5 }; // Example array without duplicates
    int size = sizeof(arrWithDuplicates) / sizeof(arrWithDuplicates[0]); // Calculating size of array

    // Testing isSortedIncreasing
    cout << "Is sorted increasing? " << boolalpha << isSortedIncreasing(arrWithDuplicates, size) << endl;

    // Testing isSortedDecreasing
    cout << "Is sorted decreasing? " << boolalpha << isSortedDecreasing(arrWithDuplicates, size) << endl;

    // Testing hasAdjacentDuplicates
    cout << "Has adjacent duplicates? " << boolalpha << hasAdjacentDuplicates(arrWithDuplicates, size) << endl;

    // Testing hasDuplicates true and false
    cout << "Has duplicates? " << boolalpha << hasDuplicates(arrWithDuplicates, size) << endl;
    cout << "Has duplicates? " << boolalpha << hasDuplicates(arrWithoutDuplicates, size) << endl;

    return 0;
}
