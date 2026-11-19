
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {

    // Vector: Store student marks
    vector<int> marks = {75, 90, 65, 85, 95};

    // Map: Store student names and marks
    map<string, int> students = {
        {"Amit", 75},
        {"Riya", 90},
        {"Rahul", 65},
        {"Neha", 85},
        {"John", 95}
    };

    // Unordered Map
    unordered_map<string, int> records;
    records["Amit"] = 75;
    records["Riya"] = 90;
    records["Rahul"] = 65;

    // Display vector
    cout << "Student Marks: ";
    for (int m : marks)
        cout << m << " ";
    cout << endl;

    // Sort algorithm
    sort(marks.begin(), marks.end());

    cout << "Sorted Marks: ";
    for (int m : marks)
        cout << m << " ";
    cout << endl;

    // find_if algorithm
    auto result = find_if(marks.begin(), marks.end(),
        [](int m) { return m > 85; });

    if (result != marks.end())
        cout << "First mark above 85: " << *result << endl;

    // transform algorithm
    vector<int> updatedMarks;
    transform(marks.begin(), marks.end(),
        back_inserter(updatedMarks),
        [](int m) { return m + 5; });

    cout << "Updated Marks: ";
    for (int m : updatedMarks)
        cout << m << " ";
    cout << endl;

    // Display map
    cout << "\nStudent Records:\n";
    for (auto s : students)
        cout << s.first << ": " << s.second << endl;

    // Display unordered_map
    cout << "\nUnordered Map Records:\n";
    for (auto r : records)
        cout << r.first << ": " << r.second << endl;

    return 0;
}
