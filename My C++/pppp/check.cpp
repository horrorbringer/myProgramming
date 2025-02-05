#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
 // Using iostream to get input
 std::cout << "Enter an integer: ";
 int inputInt;
 string a = "HelloMeh ";
 std::cin >> inputInt;
 cout << "Enter a double: ";
 double inputDooble;
 cin >> inputDooble;
 // Using data types
 int integerNumber = inputInt;
 double doubleNumber = inputDooble;
 char character = 'A';
 bool booleanValue = false;
 // Using mathematical operators
 int sum = integerNumber + 5;
 double product = doubleNumber * 2.5;
 int quotient = integerNumber / 3;
 int remainder = integerNumber % 3;
 // Using comparison operators
 bool isEqual = (integerNumber == inputInt);
 bool isGreaterThan = (doubleNumber > inputDooble);
 bool isNotEqual = (integerNumber != 0);
 // Outputting the values
 std::cout << "Integer Number: " << integerNumber <<"\n";
 std::cout << "Double Number: " << doubleNumber << "\n";
 std::cout << "Character: " << character << "\n";
 std::cout << "Boolean Value: "<< booleanValue << std::endl;
 std::cout << "Sum: "<< sum << std::endl;
 std::cout << "Product: " << product << endl;
 std::cout << "Quotient: " << quotient << std::endl;
 std::cout << "Remainder: " << remainder << endl;
 std::cout << "Is Equal: "<< isEqual << std::endl;
 std::cout << "Is Greater Than: " << isGreaterThan << std::endl;
 std::cout << "Is Not Equal to Zero: "<< isNotEqual << std::endl;
 return 0;
}