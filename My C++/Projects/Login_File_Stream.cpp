#include<iostream>
#include<fstream>
#include<string>
using namespace std;


void menu();
void Register();
void Log();


void menu(){
    int choice;
    cout << "============ LOGIN ==========\n\n";
    cout << "\t[1] Register\n";
    cout << "\t[2] Login\n";
    cout << "\nEnter Choice: ";cin>>choice;
    switch(choice){
        case 1:
            cout << "========= Register =========\n";
            Register();
        break;
        case 2:
            cout << "========= Login ==========\n\n";
            Log();
        break;
    }
}

void Register(){
    string usn,pwd;
    ofstream wr("003.txt", ios::app);
    cout << "\nSet Username: ";cin >> usn;
    cout << "Set Password: ";cin >> pwd;
    wr << usn  << "\n" << pwd << "\n";
    cout << "Register Success!\n";

}

void Log(){
    bool b = 0;
    string readU,readP, usn,pwd;;
    ifstream rd("003.txt",ios::in);
    if(!rd){
        cout << "Can't open this file!\n";
    }else {
        cout << "Enter Username: ";cin >> usn;
        cout << "Enter Password: ";cin >> pwd; 
        while(rd >> readU >> readP){
            if(readU == usn && readP == pwd){
                cout << "Login Success!\n";
                b=1;
                break;
            }
            rd.close();
        }
        if(b==0){
            cout << "Invalid Username and Password!\n";
        }
    }
}

int main(){
    system("cls");
    menu();
    return 0;
}