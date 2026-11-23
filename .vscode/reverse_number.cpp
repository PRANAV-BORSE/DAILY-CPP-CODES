#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    cout << "Enter a multi-digit integer: ";
    cin >> num;

    int original = num; // Save original value to display at the end

    // Extract digits from right to left until num becomes 0
    while (num != 0) {
        int lastDigit = num % 10;              // Gets the last digit
        reversed = (reversed * 10) + lastDigit; // Shifts existing digits left and adds lastDigit
        num = num / 10;                         // Removes the last digit from num
    }

    cout << "Reverse of " << original << " is: " << reversed << endl;

    return 0;
}