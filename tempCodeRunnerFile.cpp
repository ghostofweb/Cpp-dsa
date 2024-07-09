#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int result = -1; // Initialize result to indicate key not found

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            result = mid; // Update result but keep searching for the first occurrence
            end = mid - 1;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return result;
}

int lastOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int result = -1; // Initialize result to indicate key not found

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            result = mid; // Update result but keep searching for the last occurrence
            start = mid + 1;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return result;
}

int countOccurrences(int arr[], int size, int key) {
    int first = firstOccurrence(arr, size, key);
    int last = lastOccurrence(arr, size, key);

    if (first == -1 || last == -1) {
        return 0; // Key not found, return 0 occurrences
    }

    return last - first + 1;
}

int main() {
    int arr[7] = {1, 2, 3, 3, 3, 3, 5};
    int key = 3;
    int occurrences = countOccurrences(arr, 7, key);
    cout << "Number of occurrences of " << key << " in the array: " << occurrences << endl;

    return 0;
}
