#include<iostream>
using namespace std;

	void staffLogin(){
        string username_staff,password_staff;
        bool b;
        while(!b){
            system("cls");
            cout << "++=====================================================++\n";
            cout << "||                    STAFF LOGIN                      ||\n";
            cout << "++=====================================================++\n\n";
            cout << "\n\tEnter Username: "; cin >> username_staff;
            cout << "\n\tEnter Password: "; cin >> password_staff;
            cout << "\n\n\n\n\n_______________________________________________________\n\n\n";
            if (username_staff == "staff" && password_staff == "123") {
                cout << "\n\n\n\t\tSuccess\n\n\n";
                b = true;
            }else {
                cout << "Login . . .\n\n";
                cout << "\n\n\nInvalid password and username!\n\n\n";
            }
        }
	}

int main(){
    staffLogin();
    return 0;
}