#include <iostream>

using namespace std;

// (a) Read an array of n numbers.
void readArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

// (b) Display an array.
void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ' ';
        }
    }
    cout << '\n';
}

// (c) Search for a number. Returns its index, or -1 when it is not found.
int searchNumber(const int arr[], int size, int target, int start = 0) {
    for (int i = start; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// (d) Replace every occurrence of oldValue with newValue using searchNumber.
bool replaceNumber(int arr[], int size, int oldValue, int newValue) {
    bool replaced = false;
    int start = 0;

    while (start < size) {
        int index = searchNumber(arr, size, oldValue, start);
        if (index == -1) {
            break;
        }
        arr[index] = newValue;
        replaced = true;
        start = index + 1;
    }

    return replaced;
}

// (e) Swap two numbers.
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// (f) Sort an array in ascending order using swapNumbers (bubble sort).
void sortArray(int arr[], int size) {
    for (int pass = 0; pass < size - 1; ++pass) {
        for (int i = 0; i < size - 1 - pass; ++i) {
            if (arr[i] > arr[i + 1]) {
                swapNumbers(arr[i], arr[i + 1]);
            }
        }
    }
}

void testArray(const char *name, int arr[], int size) {
    cout << "\n--- " << name << " (" << size << " numbers) ---\n";

    cout << "Enter " << size << " numbers: ";
    readArray(arr, size);

    cout << "Array: ";
    displayArray(arr, size);

    int target;
    cout << "Enter a number to search for: ";
    cin >> target;
    int index = searchNumber(arr, size, target);
    if (index == -1) {
        cout << target << " was not found.\n";
    } else {
        cout << target << " was found at index " << index << ".\n";
    }

    int oldValue, newValue;
    cout << "Enter a value to replace and its replacement: ";
    cin >> oldValue >> newValue;
    if (replaceNumber(arr, size, oldValue, newValue)) {
        cout << "After replacement: ";
        displayArray(arr, size);
    } else {
        cout << "Nothing was replaced.\n";
    }

    int firstIndex, secondIndex;
    cout << "Enter two indices to swap: ";
    cin >> firstIndex >> secondIndex;
    if (firstIndex >= 0 && firstIndex < size &&
        secondIndex >= 0 && secondIndex < size) {
        swapNumbers(arr[firstIndex], arr[secondIndex]);
        cout << "After swapping: ";
        displayArray(arr, size);
    } else {
        cout << "Invalid indices.\n";
    }

    sortArray(arr, size);
    cout << "After sorting: ";
    displayArray(arr, size);
}

int main() {
    int first[5];
    int second[6];
    int third[7];

    testArray("First array", first, 5);
    testArray("Second array", second, 6);
    testArray("Third array", third, 7);

    return 0;
}
