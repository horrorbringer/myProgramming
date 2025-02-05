#include<iostream>
using namespace std;
int main()
{
    string food = "Pizza"; // A food variable of type string
    string* ptr = &food; // A pointer variable, with the name ptr, that stores
    // the address of food

    // Output the value of food (Pizza)
    cout << food << endl;

    // Output the memory address of food 
    cout << &food << endl;

    // Output the memory address of food with the pointer
    cout << *ptr << endl;

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output new value of the pointer
    cout << *ptr << endl;

    cout << food <<endl;

    return 0;
}