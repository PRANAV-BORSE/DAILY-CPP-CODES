#include <iostream>
using namespace std;

// Function to check whether a given number is prime
bool isPrime(int n) {
    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        return false;
    }

    // Only check divisors up to i * i <= n (equivalent to sqrt(n))
    // because if n has a factor larger than sqrt(n), the paired factor is smaller
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Found a divisor, so not prime
        }
    }

    return true; // No divisors found
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a Prime number." << endl;
    } else {
        cout << num << " is NOT a Prime number." << endl;
    }

    return 0;
}