#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements (max 100): ";
    cin >> n;

    // Basic input validation for fixed-size array
    if (n <= 0 || n > 100) {
        cout << "Please enter a size between 1 and 100." << endl;
        return 1;
    }

    int arr[100];

    // Read elements into the array
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize max and min with the first element
    int maxVal = arr[0];
    int minVal = arr[0];

    // Compare each remaining element against maxVal and minVal
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    cout << "Maximum element: " << maxVal << endl;
    cout << "Minimum element: " << minVal << endl;

    return 0;
}