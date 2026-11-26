#include <iostream>
using namespace std;

// Searches for 'target' in a sorted array of size 'n'.
// Returns the index if found, or -1 if not found.
int binarySearch(const int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        // Avoids integer overflow compared to (low + high) / 2
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found at index 'mid'
        } else if (arr[mid] < target) {
            low = mid + 1; // Search the right half
        } else {
            high = mid - 1; // Search the left half
        }
    }

    return -1; // Target is not present in the array
}

int main() {
    int n, target;

    cout << "Enter number of elements (max 100): ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Please enter a size between 1 and 100." << endl;
        return 1;
    }

    int arr[100];

    // Binary search requires the array elements to be in ascending sorted order
    cout << "Enter " << n << " sorted integers (ascending): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    int index = binarySearch(arr, n, target);

    if (index != -1) {
        cout << "Element " << target << " found at index " << index << "." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}