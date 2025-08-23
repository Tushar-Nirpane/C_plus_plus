#include <iostream>
using namespace std;

class Student {
    int age;
    string name;

public:
    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &obj) {
        name = obj.name;
        age = obj.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Rahul", 20);  // normal constructor
    Student s2 = s1;          // copy constructor called

    cout << "Original object: ";
    s1.display();

    cout << "Copied object: ";
    s2.display();

    return 0;
}
