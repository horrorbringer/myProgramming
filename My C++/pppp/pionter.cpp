#include<iostream>
#include<string>
using namespace std;

int main(){

    string food = "pizza"; // food variable
    string* ptr = &food;   // reference to food

    // Output the value of food (pizza)
    cout<<food<<'\n';

    // Output the memory of food (0x5f88fffa20)
    cout<<&food<<'\n';

    // Access the memory address of food and output its value (pizza)
    cout<<*ptr<<'\n';

    // Change the value of the pointer
    *ptr = "Humburger";

    // Output the new value of the pointer (Hamburger)
    cout<<*ptr<<'\n';

    // Output the new value of the food variable (Hamburger)
    cout<<food<<'\n';

    return 0;
}