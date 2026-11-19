#include <iostream>
using namespace std;

int main() {
    // Data types and variables
    int age = 19;
    float marks = 85.5;
    char grade = 'A';
    bool passed = true;
    string name = "Student";

    // Constant
    const float PI = 3.14;

    // Input
    cout << "Enter your age: ";
    cin >> age;

    // Operators
    int nextAge = age + 1;
    int square = age * age;

    // Output
    cout << "\nName: " << name;
    cout << "\nAge: " << age;
    cout << "\nNext year age: " << nextAge;
    cout << "\nSquare of age: " << square;
    cout << "\nMarks: " << marks;
    cout << "\nGrade: " << grade;
    cout << "\nPassed: " << passed;
    cout << "\nPI: " << PI;

    return 0;
}