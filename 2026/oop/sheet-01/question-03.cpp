#include <iostream>

using namespace std;

// (a) Read an array of n numbers.
void readArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

// Display an array on one line.
void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ' ';
        }
    }
    cout << '\n';
}

// (b) Display an array in a list format.
void displayList(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ". " << arr[i] << '\n';
    }
}

// (c) Reverse the elements of an array in place.
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

// (d) Count how many times target appears in the array.
int countOccurrences(const int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            ++count;
        }
    }
    return count;
}

// (e) Build a prefix-sum array: result[i] = arr[0] + ... + arr[i].
void buildPrefixSums(const int arr[], int size, int result[]) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
        result[i] = sum;
    }
}

void testArray(const char *name, int arr[], int prefix[], int size) {
    cout << "\n--- " << name << " (" << size << " numbers) ---\n";

    cout << "Enter " << size << " numbers: ";
    readArray(arr, size);

    cout << "List format:\n";
    displayList(arr, size);

    int target;
    cout << "Enter a number to count: ";
    cin >> target;
    cout << target << " appears " << countOccurrences(arr, size, target)
         << " time(s).\n";

    buildPrefixSums(arr, size, prefix);
    cout << "Prefix sums: ";
    displayArray(prefix, size);

    reverseArray(arr, size);
    cout << "After reversing: ";
    displayArray(arr, size);
}

int main() {
    int first[5];
    int second[6];
    int firstPrefix[5];
    int secondPrefix[6];

    testArray("First array", first, firstPrefix, 5);
    testArray("Second array", second, secondPrefix, 6);

    return 0;
}
