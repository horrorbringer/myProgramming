#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;
#include<string>
string ToUpper(string s){
	transform(s.begin(), s.end(), s.begin(), ::toupper);
    return s;
}
string ToLower(string s){
	transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}
char ToUpperChar(char op){
	toupper(op);
    return op;
}
int main()
{
    system("cls");
	string s;
	cout<<"enter a string    : ";getline(cin,s);
	cout << "\nLetter Big        : " << ToUpper(s) << "\n\n";
    cout << "Letter Small      : " << ToLower(s) << "\n\n";
    cout << "Char              :" << ToUpperChar('a');
    return 0;
}