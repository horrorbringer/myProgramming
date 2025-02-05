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

    ifstream Rbinfile("write_binfile.bin", ios::in | ios::binary);

    if(!Rbinfile){
        cout <<"File not Found!"<<endl;exit(0);
    }else{
        Rbinfile.read((char*)&stu,sizeof(stu));

        cout << "Name: " << stu.name << endl;
        cout << "Gender: " << stu.gender << endl;
        cout << "Age: " << stu.age << endl;
    }

    // cout << "Name: ";getline(cin, name);
    // cout << "Gender: ";fflush(stdin);getline(cin,gender);
    // cout << "Age: ";cin >> age;

    Rbinfile.close();
    return 0;
}