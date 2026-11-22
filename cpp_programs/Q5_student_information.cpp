#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, department;
    int rollNumber, age, semester;

    cout << "Enter student's name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> rollNumber;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter semester: ";
    cin >> semester;

    cin.ignore();
    cout << "Enter department: ";
    getline(cin, department);

    cout << "\n--- Student Information ---\n";
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Age: " << age << endl;
    cout << "Semester: " << semester << endl;
    cout << "Department: " << department << endl;

    return 0;
}
