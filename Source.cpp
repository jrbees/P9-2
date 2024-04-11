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
    const int SIZE = 6;
    int testArray[SIZE];

    // Acquiring testing data for the array
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter integer #" << i << ": ";
        cin >> testArray[i];
    }

    // Testing isSortedIncreasing
    if (isSortedIncreasing(testArray, SIZE)) {
        cout << "The data are increasing." << endl;
    }
    else {
        cout << "The data are not increasing." << endl;
    }

    // Testing isSortedDecreasing
    if (isSortedDecreasing(testArray, SIZE)) {
        cout << "The data are decreasing." << endl;
    }
    else {
        cout << "The data are not decreasing." << endl;
    }

    // Testing hasAdjacentDuplicates
    if (hasAdjacentDuplicates(testArray, SIZE)) {
        cout << "The data has adjacent duplicates." << endl;
    }
    else {
        cout << "The data does not have adjacent duplicates." << endl;
    }

    // Testing hasDuplicates
    if (hasDuplicates(testArray, SIZE)) {
        cout << "The data has duplicates." << endl;
    }
    else {
        cout << "The data does not have duplicates." << endl;
    }

    return 0;
}
