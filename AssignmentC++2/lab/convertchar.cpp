#include <iostream>
#include <cctype>
using namespace std;
char ToUpper(char op){
	char ch = toupper(op);
    return ch;
}
int main() {

  // convert 'a' to uppercase
  char a;
  cout << "Enter one character: ";
  cin >> a;
  cout << ToUpper(a);

  return 0;
}