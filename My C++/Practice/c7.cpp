#include <iostream>
#include <string>
using namespace std;
int main()
{
  string name;
  int pass;
  string adress;
  string position;
  cout << "++++____////===>>>What your name ?<<<===///____++++" << endl;
  cout << "Enter your name : ";
  getline(cin, name);
  cout << "Enter your pass :";
  cin >> pass;
  cout << "Enter your adress   :";
  getline(cin, adress);
  cout << "Enter your position :";
  getline(cin, position);
  if (name == "Horror" && pass == 123)
  {
    cout << "it true" << endl;
  } else if (adress == "ggg g " && position == "cambodia"){
    cout << "it true" << endl;
  }else
    cout << "it wrong" << endl;
  return 0;
}
