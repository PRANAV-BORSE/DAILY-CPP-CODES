#include <iostream>
using namespace std;

// Computes n! (factorial of n) recursively
// Base case stops the recursion when n reaches 0 or 1
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! = 1 and 1! = 1
    }

    // Recursive step: n! = n * (n - 1)!
    return n * factorial(n - 1);
}

int main() {
    int n;

    cout << "Enter a non-negative integer (0 to 20): ";
    cin >> n;

    // Guard against negative inputs or overflow beyond 20! for 64-bit signed int
    if (n < 0 || n > 20) {
        cout << "Please enter a number between 0 and 20." << endl;
        return 1;
    }

    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    return 0;
}