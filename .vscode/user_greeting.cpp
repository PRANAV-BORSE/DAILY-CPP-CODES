#include <iostream> // Required for cin (input) and cout (output)
#include <string>   // Required to store text using string
using namespace std;

int main() {
    string name;
    int age;

    // Ask the user for their name
    cout << "Enter your name: ";
    cin >> name; // Reads a single word into 'name'

    // Ask the user for their age
    cout << "Enter your age: ";
    cin >> age; // Reads an integer into 'age'

    // Display a personalized message
    cout << "Hello " << name << "! You are " << age << " years old." << endl;

    return 0; // Indicates the program ended successfully
}