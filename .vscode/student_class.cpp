#include <iostream>
#include <string>
using namespace std;

// Class acts as a blueprint for creating Student objects
class Student {
private:
    // Data members are kept private to protect object state
    string name;
    int rollNo;
    float marks;

public:
    // Setter function to safely assign values to private members
    void setDetails(const string& studentName, int roll, float studentMarks) {
        name = studentName;
        rollNo = roll;
        marks = studentMarks;
    }

    // Member function to display student details
    void displayDetails() const {
        cout << "\n--- Student Record ---" << endl;
        cout << "Name      : " << name << endl;
        cout << "Roll No.  : " << rollNo << endl;
        cout << "Marks     : " << marks << endl;
    }
};

int main() {
    Student s1; // Create an object 's1' of type Student

    string name;
    int roll;
    float marks;

    cout << "Enter student first name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter marks: ";
    cin >> marks;

    // Use member functions on object 's1'
    s1.setDetails(name, roll, marks);
    s1.displayDetails();

    return 0;
}