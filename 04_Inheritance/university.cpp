
#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;

    void showPerson() {
        cout << "Name: " << name << endl;
    }
};

// Single Inheritance
class Student : public Person {
public:
    int rollNo;

    void showStudent() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Multilevel Inheritance
class GraduateStudent : public Student {
public:
    string specialization;

    void showGraduate() {
        cout << "Specialization: " << specialization << endl;
    }
};

int main() {
    GraduateStudent g;

    g.name = "Mrunali";
    g.rollNo = 101;
    g.specialization = "AI and Data Science";

    g.showPerson();
    g.showStudent();
    g.showGraduate();

    return 0;
}
