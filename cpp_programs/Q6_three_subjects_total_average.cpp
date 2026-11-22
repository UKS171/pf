#include <iostream>
using namespace std;

int main() {
    float marks1, marks2, marks3, total, average;

    cout << "Enter marks of subject 1: ";
    cin >> marks1;
    cout << "Enter marks of subject 2: ";
    cin >> marks2;
    cout << "Enter marks of subject 3: ";
    cin >> marks3;

    total = marks1 + marks2 + marks3;
    average = total / 3;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

    return 0;
}
