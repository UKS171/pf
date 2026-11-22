#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nAddition = " << num1 + num2 << endl;
    cout << "Subtraction = " << num1 - num2 << endl;
    cout << "Multiplication = " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division = " << num1 / num2 << endl;
    } else {
        cout << "Division is not possible because the second number is zero.\n";
    }

    return 0;
}
