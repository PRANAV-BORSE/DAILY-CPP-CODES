#include <iostream> // Required for cin and cout
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    // The modulo operator (%) gives the remainder after division by 2.
    // If the remainder is 0, the number is even; otherwise, it is odd.
    if (num % 2 == 0) {
        cout << num << " is an Even number." << endl;
    } else {
        cout << num << " is an Odd number." << endl;
    }

    return 0;
}