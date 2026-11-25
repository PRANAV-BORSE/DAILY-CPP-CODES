#include <iostream>
#include <string>
using namespace std;

// Returns true if 'str' reads the same forward and backward
bool isPalindrome(const string& str) {
    int left = 0;
    int right = static_cast<int>(str.length()) - 1;

    // Compare characters moving inward from both ends
    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Mismatch found
        }
        left++;
        right--;
    }

    return true; // All matching pairs were equal
}

int main() {
    string word;

    cout << "Enter a word (lowercase, no spaces): ";
    cin >> word;

    if (isPalindrome(word)) {
        cout << "\"" << word << "\" is a Palindrome." << endl;
    } else {
        cout << "\"" << word << "\" is NOT a Palindrome." << endl;
    }

    return 0;
}