#include <iostream>
#include<iomanip>
using namespace std;

void calculate(int num1, int num2, int operation) {
    switch (operation) {
        case 1:
            cout << "Addition is : " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Subtraction is : " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Multiplication is : " << num1 * num2 << endl;
            break;
        case 4:
            cout << "Division is : " << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }
}

int main() {
    int num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    cout << "Enter operation (1.addition, 2.subtraction, 3.multiplication, 4.division): ";
    int operation;
    cin >> operation;

    calculate(num1, num2, operation);

    return 0;
}