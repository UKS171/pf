#include <iostream>
using namespace std;

int main() {
    double price, totalBill;
    int quantity;

    cout << "Enter product price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;

    totalBill = price * quantity;

    cout << "Total Bill = " << totalBill << endl;

    return 0;
}
