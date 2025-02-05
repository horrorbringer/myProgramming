#include <iostream>
using namespace std;

float n1, n2;
int addition(int n1, int n2)
{
    return n1 + n2;
}
int subtraction(int n1, int n2)
{
    return n1 - n2;
}
int multiplication(int n1, int n2)
{
    return n1 * n2;
}
float division(int n1, int n2)
{
    return n1 / n2;
}
int main()
{

    char oper;
start:
    cout << "---------Caculator----------\n";
    cout << "Enter num1: ";
    cin >> n1;
    cout << "Enter num2: ";
    cin >> n2;
    cout << "Please choose oper (+,-,*,/) :";
    cin >> oper;
    switch (oper)
    {
    case '+':
        cout << n1 << " + " << n2 << " = " << addition(n1, n2) << endl;
        break;
    case '-':
        cout << n1 << " - " << n2 << " = " << subtraction(n1, n2) << endl;
        break;
    case '*':
        cout << n1 << " * " << n2 << " = " << multiplication(n1, n2) << endl;
        break;
    case '/':
        cout << n1 << " / " << n2 << " = " << division(n1, n2) << endl;
        break;
    default:
        cout << "Wrong operator" << endl;
    }
    goto start;
    return 0;
}