// C++ program to demonstrate
// the use of rand()
#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string RD();
char ToUpper(char s);
int main()
{
	bool button=1;
	char op;
	while(button){
		system("cls");
		cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t-----\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t| " << ToUpper(op) << " |" <<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t-----\n";
		cout << "\n\t\t\t\t\t\t\t\t\t\t\t============   ========\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t [R] Random     [N] No\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t============   ========\n\n";
		cout << "\n\t\t\t\t\t\t\t\t\t\t\tPlease Select 'Y/N': ";
		cin >> op;
		switch (ToUpper(op)){
			case 'R':
				cout << "\n\t\t                                                                          ======================\n";
				cout << "\t\t\t                                                                          " << RD() << "\r\b \n";
				cout << "\t\t                                                                          ======================\n";
				button = true;
			break;
			case 'N':
				button = false;
			break;
			default:
				cout << "\n                       				                                    =================         ================";
				cout << "\n                       				                                     [r/R] to random   and     [n/N] to exit: ";
				cout << "\n                       				                                    =================         ================\n";
		}
		cout << "                                                                                  ";
		system("pause");
	}
	return 0;
}
// This program will create some sequence of
// random numbers on every program run
string RD()
{
	string accountNumber;
	string RandomNew;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			accountNumber += to_string((rand() % (i + 1)) * (i * j));
			if(accountNumber[i]==accountNumber[j+1]){
				RandomNew = to_string(rand() % (100+i));
				accountNumber.replace(0, 3, RandomNew);
			}
		}
		accountNumber += " ";
		RandomNew = to_string(rand() % 101);
	}
	if (accountNumber != "000 000 000 ")
	{
		return accountNumber;
	}
	else
	{
		accountNumber.replace(8, 3, RandomNew);
		return accountNumber;
	}
}
char ToUpper(char op){
	char ch = toupper(op);
    return ch;
}