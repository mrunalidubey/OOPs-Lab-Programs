
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    fstream file;

    // Write student records
    file.open("students.csv", ios::out);

    file << "Roll,Name,Marks\n";
    file << "101,Amit,85\n";
    file << "102,Riya,92\n";
    file << "103,Rahul,78\n";

    cout << "Student records written successfully!\n";

    file.close();

    // Read student records
    file.open("students.csv", ios::in);

    string line;

    cout << "\nStudent Records:\n";

    while (getline(file, line)) {
        cout << line << endl;
    }

    // tellg(): Get current reading position
    cout << "\nReading position: " << file.tellg() << endl;

    file.close();

    // File pointers demonstration
    file.open("students.csv", ios::in | ios::out);

    // tellp(): Get writing position
    cout << "Writing position: " << file.tellp() << endl;

    // seekg(): Move reading pointer
    file.seekg(0, ios::beg);
    cout << "After seekg: " << file.tellg() << endl;

    // seekp(): Move writing pointer
    file.seekp(0, ios::end);
    cout << "After seekp: " << file.tellp() << endl;

    file.close();

    return 0;
}
