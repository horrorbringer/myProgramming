
// One Structure in Multiple Variables

#include <iostream>
#include <string>
using namespace std;

    struct
    {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // We can add variable by separating them with a comma here

int main()
{
    system("cls");

    // Put data into the fist structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year;
    return 0;
}