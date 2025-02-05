#include <iostream>

using namespace std;

int main()
{
  char operation;
  double num1, num2;

  cout << "Enter an operator (+, -, *, /): ";
  cin >> operation;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  switch (operation)
  {
  case '+':
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    break;
  case '-':
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    break;
  case '*':
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    break;
  case '/':
    if (num2 == 0)
    {
      cout << "Error: Division by zero." << endl;
    }
    else
    {
      cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
    }
    break;
  default:
    cout << "Invalid operator." << endl;
  }

  return 0;
}