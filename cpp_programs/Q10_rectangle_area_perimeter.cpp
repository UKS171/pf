#include <iostream>
using namespace std;

int main() {
    double length, width, area, perimeter;

    cout << "Enter rectangle length: ";
    cin >> length;
    cout << "Enter rectangle width: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "Area of Rectangle = " << area << endl;
    cout << "Perimeter of Rectangle = " << perimeter << endl;

    return 0;
}
