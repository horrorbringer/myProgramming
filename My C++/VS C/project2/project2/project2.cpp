#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
#include <conio.h>
using namespace std;

class LOGIN {
private:
	string username_admin, password_admin;
	string username_user, password_user;
	int pin, op_log;
public:
	void Admin() {
	log_admin:
		cout << "-------------->> Admin Login <<------------------\n\n";
		cout << "Enter Username: "; cin.ignore(); getline(cin, username_admin);
		cout << "Enter Password: "; getline(cin, password_admin);
		if (username_admin == "Admin" && password_admin == "12345") {
			cout << "Login.";
			for (int i = 0; i < 10; i++) {
				Sleep(50);
				system("color A");
				cout << ".";
			}
			cout << "\nSuccess!\n";
		}
		else {
			cout << "Login.";
			for (int i = 0; i < 10; i++) {
				Sleep(50);
				system("color C");
				cout << ".";
			}
			cout << "\nInvalid password and username!\n";
			goto log_admin;

		}
		Pin();
	}
	void User() {
	log_user:
		cout << "-------------->> User Ligin <<------------------\n\n";
		cout << "Enter Username: "; cin.ignore(); getline(cin, username_user);
		cout << "Enter Password: "; getline(cin, password_user);
		if (username_user == "user Name" && password_user == "12345 aaa") {
			cout << "Login.";
			for (int i = 0; i < 10; i++) {
				Sleep(50);
				system("color A");
				cout << ".";
			}
			cout << "\nSuccess!\n";
		}
		else {
			cout << "Login.";
			for (int i = 0; i < 10; i++) {
				Sleep(50);
				system("color C");
				cout << ".";
			}
			cout << "\nInvalid password and username!\n";
			goto log_user;
		}
		Pin();
	}
	void Pin() {
		cout << "-------------->> Pin Ligin <<------------------\n\n";
		cout << "Enter pin: "; cin >> pin;
		if (pin == 12345) {
			cout << "Comfirm.";
			for (int i = 0; i < 10; i++) {
				Sleep(50);
				system("color A");
				cout << ".";
			}
			cout << "\nSuccess!\n";
		}
		else {
			cout << "Login.";
			for (int i = 0; i < 10; i++) {
				Sleep(50);
				system("color C");
				cout << ".";
			}
			cout << "\nInvalid password and username!\n";
		}

	}
	void LoGig() {
	log_again:
		cout << "-------------->> Ligin <<------------------\n\n";
		cout << "1.---------> Admin <----------\n";
		cout << "2.----------> Uder <----------\n";
		cout << "Please choose: "; cin >> op_log;
		switch (op_log) {
		case 1:system("cls"); Admin(); break;
		case 2:system("cls"); User(); break;
		default:goto log_again;
		}
		system("color 7");
	}
};


class staff {
protected:
	int id,age,start_to_work;
	string name,dob,address,position;
	char gender;
	float salary;
public:
	void insertInfoStaff() {
		cout << "Enter name: "; cin >> name;
		cout << "Enter gender: "; cin >> gender;
		cout << "Enter id: "; cin >> id;
		cout << "Enter age: "; cin >> age;
		cout << "Enter adress: "; cin >> address;
		cout << "Enter date of birth: "; cin >> dob;

		cout << "Enter position: "; cin >> position;
		cout << "Enter salary: "; cin >> salary;
		cout << "Enter start to work: "; cin >> start_to_work;
		
	}

};

class customer : public staff{
private:
	int contact;
	double total_Balance;
public:
	void insertInfoCustomer() {
		cout << "Enter name: "; cin >> name;
		cout << "Enter gender: "; cin >> gender;
		cout << "Enter id: "; cin >> id;
		cout << "Enter age: "; cin >> age;
		cout << "Enter address: "; cin >> address;
		cout << "Enter contact: "; cin >> contact;
		cout << "Enter total balance: "; cin >> total_Balance;
	}
};

class app {
private:
	int water,electric;
public:
	int internet,tv;
};

int main() {
	staff staff1;
	customer custom1;
	LOGIN log;

	log.LoGig();

	return 0;
}