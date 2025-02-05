#include <iostream>
#include <cmath> // Include the cmath library for sqrt function

using namespace std;

int main() {
    float a, b, c;
    float data, data2;
    float x1, x2; // Change data type to float

    cout << "Enter a = "; cin >> a;
    cout << "Enter b = "; cin >> b;
    cout << "Enter c = "; cin >> c;

    // Calculate discriminant
    data = pow(b, 2) - (4 * a * c);
    data2 = sqrt(data);

    cout << "===========================================================\n";
    cout << "Data: " << data2 << endl;

    // Calculate roots
    if (data > 0) {
        x1 = (-b + data2) / (2 * a);
        x2 = (-b - data2) / (2 * a);

        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    } else if (data == 0) {
        x1 = x2 = -b / (2 * a);
        cout << "X1 = X2 = " << x1 << endl;
    } else {
        cout << "No real roots!" << endl;
    }

    return 0;
}