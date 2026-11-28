#include <iostream>
#include <string>
using namespace std;

// Base (Parent) class
class Animal {
protected:
    // Protected members are accessible in derived classes, not outside main()
    string species;

public:
    Animal(const string& animalSpecies) : species(animalSpecies) {}

    void breathe() const {
        cout << species << " is breathing." << endl;
    }
};

// Derived (Child) class inheriting publicly from Animal
class Dog : public Animal {
private:
    string name;

public:
    // Calls base class Animal constructor first, then initializes Dog members
    Dog(const string& dogName) : Animal("Dog"), name(dogName) {}

    void bark() const {
        cout << name << " (" << species << ") says: Woof!" << endl;
    }
};

int main() {
    Dog d1("Bruno");

    // Inherited method from Animal
    d1.breathe();

    // Own method from Dog
    d1.bark();

    return 0;
}