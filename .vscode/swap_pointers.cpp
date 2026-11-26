#include <iostream>
using namespace std;

// Swaps the actual integer values in memory using pointers
void swapNumbers(int* a, int* b) {
    int temp = *a; // Dereference 'a' to get the value it points to
    *a = *b;       // Store the value pointed to by 'b' into 'a'
    *b = temp;     // Store 'temp' into 'b'
}

int main() {
    int x, y;

    cout << "Enter first number (x): ";
    cin >> x;

    cout << "Enter second number (y): ";
    cin >> y;

    cout << "\nBefore swap: x = " << x << ", y = " << y << endl;

    // Pass the memory addresses of x and y using '&'
    swapNumbers(&x, &y);

    cout << "After swap:  x = " << x << ", y = " << y << endl;

    return 0;
}