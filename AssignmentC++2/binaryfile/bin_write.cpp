#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct strudent{
    char name[25];
    int age;
    char gender[25];
}stu;

int main(){

    ofstream wBinfile("write_binfile.bin", ios::out|ios::binary);

    cout << "Name: ";cin.getline(stu.name,25);
    cout << "Gender: ";fflush(stdin);cin.getline(stu.gender,25);
    cout << "Age: ";cin >> stu.age;

    wBinfile.write((char*)&stu,sizeof(stu));

    wBinfile.close();
    return 0;
}