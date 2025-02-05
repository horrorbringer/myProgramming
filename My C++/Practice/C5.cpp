#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int id;
    char gender;
    cout << "Please enter your name :";getline(cin,name);
    cout << "Please enter your id :";cin>>id;
    cout << "Please enter your gender :";cin>>gender;
    system("cls");
    cout << "\t\t\t|>>>>___My Information___<<<<|"<<endl;

    cout << "\t\t\t\tMy name is "<<name<<endl;
    cout << "\t\t\t\tMy id is "<<id<<endl;
    cout << "\t\t\t\tMy gender is "<<gender;
    return 0;
}