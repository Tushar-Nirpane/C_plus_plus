                                           //ENCAPSULATION
/*#include <iostream>
using namespace std;

class Student {
private:
    // private data members (cannot be accessed directly outside the class)
    string name;
    int age;
    int marks;

public:
    // setter function to set data (provides controlled access)PARAMETERIZED CONSTRUCTOR
    void setDetails(string studentName, int studentAge, int studentMarks) {
        name = studentName;
        age = studentAge;
        marks = studentMarks;
    }

    // getter function to access data safely
    void getDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    // Setting values using setter
    s1.setDetails("Tushar", 20, 95);

    // Getting values using getter
    s1.getDetails();

    return 0;
}*/
                                        //CONSTRUCTOR
//ALL TYPE OF CONSTRUCTOR IN ONE CODE
/*#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // 1. Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor called" << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor called" << endl;
    }

    // 4. Dynamic Constructor (allocating memory dynamically)
    Student(const char* n) {
        name = string(n);  // converting C-string to C++ string
        age = 18;
        cout << "Dynamic Constructor called" << endl;
    }

    // Method to display details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Default constructor
    Student s1;//constructor called
    s1.display();

    // Parameterized constructor
    Student s2("Tushar", 20);//constructor called
    s2.display();

    // Copy constructor
    Student s3(s2);//constructor called
    s3.display();

    // Dynamic constructor
    Student s4("Dynamic_Student");//constructor called
    s4.display();

    return 0;
}*/
                                            //THIS POINTER
/*#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Using 'this' pointer to differentiate between local and member variables
    Student(string name, int age) {//parameterized constructor
        this->name = name;   // 'this->name' means object's data member
        this->age = age;     // 'age' is the local parameter
    }

    void display() {
        cout << "Name: " << this->name << ", Age: " << this->age << endl;
    }
};

int main() {
    Student s1("Tushar", 20);
    s1.display();

    Student s2("Mansi", 22);
    s2.display();

    return 0;
}*/

                                    //INHERITANCE
#include <iostream>
using namespace std;

// 1. Single Inheritance
class Person {
public:
    string name;
    int age;

    void setPerson(string n, int a) {
        name = n; age = a;
    }
    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person { // Single Inheritance
public:
    int marks;
    void setStudent(string n, int a, int m) {
        setPerson(n, a);
        marks = m;
    }
    void displayStudent() {
        displayPerson();
        cout << "Marks: " << marks << endl;
    }
};

// 2. Multiple Inheritance
class Sports {
public:
    int score;
    void setScore(int s) { score = s; }
};

class Result : public Student, public Sports { // Multiple Inheritance
public:
    void displayResult() {
        displayStudent();
        cout << "Sports Score: " << score << endl;
    }
};

// 3. Multilevel Inheritance
class Graduate : public Student { // Derived from Student
public:
    string degree;
    void setDegree(string d) { degree = d; }
    void displayGraduate() {
        displayStudent();
        cout << "Degree: " << degree << endl;
    }
};

// 4. Hierarchical Inheritance
class Teacher : public Person { // Another class from Person
public:
    string subject;
    void setTeacher(string n, int a, string s) {
        setPerson(n, a);
        subject = s;
    }
    void displayTeacher() {
        displayPerson();
        cout << "Subject: " << subject << endl;
    }
};

// 5. Hybrid Inheritance (combination of multiple + hierarchical)
class Scholar : public Graduate, public Sports {
public:
    void displayScholar() {
        displayGraduate();
        cout << "Sports Score: " << score << endl;
    }
};

// MAIN
int main() {
    cout << "---- Single Inheritance ----" << endl;
    Student s;
    s.setStudent("Tushar", 20, 95);
    s.displayStudent();

    cout << "\n---- Multiple Inheritance ----" << endl;
    Result r;
    r.setStudent("Mansi", 22, 90);
    r.setScore(85);
    r.displayResult();

    cout << "\n---- Multilevel Inheritance ----" << endl;
    Graduate g;
    g.setStudent("Rahul", 23, 88);
    g.setDegree("B.Tech");
    g.displayGraduate();

    cout << "\n---- Hierarchical Inheritance ----" << endl;
    Teacher t;
    t.setTeacher("David", 40, "Maths");
    t.displayTeacher();

    cout << "\n---- Hybrid Inheritance ----" << endl;
    Scholar sc;
    sc.setStudent("Kiran", 24, 92);
    sc.setDegree("M.Sc");
    sc.setScore(75);
    sc.displayScholar();

    return 0;
}
