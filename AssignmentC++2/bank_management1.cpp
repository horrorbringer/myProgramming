#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
#include <conio.h>
#include <ctime> // Import the ctime library
using namespace std;

class LOGIN {
private:
	string username_admin, password_admin;
	string username_user, password_user;
	int pin;
public:
	int barwidth = 20;

	void Admin();
	void Pin();

	string getUsername(){return username_user;}
	string getPassword(){return password_user;}
	void setUsername(string SusernameUs){this->username_user = SusernameUs;}
	void setPassword(string SpasswordUs){this->password_user = SpasswordUs;}
};

class STAFF {
protected:
	int id,age;
	string name,dob,address,position, gender,start_to_work;
	string usernameStaff, passwordStaff;
	float salary;
public:
	void insertInfoStaff();
	void diplayStaff();
	// getter
	int getId(){return id;}
	int getAge(){return age;}
	string getStartToWork(){return start_to_work;}
	string getName(){return name;}
	string getDob(){return dob;}
	string getAddress(){return address;}
	string getPosition(){return position;}
	string getGender(){return gender;}
	float getSalary(){return salary;}
	string getUsernameStaff(){return usernameStaff;}
	string getPasswrdStaff(){return passwordStaff;}
	// setter
	void setId(int Id){this->id = Id;}
	void setAge(int Age){this->age = Age;}
	void setStartToWork(string SstartToWork){this->start_to_work = SstartToWork;}
	void setName(string Name){this->name = Name;}
	void setDob(string Dob){this->dob = Dob;}
	void setAddress(string Address){this->address = Address;}
	void setPosition(string Position){this->position = Position;}
	void setGender(string Gender){this->gender = Gender;}
	void setSalary(float Salary){this->salary = Salary;}
	void setUsernameStaff(string S_usnStaff){this->usernameStaff = S_usnStaff;}
	void setPasswordStaff(string S_passStaff){this->passwordStaff = S_passStaff;}
	void showUsnPwdStaff();
};

class APP {
private:
	string accountNumber;
	string RandomNew;
public:
	string Time[100];
public:
	void RandomAccNumber();
	// getter
	string getAccountNumber(){return accountNumber;}
	string getTime(){
		int t = 0;
		time_t timestamp = time(NULL);
		struct tm datetime = *localtime(&timestamp);
		return Time[t] = asctime(&datetime);
		t++;
	}

};

class CUSTOMER : public STAFF , public LOGIN ,public APP {
private:
	long double total_Balance_us = 0;
	long long total_Balance_kh = 0;
	long amount;
	string contact;
public:
	void insertInfoCustomer() {
		cout << "Enter name               : "; cin.ignore();getline(cin, name);
		cout << "\nEnter gender           : "; getline(cin,gender);
		cout << "\nEnter id               : "; cin >> id;
		cout << "\nEnter age              : "; cin >> age;
		cout << "\nEnter date of birth    : "; cin >> dob;
		cout << "\nEnter address          : "; cin.ignore();getline(cin, address);
		cout << "\nEnter contact          : "; cin >> contact;
	}
	void depositCus(){
		cout << "\nEnter total balance US $: "; cin >> total_Balance_us;
		cout << "\nEnter total balance KH R: "; cin >> total_Balance_kh;
	}
	void dispayCustomer(){
		cout 
		<< "|"
		<< setw(15) << name
		<< "  |" << setw(12) << gender
		<< "    |" << setw(9) << id
		<< "   |" << setw(9) << age
		<< "    |" << setw(17) << address
		<< "  |" << setw(19) << dob
		
		<< "   |" << setw(19) << contact
		<< "   |" << setw(21) << total_Balance_us
		<< " $  |" << setw(21) << total_Balance_kh << "R​  |" << endl;
		cout << "+-----------------+----------------+------------+-------------+-------------------+----------------------+----------------------+-------------------------+------------------------+\n";
	}
	void displayEeachCustomer(){
		cout << "|" << setw(19) << getAccountNumber() << "   |" << setw(19) << getName() << "  |" << setw(10) << getId() << "   |" << setw(20) << getTotalBalancUs() << " $   |" << setw(21) << getTotalBalacKh() << "R  |" << setw(19) << getDob() << "   |" << endl;
		cout << "+----------------------+---------------------+-------------+-------------------------+------------------------+----------------------+\n";
	}
	string getContact(){return contact;}
	double getTotalBalancUs(){return total_Balance_us;}
	long getTotalBalacKh(){return total_Balance_kh;}
	void setContact(string Contact){this->contact = Contact;}
	void setTotalBalancUs(double StotalBalanceUs){this->total_Balance_us = StotalBalanceUs;}
	void setTotalBalanKh(long StotalBalnceKh){this->total_Balance_kh = StotalBalnceKh;}
	void MenuCurrency(){
		system("cls");
		cout << "====================         ====================         ==============\n";
		cout << "=  [1] Account US  =         =  [2] Account KH  =         =  [0] Exit  =\n";
		cout << "====================         ====================         ==============\n\n";
	}
	void showUsnPwdUser(){
		cout << setw(34) << "|" << setw(20) << name << "   |" << setw(20) << getUsername() << "   |" << setw(20) << getPassword() << "   |\n" ;
		cout << "                                 +-----------------------+-----------------------+-----------------------+\n";
	}
	void myAccount(double total_Balance_us,long total_Balance_kh){
		cout << "\n\t---------> ["<<name<<"] Account <----------\n\n";
		cout << "\tbalance US: " << total_Balance_us << " $\n";
		cout << "\tbalance KH: " << total_Balance_kh << " R\n";
	}
	void depositUser(){
		system("cls");
		int opDp;
		MenuCurrency();
		cout << "Enter your choice: ";
		cin >> opDp;
		switch(opDp){
			case 1:
				total_Balance_us += float(Amount());
				massageInforDps(" $", "US");
			break;
			case 2:
				total_Balance_kh += Amount();
				massageInforDps(" R", "KH");
			break;
			case 0:
				exit(0);
		}
		myAccount(total_Balance_us,total_Balance_kh);
	}
	long Amount(){
		cout << "Enter amount: ";cin >> amount;
		if(amount > 0)
			return amount;
		else
			return 0;
	}

	void transferOther(char c, float amount){
		if(c == 'u')
			total_Balance_us -= amount;
		else if(c == 'k')
			total_Balance_kh -= int(amount);
	}
	void transferOtherAddToRcv(char c ,float amount){
		if(c == 'u')
			total_Balance_us += amount;
		else if(c == 'k')
			total_Balance_kh += int(amount);
	}

	void massageInforDps(string crcK, string crcE){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount deposit           : +" << amount << crcK << "\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account recive           : " << name << " (" << crcE << ")\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInforWd(string crcK, string crcE){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount withdraw          : -" << amount <<  crcK << "\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << " (" << crcE << ")\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInfoTf(string crcE1,string crcK,char c, string crcE2, string crcU){
		long a;
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << "(" << crcE1 << ")\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Deduction amount         : -" << amount << crcK <<"\n";
		cout << "  \n  ------------------------------------------------------------\n";
		cout << "     Reciver account          : " << name << " (" << crcE2 << ")\n";
		cout << "     Reciver amount           : +" << ((c == 'u') ? (amount / 4000) : (amount * 4000)) << " (" << crcU << ")\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInfoPayment(string nameP,string crcK,string crcE){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount "<< setw(14) << nameP << "     : +" << amount << crcK << "\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << " (" << crcE << ")\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}

	void Atm(){
		system("cls");
		int choice;
		int opDp;
		do{
			system("cls");
			cout << "==========================================================\n\n";
			cout << "\n\n\t1 <=====  M-Y  A-C-C-O-U-N-T\n\n";
			cout << "\t2 <=====  D-E-P-O-S-I-T\n\n";
			cout << "\t3 <=====  W-I-T-H-D-R-A-W\n\n";
			cout << "\t4 <=====  T-R-A-N-S-F-E-R-S  O-W-N  A-C-C-O-U-N-T\n\n";
			cout << "\t5 <=====  P-A-Y-M-E-N-T\n\n";
			cout << "\t0 <=====  B-A-C-K\n\n\n";
			cout << "===========================================================\n";
			cout << "\n\nPlease choose option: ";cin >> choice;
			system("cls");
			switch(choice){
				case 1:
				// M-Y  A-C-C-O-U-N-T
					myAccount(total_Balance_us,total_Balance_kh);
				break;
				case 2:
				// D-E-P-O-S-I-T
					MenuCurrency();
					cout << "Enter your choice: ";
					cin >> opDp;
					switch(opDp){
						case 1:
							total_Balance_us += float(Amount());
							massageInforDps(" $", "US");
						break;
						case 2:
							total_Balance_kh += Amount();
							massageInforDps(" R", "KH");
						break;
						case 0:
							exit(0);
					}
					myAccount(total_Balance_us,total_Balance_kh);
				break;
				case 3:
					MenuCurrency();
					cout << "Enter your choice: ";
					cin >> opDp;
					switch(opDp){
						case 1:
							total_Balance_us -= float(Amount());
							massageInforWd(" $", "US");
						break;
						case 2:
							total_Balance_kh -= Amount();
							massageInforWd(" R", "KH");
						break;
						case 0:exit(0);break;
					}
					myAccount(total_Balance_us,total_Balance_kh);
				break;
				case 4:
					int opTs;
					cout <<"\t TRANSFER TO OWN ACCOUNT\n\n";
					MenuCurrency(); 
					cout << "Choose Account recive: ";
					cin >> opTs;
					switch(opTs){
						case 1:
							ag:
							cout << "Transfer amount (4000R up)\n";
							Amount();
							if(amount >= 4000){
								total_Balance_kh -= amount;
								total_Balance_us += (amount / 4000);
								massageInfoTf("KH", "R", 'u', "US", "$");
							}else{
								cout << "Invalid Enter again!\n";
								system("pause");
								system("cls");
								goto ag;
								}
						break;
						case 2: 
							ag1:
							cout << "Transfer amount (1$ up)\n";
							Amount();
							if(amount > 0){
								total_Balance_us -= float(amount);
								total_Balance_kh += (amount * 4000);
								massageInfoTf("US", "$", 'k', "KH", "R");
							}else{
								cout << "Invalid Enter again!\n";
								system("pause");
								system("cls");
								goto ag1;
								}
						break;
						case 0:exit(0);break;
					}
					myAccount(total_Balance_us,total_Balance_kh);
				break;
				case 5:
				// paymet
					int opPm, opPcc;
					cout << "\t                                                   +---------+\n";
					cout << "\t                                                   | PAYMENT |\n";
					cout << "\t                                                   +---------+\n\n";
					cout << "\t================        ==================        ==================        ============        =======================\n";
					cout << "\t{ _[1]_ WATER  }        { _[2]_ ELECTRIC }        { [3] _INTERNET_ }        { [4] _TV_ }        { [5] _OTHER PAYMENT_ }\n";
					cout << "\t================        ==================        ==================        ============        =======================\n\n";
					cout << "________________________________________________________________________________________________________________________________\n";
					cout << "SELECT YOUR PAYMENT ON: ";
					cin >> opPm;
					switch(opPm){
						case 1:
							MenuCurrency();
							cout << "Choose Currency: ";
							cin >> opPcc;
							switch(opPcc){
								case 1:
									total_Balance_us -= float(Amount());
									massageInfoPayment("water", " $", "US");
								break;
								case 2:
									total_Balance_kh -= Amount();
									massageInfoPayment("water", " R", "KH");
								break;
								case 0:exit(0);break;
							}
							myAccount(total_Balance_us,total_Balance_kh);
						break;
						case 2:
							MenuCurrency();
							cout << "Choose Currency: ";
							cin >> opPcc;
							switch(opPcc){
								case 1:
									total_Balance_us -= float(Amount());
									massageInfoPayment("electric", " $", "US");
								break;
								case 2:
									total_Balance_kh -= Amount();
									massageInfoPayment("electric", " R", "KH");
								break;
								case 0:exit(0);break;
							}
							myAccount(total_Balance_us,total_Balance_kh);
						break;
						case 3:
							MenuCurrency();
							cout << "Choose Currency: ";
							cin >> opPcc;
							switch(opPcc){
								case 1:
									total_Balance_us -= float(Amount());
									massageInfoPayment("internet", " $", "US");
								break;
								case 2:
									total_Balance_kh -= Amount();
									massageInfoPayment("internet", " R", "KH");
								break;
								case 0:exit(0);break;
							}
							myAccount(total_Balance_us,total_Balance_kh);
						break;
						case 4:
							MenuCurrency();
							cout << "Choose Currency: ";
							cin >> opPcc;
							switch(opPcc){
								case 1:
									total_Balance_us -= float(Amount());
									massageInfoPayment("television", " $", "US");
								break;
								case 2:
									total_Balance_kh -= Amount();
									massageInfoPayment("television", " R", "KH");
								break;
								case 0:exit(0);break;
							}
							myAccount(total_Balance_us,total_Balance_kh);
						break;
						case 5:
							MenuCurrency();
							cout << "Choose Currency: ";
							cin >> opPcc;
							switch(opPcc){
								case 1:
									total_Balance_us -= float(Amount());
									massageInfoPayment("other payment", " $", "US");
								break;
								case 2:
									total_Balance_kh -= Amount();
									massageInfoPayment("other payment", " R", "KH");
								break;
								case 0:exit(0);
							}
							myAccount(total_Balance_us,total_Balance_kh);
						break;
					}
				break;
			}
			cout << "\n\tEnter <{---|}";
			getch();
			system("cls");
		}while(choice != 0);
	}

};

void LOGIN::Admin(){
		log_admin:
		system("cls");
		cout << "++=====================================================++\n";
		cout << "||                     ADMIN LOGIN                     ||\n";
		cout << "++=====================================================++\n\n";
		cout << "\n\tEnter Username: "; cin >> username_admin;
		cout << "\n\tEnter Password: "; cin >> password_admin;
		cout << "\n\n\n\n_______________________________________________________\n\n";
		if (username_admin == "Admin" && password_admin == "123") {
			for(int i = 0;i<100;i++){
				system("color A");
				cout << "\t[";
				int pos = barwidth * i / 100;
				for(int j = 0;j <= barwidth;j++){
					if(j<pos){
						cout << "=";
					}else if(j==pos){
						cout << ">";
					}else {
						cout << " ";
					}
				}
				cout << "] ";
				cout << i << " % \r";
				cout.flush();
				Sleep(20);
			}
			cout << "\n\n\n\t\tSuccess\n\n\n";
		}
		else {
			cout << "Login . . .\n\n";
			for(int i = 0;i<100;i++){
				system("color C");
				cout << "\t[";
				int pos = barwidth * i / 100;
				for(int j = 0;j <= barwidth;j++){
					if(j<pos){
						cout << ">";
					}else if(j==pos){
						cout << ">";
					}else {
						cout << " ";
					}
				}
				cout << "] ";
				cout << i << " % \r";
				cout.flush();
				Sleep(30);
			}
			cout << "\n\n\nInvalid password and username!\n\n\n";
			goto log_admin;

		}
		Pin();
	}
void LOGIN::Pin(){
		PIN:
		system("cls");
		cout << "                   PIN LOGIN             \n";
		cout << "_________________________________________________________\n\n";
		cout << "\n\n\tEnter pin: "; cin >> pin;
		if (pin == 123) {
			cout << "\n\tComfirm . . .\n\n";
			for(int i = 0;i<100;i++){
				system("color A");
				cout << "\t[";
				int pos = barwidth * i / 100;
				for(int j = 0;j <= barwidth;j++){
					if(j<pos){
						cout << "=";
					}else if(j==pos){
						cout << ">";
					}else {
						cout << " ";
					}
				}
				cout << "] ";
				cout << i << " % \r";
				cout.flush();
				Sleep(20);
			}
			cout << "\nLogin Success!\n";
		}
		else {
			cout << "Login . . .\n\n";
			for(int i = 0;i<100;i++){
				system("color C");
				cout << "\t[";
				int pos = barwidth * i / 100;
				for(int j = 0;j <= barwidth;j++){
					if(j<pos){
						cout << ">";
					}else if(j==pos){
						cout << ">";
					}else {
						cout << " ";
					}
				}
				cout << "] ";
				cout << i << " % \r";
				cout.flush();
				Sleep(30);
			}
			cout << "\nInvalid password and username!\n";
			goto PIN;
		}
	}

void STAFF::insertInfoStaff(){
		cout << "\nEnter name         : "; cin.ignore(); getline(cin,name);
		cout << "\nEnter gender       : "; cin >> gender;
		cout << "\nEnter id           : "; cin >> id;
		cout << "\nEnter age          : "; cin >> age;
		cout << "\nEnter adress       : "; cin.ignore();getline(cin,address);
		cout << "\nEnter date of birth: "; cin >> dob;

		cout << "\nEnter position     : "; cin.ignore();getline(cin,position);
		cout << "\nEnter salary       : $"; cin >> salary;
		cout << "\nEnter start to work: ";cin >> start_to_work;
		
	}
void STAFF::diplayStaff(){
		cout 
		<< "|"
		<< setw(15) << name
		<< "  |" << setw(12) << gender
		<< "    |" << setw(9) << id
		<< "   |" << setw(9) << age
		<< "    |" << setw(17) << address
		<< "  |" << setw(19) << dob

		<< "   |" << setw(19) << position
		<< "   |" << setw(18) <<salary
		<< " $ |" << setw(18) << start_to_work << "  |" << endl;
		cout << "+-----------------+----------------+------------+-------------+-------------------+----------------------+----------------------+---------------------+--------------------+\n";
	}
void STAFF::showUsnPwdStaff(){
		cout << setw(34) << "|" << setw(20) << name << "   |" << setw(20) << usernameStaff << "   |" << setw(20) << passwordStaff << "   |\n" ;
		cout << "                                 +-----------------------+-----------------------+-----------------------+\n";
	}

void APP::RandomAccNumber(){
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
			this->accountNumber;
		}
		else
		{
			accountNumber.replace(8, 3, RandomNew);
			this->accountNumber;
		}
	}



//                         FUNCTION OUTSIDE CLASS           DESIGN
void headerCheckAccUser(){
	cout << "\n";
    cout << "+----------------------+---------------------+-------------+-------------------------+------------------------+----------------------+\n";
    cout << "|      Acc Nmber       |        Name         |      ID     |    Total Balance US     |      Total Balance KH  |           Dob        |\n";
    cout << "+----------------------+---------------------+-------------+-------------------------+------------------------+----------------------+\n";
}
void headerUsPwdCus(){
	cout << "\n";
    cout << "                                 +-----------------------+-----------------------+-----------------------+\n";
    cout << "                                 |           Name        |        Username       |        Password       |\n";
    cout << "                                 +-----------------------+-----------------------+-----------------------+\n";
}
void headerStaffDisplay(){
	cout << "\n";
	cout << "+-----------------+----------------+------------+-------------+-------------------+----------------------+----------------------+---------------------+--------------------+\n";
	cout << "|        Name     |     Gender     |     Id     |      Age    |      Address      |           Dob        |       Position       |        Salary       |    Start_to_work   |\n";
	cout << "+-----------------+----------------+------------+-------------+-------------------+----------------------+----------------------+---------------------+--------------------+\n";
}
void headerUserDisplay(){
	cout << "\n";
    cout << "+-----------------+----------------+------------+-------------+-------------------+----------------------+----------------------+-------------------------+------------------------+\n";
    cout << "|        Name     |     Gender     |     Id     |      Age    |      Address      |           Dob        |       Contact        |    Total Balance US     |      Total Balance KH  |\n";
    cout << "+-----------------+----------------+------------+-------------+-------------------+----------------------+----------------------+-------------------------+------------------------+\n";
}
void doubleRuler(){
	for(int row = 0; row < 2; row++){
		for(int col = 0; col < 100; col++){
			if(col == 0 || col == 1 || col == 98 || col == 99)
				cout << "+";
			else
				cout << "-";
		}
		cout << "\n";
	}
}
// Saray 
void Color8(){
    int choice;
        cout << "+-------------+-------------------+--------------------+-------------------+------------+---------------------+---------------------+--------------------+\n";
        cout << "|  [1]. GRAY  |  [2]. LIGHT BLUE  |  [3]. LIGHT GREEN  |  [4]. LIGHT AQUA  |  [5]. RED  |  [6]. LIGHT PURPLE  |  [7]. LIGHT YELLOW  |  [8]. LIGHT WHILE  |\n";
        cout << "+-------------+-------------------+--------------------+-------------------+------------+---------------------+---------------------+--------------------+\n\n";
        cout << "PLEASE CHOICE: ";cin >> choice;
        switch(choice){
            case 1:system("color 8");break;
            case 2:system("color 9");break;
            case 3:system("color A");break;
            case 4:system("color B");break;
            case 5:system("color C");break;
            case 6:system("color D");break;
            case 7:system("color E");break;
            case 8:system("color F");break;
        }
	system("cls");
}

int main() {

	// Variable of staff
	int op_log,op_DS,op_info,op_stM,n=0,choice;
	int newId,newAge;
	int idDelete;
	float newSalary;
	int num_staff,i,search_staff,search_id;
	int idUpdate_search,update_info_staff;
	int opUpdate;

	float amount;

	string name_search;
	string new_name,newGender,newDob,newAddress,newPosition,newStartToWork;

	// Variable for Cusomeer

	string nameSearchCus;
	string newNameCus,newGenderCus,newAddressCus,newDobCus,newContactCus;
	string usernameUser,passwordUser,search_contact;
	string usn_staff,pass_staff;

	int nCus=0,op_ctM;
	int num_customer,op_ctm_search,idSearchCustomer;
	int idUpdateCus,idDeleteCus;
	int newIdCus,newAgeCus;

	bool isfound;

	// Create Objects

	STAFF staff[100];
	CUSTOMER custom[100];
	LOGIN log;

	do{
		system("cls");
		cout << fixed << showpoint << setprecision(2);
		cout << "====================================================\n\n";
		cout << "                   __L O G I N__             \n\n";
		cout << "====================================================\n\n\n\n";
		cout << "\t[1] <---- A D M I N \n\n";
		cout << "\t[2] <---- U S E R \n\n";
		cout << "\t[3] <---- S T A F F  \n\n";
		cout << "\t[4] <---- C L O S E   P R O G R A M \n\n\n\n";
		cout <<"______________________________________________________\n\n";
		cout << "Please choose: "; cin >> op_log;
		
		switch (op_log) {
			case 1:
				// Admin
				system("cls");
				// log.Admin(); 
				system("cls");
				system("color 7");
				do{
					doubleRuler();
					cout << "\n||                                 __B A N K  M A N A G E M E N T__                               ||\n\n";
					doubleRuler();
					cout << "\n||  \t\t\t\t\t[1]. STAFF                                                ||\n\n";
					cout << "||  \t\t\t\t\t[2]. CUSTOMER                                             ||\n\n";
					cout << "||  \t\t\t\t\t[3]. APP                                                  ||\n\n";
					cout << "||  \t\t\t\t\t[4]. COLOR                                                ||\n\n";
					cout << "||  \t\t\t\t\t[5]. EXIT                                                 ||\n\n";
					cout << "||  \t\t\t\t\t[0]. BACK                                                 ||\n\n";
					doubleRuler();
					cout << "\n\nSelect one: ";cin >> op_info;
					switch(op_info){
						case 1:
							// STAFF MANAGE
							do{
								system("cls");
								cout << "                         S-T-A-F-F  M-A-N-A-G-E-R         \n";
								cout << "_____________________________________________________________________________\n\n";
								cout << "\n\t[1]                ---<o>---   INSERT   ---<o>--- \n";
								cout << "\n\t[2]                ---<o>---   DISPLAY  ---<o>--- \n";
								cout << "\n\t[3]                ---<o>---   SEARCH   ---<o>--- \n";
								cout << "\n\t[4]                ---<o>---   UPDATE   ---<o>--- \n";
								cout << "\n\t[5]                ---<o>---   DELETE   ---<o>--- \n";
								cout << "\n\t[0]                ---<o>---   BACK     ---<o>--- \n";
								cout << "\n\nChoose: ";cin >> op_stM;
								switch(op_stM){
									case 1:
										system("cls");
										cout << "                          ENTER INFORMATION STAFF               \n";
										cout << "------------------------------------------------------------------------\n\n";
										cout << "How many staff do you want input: ";
										cin >> num_staff;
										for(i = 0; i < num_staff;i++){
											cout << "\nNo: " << n + 1 << "\n";
											staff[n].insertInfoStaff();
											cout << "\nSet Username Staff: ";cin >> usn_staff;
											staff[n].setUsernameStaff(usn_staff);
											cout << "\nSet Password Staff: ";cin >> pass_staff;
											staff[n].setPasswordStaff(pass_staff);
											n++;
										}
										break;
									case 2:
										system("cls");
										isfound = 0;
										if(n <= 0){
											cout << "There isn't any information staff here please input first!\n";
										}else{
											cout <<"                                                                        DISPLAY INFORMATION STAFF                  \n";
											cout << "                                            ---------------------------------------------------------------------\n\n";
											headerStaffDisplay();
											for(i = 0; i < n;i++){
												staff[i].diplayStaff();
												isfound = 1;
											}
											if(isfound==0){
												cout << "NO INFORMATION STAFF IN LIST PLEASE ENTER INFOR FIRST!\n\n";
											}
										}
									break;
									case 3:
										system("cls");
											isfound = 0;
										if(n <= 0){
											cout << "There isn't any information staff here please input first!\n";
										}else{
											cout << "                                SEARCH INFORMATION STAFF                         \n";
											cout << "----------------------------------------------------------------------------------\n\n";
											cout << "[1] <--- Search by id\n";
											cout << "\n[2] <--- Search by name\n\n";
											cout << "Enter: ";
											cin >> search_staff;
											switch(search_staff){
												case 1:
													system("cls");
													cout << "                                   SEARCH BY ID                        \n";
													cout << "-------------------------------------------------------------------------\n\n";
													cout << "Enter id to search: ";
													cin >> search_id;
													headerStaffDisplay();
													for(i = 0;i < n; i++){
														if(search_id == staff[i].getId()){
															staff[i].diplayStaff();
															isfound = 1;
															break;
														}
													}
													if(isfound == 0){
														cout << "\n\nThis id search not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
												case 2:
													system("cls");
													cout << "                              SEARCH BY NAME                           \n";
													cout << "--------------------------------------------------------------------------\n\n";
													cout << "Enter name to search: ";
													cin.ignore();getline(cin ,name_search);
													cout << "\n";
													headerStaffDisplay();
													for(i = 0;i < n; i++){
														if(name_search == staff[i].getName()){
															staff[i].diplayStaff();
															isfound = 1;
															break;
														}
													}
													if(isfound == 0){
														cout << "\n\nThis id search not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
											}
										}
									break;
									case 4:
										system("cls");
										if(n <= 0){
											cout << "There isn't any information staff here please input first!\n";
										}else{
											cout << "                                UPDATE INFORMATION STAFF                  \n";
											cout << "___________________________________________________________________________________\n\n\n";
											cout << "\t1 <---- Update Name\n";
											cout << "\n\t2 <---- Update Id\n";
											cout << "\n\t3 <---- Update Age\n";
											cout << "\n\t4 <---- Update Gender\n";
											cout << "\n\t5 <---- Update Dob\n";
											cout << "\n\t6 <---- Update Address\n";
											cout << "\n\t7 <---- Update Start to work\n";
											cout << "\n\t8 <---- Update Salary\n";
											cout << "\n\t9 <---- Update Position\n";
											cout << "\n\t10 <---- Update All\n";
											cout << "\n\t0 <---- Back\n\n";
											cout << "Enter: ";
											cin >> update_info_staff;
											switch(update_info_staff){
												case 1:
													system("cls");
													isfound = 0;
													cout << "                      UPDATE NAME STAFF                   \n";
													cout << "--------------------------------------------------------------\n\n";
													cout << "Enter id to update name: ";
													cin >> idUpdate_search;
													for(i = 0; i < n; i++){
														if(idUpdate_search == staff[i].getId()){
															cout << "\nName: " << staff[i].getName() << endl;
															cout << "\nEnter New Name: ";
															cin.ignore();getline(cin,new_name);
															staff[i].setName(new_name);
															cout << "\nName Update Completed!\n";
															isfound = 1;
															break;
														}
													}
													if(isfound = 0){
														cout << "\n\nThis id search not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
												case 2:
													system("cls");
													isfound = 0;
													cout << "                             UPDATE ID STAFF                       \n";
													cout << "-------------------------------------------------------------------------\n\n";
													cout << "Enter id to update id: ";
													cin >> idUpdate_search;
													for(i = 0; i < n; i++){
														if(idUpdate_search == staff[i].getId()){
															cout << "\nId: " << staff[i].getId() << endl;
															cout << "\nEnter New Id: "; 
															cin >> newId;
															staff[i].setId(newId);
															cout << "\nId Update Comepleted!\n";
															isfound = 1;
															break;
														}
													}
													if(isfound == 0){
														cout << "\n\nThis id search not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
												case 3:
													system("cls");
													isfound = 0;
													cout << "                           UPDATE AGE STAFF                   \n";
													cout << "-------------------------------------------------------------------\n\n";
													cout << "Enter id to update Age: ";
													cin >> idUpdate_search;
													for(i = 0; i < n; i++){
														if(idUpdate_search == staff[i].getId()){
															cout << "\nAge: " << staff[i].getAge() << endl;
															cout << "\nEnter New Age: ";
															cin >> newAge;
															staff[i].setAge(newAge);
															cout << "\nAge Update Completed!\n";
															isfound = 1;
															break;
														}
													}
													if(isfound == 0){
														cout << "\n\nThis id serch not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
												case 4:
													system("cls");
													isfound = 0;
													cout << "                                 UPDATE GENDER STAFF                       \n";
													cout << "-------------------------------------------------------------------------------------\n\n";
													cout << "Enter id to update Gender: ";
													cin >> idUpdate_search;		
													for(i = 0; i < n; i++){
														if(idUpdate_search == staff[i].getId()){
															cout << "Gender: " << staff[i].getGender() << endl;
															cout << "Enter New Gender: ";
															cin >> newGender;
															staff[i].setGender(newGender);
															cout << "Gender Update Completed!\n";
															isfound = 1;
															break;
														}
													}
													if(isfound == 0){
														cout << "\n\nThis id search not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
												case 5:
													system("cls");
													isfound = 0;
													cout << "----------> UPDATE DOB STAFF <----------\n\n";
													cout << "Enter id to update Date of birth: ";
													cin >> idUpdate_search;		
													for(i = 0; i < n; i++){
														if(idUpdate_search == staff[i].getId()){
															cout << "\nGender: " << staff[i].getDob() << endl;
															cout << "\nEnter New Date of brith: ";
															cin >> newDob;
															staff[i].setDob(newDob);
															cout << "\nDob Update Completed!\n";
															isfound = 1;
															break;
														}
													}
													if(isfound == 0){
														cout << "\n\nThis id search not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
												case 6:
												system("cls");
													isfound = 0;
													cout << "                                        UPDATE ADDRESS STAFF                          \n";
													cout << "-------------------------------------------------------------------------------------------\n\n";
													cout << "Enter id to update Address: ";
													cin >> idUpdate_search;		
													for(i = 0; i < n; i++){
														if(idUpdate_search == staff[i].getId()){
															cout << "\nAddress: " << staff[i].getAddress() << endl;
															cout << "\nEnter New Address: ";
															cin >> newAddress;
															staff[i].setAddress(newAddress);
															cout << "\nAddress Update Completed!\n";
															isfound = 1;
															break;
														}
													}
													if(isfound == 0){
														cout << "n\nThis id search not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
												case 7:
													system("cls");
													isfound = 0;
													cout << "                                  UPDATE START TO WORK STAFF                        \n";
													cout << "----------------------------------------------------------------------------------------\n\n";
													cout << "Enter id to update Start to work: ";
													cin >> idUpdate_search;		
													for(i = 0; i < n; i++){
														if(idUpdate_search == staff[i].getId()){
															cout << "\nStart To Work: " << staff[i].getStartToWork() << endl;
															cout << "\nEnter New Day Start To Work: ";
															cin >> newStartToWork;
															staff[i].setStartToWork(newStartToWork);
															cout << "\nDay Start To Work Update Completed!\n";
															isfound = 1;
															break;
														}
													}
													if(isfound == 0){
														cout << "\n\nThis id search not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
												case 8:
													system("cls");
													isfound = 0;
													cout << "                                       UPDTE SALARY STAFF               \n";
													cout << "----------------------------------------------------------------------------------------\n\n";
													cout << "Enter id to update Salary: ";
													cin >> idUpdate_search;		
													for(i = 0; i < n; i++){
														if(idUpdate_search == staff[i].getId()){
															cout << "\nSalary: " << staff[i].getSalary() << endl;
															cout << "\nEnter New Salary: R";
															cin >> newSalary;
															staff[i].setSalary(newSalary);
															cout << "\nSalary Update Completed!\n";
															isfound = 1;
															break;
														}
													}
													if(isfound == 0){
														cout << "\n\nThis id search not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
												case 9:
													system("cls");
													isfound = 0;
													cout << "                                          UPDATE POSSITION STAFF                      \n";
													cout << "----------------------------------------------------------------------------------------\n\n";
													cout << "Enter id to update Position: ";
													cin >> idUpdate_search;		
													for(i = 0; i < n; i++){
														if(idUpdate_search == staff[i].getId()){
															cout << "\nPosition: " << staff[i].getPosition() << endl;
															cout << "\nEnter New Position: ";
															cin >> newPosition;
															staff[i].setPosition(newPosition);
															cout << "\nPosition Update Completed!\n";
															isfound = 1;
															break;
														}
													}
													if(isfound == 0){
														cout << "\n\nThis id search not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
												case 10:
													system("cls");
													isfound = 0;
													cout << "                                        UPDATE ALL STAFF                              \n";
													cout << "----------------------------------------------------------------------------------------\n\n";
													cout << "Enter id to update All: ";
													cin >> idUpdate_search;		
													headerStaffDisplay();
													for(i = 0; i < n; i++){
														if(idUpdate_search == staff[i].getId()){
															staff[i].diplayStaff();
															staff[i].insertInfoStaff();
															cout << "\nAll Information Update Completed!\n";
															isfound = 1;
															break;
														}
													}
													if(isfound == 0){
														cout << "\n\nThis id search not found!\n";
													}
													cout << "\n\n\tPress anykey: --<(o)>--";
													getch();
												break;
											}
										}
									break;
									case 5:
										system("cls");
										isfound = 0;
										if(n <= 0){
											cout << "There isn't any information staff here please input first!\n";
										}else{
											cout << "                                      DELETE INFORMAITON STAFF                           \n";
											cout << "----------------------------------------------------------------------------------------\n\n";
											cout << "Enter id to delete information staff: ";
											cin >> idDelete;
											for(i = 0; i < n; i++){
												if(idDelete == staff[i].getId()){
													staff[i] = staff[i+1];
													n--;
													isfound = 1;
													cout << "\nThis Information Staff deleted!\n";
													break;
												}
											}
											if(isfound == 0){
												cout << "\n\nThis id search not found!\n";
											}
											cout << "\n\n\tPress anykey: --<(o)>--";
											getch();
										}
									break;
								}
								system("pause");
								system("cls");
							}while(op_stM != 0);
					break;
					case 2:
						// Manage Customer
						system("cls");
						do{
							system("cls");
							cout << "=========================== CUSTOMer MANAGE ===========================\n\n";
							cout << "\t[1] <-- CREATE ACCOUNT\n\n";
							cout << "\t[2] <-- DISPLAY\n\n";
							cout << "\t[3] <-- SEARCH\n\n";
							cout << "\t[4] <-- UPDATE\n\n";
							cout << "\t[5] <-- DELETE\n\n";
							cout << "\t[6] <-- EXIT\n\n";
							cout << "\t[7] <-- DEPOSIT\n\n";
							cout << "\t[0] <-- BACK\n\n\n";
							cout <<"______________________________________________________________________________\n\n";
							cout << "SELECT: ";cin >> op_ctM;
							switch(op_ctM){
								case 1:
									system("cls");
									cout << "                                   CREATE ACCOUNT CUSTOMER                     \n";
									cout << "-----------------------------------------------------------------------------------\n\n";
									cout << "How many customer that you insert: ";
									cin >> num_customer;
									for(i = 0; i < num_customer; i++){
										cout << "\nCustomer: " << nCus + 1 << "\n\n";
										custom[nCus].insertInfoCustomer();
										system("cls");
										cout << "\n-------------                   ----------";
										cout << "\n| 1.DEPOSIT |                   | 2.SKIP |";
										cout << "\n-------------                   ----------\n";
										cout << "\nSelect: ";
										cin >> op_DS;
										if(op_DS == 1){
											system("cls");
											cout << "\n================ DEPOSIT =================\n";
											custom[nCus].depositCus();
										}else{
											system("cls");
										}
										custom[nCus].RandomAccNumber();
										cout << "\nSet Username: ";
										cin >> usernameUser;
										custom[nCus].setUsername(usernameUser);
										cout << "\nSet Password: ";
										cin >> passwordUser;
										custom[nCus].setPassword(passwordUser);
										nCus++;
									}
								break;
								case 2:
									system("cls");
									if(nCus <= 0){
										cout << "There isn't any account's user in the system please create account first!\n";
									}else{
										cout << "                                                              DISPLAY CUSTOMER                \n";
										cout << "\n";
										headerUserDisplay();
										for(i = 0; i < nCus; i++){
											custom[i].dispayCustomer();
										}
									}
								break;
								case 3:
									system("cls");
									if(nCus <= 0){
										cout << "There isn't any account's user in the system please create account first!\n";
									}else{
										cout << "================== Search Customer =================\n\n";
										cout << "\n1 <---- SEARCH BY ID\n";
										cout << "\n2 <---- SEARCH BY NAME\n";
										cout << "\nENTER: ";
										cin >> op_ctm_search;
										switch(op_ctm_search){
											case 1:
												system("cls");
												isfound = 0;
												cout << "                            SEARCH BY ID                \n";
												cout << "-----------------------------------------------------------------\n\n";
												cout << "Enter id to search: ";
												cin >> idSearchCustomer;
												headerUserDisplay();
												for(i = 0; i < nCus; i++){
													if(idSearchCustomer == custom[i].getId()){
														custom[i].dispayCustomer();
														isfound = 1;
														break;
													}
												}
												if(isfound == 0){
													cout << "\n\nThis id search not found!\n";
												}
												cout << "\n\n\tPress anykey: --<(o)>--";
												getch();
											break;
											case 2:
												system("cls");
												isfound = 0;
												cout << "                         SEARCH BY NAME              \n";
												cout << "--------------------------------------------------------------\n\n";
												cout << "Enter name to search: ";
												cin.ignore();getline(cin, nameSearchCus);
												headerUserDisplay();
												for(i = 0; i < nCus; i++){
													if(nameSearchCus == custom[i].getName()){
														custom[i].dispayCustomer();
														isfound = 1;
														break;
													}
												}
												if(isfound == 0){
													cout << "\n\nThis name search not found!\n";
												}
												cout << "\n\n\tPress anykey: --<(o)>--";
												getch();
											break;
										}
									}
								break;
								case 4:
									system("cls");
									if(nCus <= 0){
										cout << "There isn't any account's user in the system please create account first!\n";
									}else{
										cout << "=================================================================\n\n";
										cout << "                       UPDATE CUSTOMER                       \n\n";
										cout << "=================================================================\n\n\n\n";
										cout << "\n\t1 <----  UPDATE NAME\n";
										cout << "\n\t2 <----  UPDATE ID\n";
										cout << "\n\t3 <----  UPDATE AGE\n";
										cout << "\n\t4 <----  UPDATE GENDER\n";
										cout << "\n\t5 <----  UPDATE ADDRESS\n";
										cout << "\n\t6 <----  UPDATE CONTACT\n";
										cout << "\n\t7 <----  UPDATE DATE OF BIRTH\n";
										cout << "\n\t8 <----  UPDATE All\n";
										cout << "\n\t0 <----  BACK\n\n\n";
										cout << "\n\n__________________________________________________________________\n\n\n";
										cout << "ENTER: ";
										cin >> opUpdate;
										switch(opUpdate){
											case 1:
												system("cls");
												isfound = 0;
												cout << "================== UPDATE NAME CUSTOMER ================\n\n";
												cout << "Enter id to update name: ";
												cin >> idUpdateCus;
												for(i = 0; i < nCus; i++){
													if(idUpdateCus == custom[i].getId()){
														cout << "\nCustomer Name : " << custom[i].getName() << endl;
														cout << "\nEnter new name: ";
														cin.ignore();getline(cin, newNameCus);
														custom[i].setName(newNameCus);
														cout << "\n\nCustomer Name Updated!\n";
														isfound = 1;
														break;
													}
												}
												if(isfound == 0){
													cout << "\n\nThis id search not found!\n";
												}
												cout << "\n\n\tPress anykey: --<(o)>--";
												getch();
											break;
											case 2:
												system("cls");
												isfound = 0;
												cout << "                               UPDATE ID CUSTOME                 \n";
												cout << "__________________________________________________________________________\n\n";
												cout << "Enter id to update: ";
												cin >> idUpdateCus;
												for(i = 0; i < nCus; i++){
													if(idUpdateCus == custom[i].getId()){
														cout << "\nCustomer Id: " << custom[i].getId() << endl;
														cout << "\nEnter new Id: ";
														cin >> newIdCus;
														custom[i].setId(newIdCus);
														cout << "\nCustomer Id Updated!\n";
														isfound = 1;
														break;
													}
												}
												if(isfound == 0){
													cout << "\n\nThis id search not found!\n";
												}
												cout << "\n\n\tPress anykey: --<(o)>--";
												getch();
											break;
											case 3:
												isfound = 0;
												cout << "                               UPDATE AGE CUSTOMER                    \n";
												cout << "___________________________________________________________________________\n\n";
												cout << "Enter id to update: ";
												cin >> idUpdateCus;
												for(i = 0; i < nCus; i++){
													if(idUpdateCus == custom[i].getId()){
														cout << "\nCustomer Age: " << custom[i].getAge() << endl;
														cout << "\nEnter new Age: ";
														cin >> newAgeCus;
														custom[i].setAge(newAgeCus);
														cout << "\nCustomer Age Updated!\n";
														isfound = 1;
														break;
													}
												}
												if(isfound == 0){
													cout << "\n\nThis id search not found!\n";
												}
												cout << "\n\n\tPress anykey: --<(o)>--";
												getch();
											break;
											case 4:
												system("cls");
												isfound = 0;
												cout << "                            UPDATE GENDER CUSTOMER              \n";
												cout << "_________________________________________________________________________\n\n";
												cout << "Enter id to update: ";
												cin >> idUpdateCus;
												for(i = 0; i < nCus; i++){
													if(idUpdateCus == custom[i].getId()){
														cout << "\nCustomer Gender: " << custom[i].getGender() << endl;
														cout << "\nEnter new Gender: ";
														cin >> newGenderCus;
														custom[i].setGender(newGenderCus);
														cout << "\nCustomer Gender Updated!\n";
														isfound = 1;
														break;
													}
												}
												if(isfound == 0){
													cout << "\n\nThis id search not found!\n";
												}
												cout << "\n\n\tPress anykey: --<(o)>--";
												getch();
											break;
											case 5:
												system("cls");
												isfound = 0;
												cout << "                                 UPDATE ADDRESS CUSTOMER                   \n";
												cout << "______________________________________________________________________________________\n\n";
												cout << "Enter id to update: ";
												cin >> idUpdateCus;
												for(i = 0; i < nCus; i++){
													if(idUpdateCus == custom[i].getId()){
														cout << "\nCustomer Address: " << custom[i].getAddress() << endl;
														cout << "\nEnter new Address: ";
														cin >> newAddressCus;
														custom[i].setAddress(newAddressCus);
														cout << "\nCustomer Address Updated!\n";
														isfound = 1;
														break;
													}
												}
												if(isfound == 0){
													cout << "\n\nThis id search not found!\n";
												}
												cout << "\n\n\tPress anykey: --<(o)>--";
												getch();
											break;
											case 6:
												system("cls");
												isfound = 0;
												cout << "                                 UPDATE CONTACT CUSTOMER               \n";
												cout << "______________________________________________________________________________________\n\n";
												cout << "Enter id to update: ";
												cin >> idUpdateCus;
												for(i = 0; i < nCus; i++){
													if(idUpdateCus == custom[i].getId()){
														cout << "\nCustomer contact: " << custom[i].getContact() << endl;
														cout << "\nEnter new contact: ";
														cin >> newContactCus;
														custom[i].setContact(newContactCus);
														cout << "\nCustomer contact Updated!\n";
														isfound = 1;
														break;
													}
												}
												if(isfound == 0){
													cout << "\n\nThis id search not found!\n";
												}
												cout << "\n\n\tPress anykey: --<(o)>--";
												getch();
											break;
											case 7:
												system("cls");
												isfound = 0;
												cout << "                               UPDATE DATE OF BIRTH CUSTOMER                  \n";
												cout << "_________________________________________________________________________________________\n\n";
												cout << "Enter id to Dob: ";
												cin >> idUpdateCus;
												for(i = 0; i < nCus; i++){
													if(idUpdateCus == custom[i].getId()){
														cout << "\nCustomer Date of birth: " << custom[i].getDob() << endl;
														cout << "\nEnter new Date of birth: ";
														cin >> newDobCus;
														custom[i].setDob(newDobCus);
														cout << "\nCustomer Date of birth Updated!\n";
														isfound = 1;
														break;
													}
												}
												if(isfound == 0){
													cout << "\n\nThis id search not found!\n";
												}
												cout << "\n\n\tPress anykey: --<(o)>--";
												getch();
											break;
											case 8:
												system("cls");
												isfound = 0;
												cout << "                                    UPDATE ALL CUSTOMER                   \n";
												cout << "________________________________________________________________________________\n\n";
												cout << "Enter id to update: ";
												cin >> idUpdateCus;
												headerUserDisplay();
												for(i = 0; i < nCus; i++){
													if(idUpdateCus == custom[i].getId()){
														custom[i].dispayCustomer();
														custom[i].insertInfoCustomer();
														cout << "\nCustomer All Updated!\n";
														isfound = 1;
														break;
													}
												}
												if(isfound == 0){
													cout << "\n\nThis id search not found!\n";
												}
												cout << "\n\n\tPress anykey: --<(o)>--";
												getch();
											break;
											case 0:exit(0);break;
										}
									}
								break;
								case 5:
									system("cls");
									isfound = 0;
									if(nCus <= 0){
										cout << "There isn't any account's user in the system please create account first!\n";
									}else{
										cout << "                                          DELETE CUSTOMER                            \n";
										cout << "_________________________________________________________________________________________\n\n";
										cout << "Enter id to delete customer: ";
										cin >> idDeleteCus;
										for(i = 0; i < nCus; i++){
											if(idDeleteCus == custom[i].getId()){
												custom[i] = custom[i+1];
												nCus--;
												isfound = 1;
												cout << "\nThis customer deleted!\n";
												break;
											}
										}
										if(isfound == 0){
											cout << "\n\nThis id search not found!\n";
										}
									}
								break;
								case 6:exit(0);break;
								case 7:
									system("cls");
									int opDp;
									isfound = 0;
									if(nCus <= 0){
										cout << "There isn't any account's user in the system please create account first!\n";
									}else{
										cout << "CHECK ACCOUNT\n\n";
										cout << "Enter Your id to check account: ";cin>>idSearchCustomer;
										cout << "\n";
										headerCheckAccUser();
										for(i = 0; i < nCus; i++){
											if(idSearchCustomer == custom[i].getId()){
												custom[i].displayEeachCustomer();
												cout << "\n\n\tPress anykey: --<(o)>--";
												getch();
												custom[i].depositUser();
												isfound = 1;
												break;
											}
										}
										if(!isfound){
											cout << "\n\nThis id search not found in list!\n\n";
										}
									}
								break;
							}
							system("pause");
						}while(op_ctM != 0);
					break;
					case 3:
					// APP
						system("cls");
						int choice;
						do{
							system("cls");
							cout << "\n";
							cout << "                     +===============================================================================+\n";
							cout << "                     |                                        APP                                    |\n";
							cout << "                     +===============================================================================+\n\n\n";
							cout << "+------------------------+                +-------------------------+              +-------------------------+             +------------+                +------------+\n";
							cout << "|  [1] ACCOUNT CUSTOMER  |                |  [2] PASSWORD CUSTOMER  |              |    [3] PASSWORD STAFF   |             |  [4] EXIT  |                |  [0] BACK  |\n";
							cout << "+------------------------+                +-------------------------+              +-------------------------+             +------------+                +------------+\n\n";
							cout << "ENTER CHOICE: ";cin >> choice;
							switch(choice){
								case 1:
									headerCheckAccUser();
									for(i = 0; i < nCus; i++){
										custom[i].displayEeachCustomer();
									}
									cout << "\n\n\tPress anykey: --<(o)>--";
									getch();
								break;
								case 2:
									headerUsPwdCus();
									for(i = 0; i < nCus; i++){
										custom[i].showUsnPwdUser();
									}
									cout << "\n\n\tPress anykey: --<(o)>--";
									getch();
								break;
								case 3:
									headerUsPwdCus();
									for(i = 0; i < n; i++){
										staff[i].showUsnPwdStaff();
									}
									system("pause");
								break;
								case 4:exit(0);break;
							}
						}while(choice!=0);
					break;
					case 4:
						system("cls");
						Color8();
					break;				
					case 5:exit(0);break;				
					}
					system("cls");
				}while(op_info != 0);
			break;
			case 2:
				// User
				int opUs; 
				int op_user;
				system("cls");
				system("color 7");
				do{
					system("cls");
					cout << "===========================================================\n\n";
					cout << "                    B E L T I E  B A N K                 \n\n";
					cout << "===========================================================\n\n\n\n";
					cout << "\t1 <----  CREATE ACCOUNT\n\n";
					cout << "\t2 <----  SIGN IN\n\n";
					cout << "\t3 <----  FORGET PASSWORD\n\n";
					cout << "\t4 <----  COLOR\n\n";
					cout << "\t5 <----  EXIT\n\n";
					cout << "\t0 <----  BACK\n\n\n\n\n";
					cout << "____________________________________________________________\n\n";
					cin >> opUs;
					system("cls");
					switch(opUs){
						case 1:
							system("cls");
							custom[nCus].insertInfoCustomer();
							system("cls");
							cout << "\n-------------                   ----------";
							cout << "\n| 1.DEPOSIT |                   | 2.SKIP |";
							cout << "\n-------------                   ----------\n";
							cout << "\nSelect: ";
							cin >> op_DS;
							if(op_DS == 1){
								system("cls");
								cout << "\n================ DEPOSIT =================\n";
								custom[nCus].depositCus();
							}else{
								system("cls");
							}
							custom[nCus].RandomAccNumber();
							cout << "\nSet Username: ";
							cin >> usernameUser;
							custom[nCus].setUsername(usernameUser);
							cout << "\nSet Password: ";
							cin >> passwordUser;
							custom[nCus].setPassword(passwordUser);
							nCus++;
							cout << "Success...!\n";
							system("pause");
						break;
						case 2:  
							int opAtm,idOwner;
							system("cls");
							isfound = 0;
							if(nCus <= 0){
								cout << "There is not any account's user in system Please create account first!\n";
							}else{
								cout << "============ SIGN IN =========\n";
								cout << "\nEnter Username:";
								cin >> usernameUser;
								cout << "\nEnter Password: ";
								cin >> passwordUser;
								for(i = 0;i < nCus; i++){
									if(usernameUser == custom[i].getUsername() && passwordUser == custom[i].getPassword()){
										idOwner = custom[i].getId();
										do{
											system("cls");
											cout << "1. Myaccount/deposit/withdraw/transferownaccount/payment\n";
											cout << "2. Transfer to other account\n";
											cout << "0. back\n\n";
											cout << "==========================================================\n";
											cout << "Please choose option: ";cin >> opAtm;
											switch(opAtm){
												case 1:
													custom[i].Atm();
												break;
												case 2:
													if(nCus <= 1){
														cout << "There is only your account; there isn't any else account to transfer!\n";
													}else{
														cout << "Enter your id: ";cin >> idSearchCustomer;
														if(idSearchCustomer != idOwner){
															cout << "Your id incorrect!\n";
														}else{
															for(i = 0; i< nCus; i++){
																if(idSearchCustomer == custom[i].getId()){
																	cout << "Name: " << custom[i].getName() << endl;
																	cout << "[1].USD/[2].KHR\n";
																	cout << "Enter your choice: ";cin >> choice;
																	system("cls");
																	if(choice == 1){
																		cout << "Your total balance us = " << custom[i].getTotalBalancUs() << " $\n";
																		cout << "Enter Amount: $";cin >> amount;
																		if(amount <= custom[i].getTotalBalancUs()){
																			custom[i].transferOther('u',amount);
																			cout << "Enter id reciver: ";cin >> idSearchCustomer;
																			for(i = 0;i <nCus; i++){
																				if(idSearchCustomer != idOwner){
																					if(idSearchCustomer == custom[i].getId()){
																						cout << "Reciver's name: " << custom[i].getName() << endl;
																						custom[i].transferOtherAddToRcv('u',amount);
																						isfound = 1;
																						cout << "Success!\n";
																						break;
																					}
																				}
																			}
																			
																		}else{
																			cout << "Your Total balance isn't enough!\n";
																		}
																	}else if(choice == 2){
																		cout << "Your total balance kh = " << custom[i].getTotalBalacKh() << " R\n";
																		cout << "Enter Amount: R";cin >> amount;
																		if(amount <= custom[i].getTotalBalacKh()){
																			custom[i].transferOther('k',amount);
																			cout << "Enter id reciver: ";cin >> idSearchCustomer;
																			for(i = 0;i <nCus; i++){
																				if(idSearchCustomer == custom[i].getId()){
																					cout << "Reciver's name: " << custom[i].getName() << endl;
																					custom[i].transferOtherAddToRcv('k',amount);
																					cout << "Success!\n";
																					break;
																				}
																			}
																		}else{
																			cout << "Your Total balance isn't enough!\n";
																		}
																	}
																	system("pause");
																}
															}
															a:
															system("cls");
															cout << "Enter your id to menu: ";cin >> idSearchCustomer;
															if(idSearchCustomer==idOwner){
																for(i = 0; i < nCus; i++){
																	if(idSearchCustomer == custom[i].getId()){
																		custom[i];
																		break;
																	}
																}
															}else{
																cout << "Invalid id please try again!\n";
																system("pause");
																goto a;
															}
														}
													}
												break;
											}
											isfound = 1;
											system("pause");
										}while(opAtm != 0);
									}
								}
								if(!isfound){
									cout << "\n\n\nInvalid Password and Username please try again! \n";
								}
							}
							system("pause");
						break;
						case 3:
							system("cls");
							if(nCus <= 0){
								cout << "There isn't any accout in the system!\n";
							}else{
								cout << "======================== FORGET PASSWORD ======================\n\n";
								cout << "SEARCH USERNAME AND PASSWORD BY\n\n";
								cout << "\t\t+-----+------------+\n";
								cout << "\t\t|  1  |     ID     |\n";
								cout << "\t\t|  2  |    NAME    |\n";
								cout << "\t\t|  3  |   CONTACT  |\n";
								cout << "\t\t+-----+------------+\n\n";
								cout << "SELECT OPTION: "; cin >> choice;
								switch(choice){
									case 1:
										isfound = 0;
										cout << "Enter Your id: "; cin >> idSearchCustomer;
										headerUsPwdCus();
										for(i = 0; i < nCus; i++){
											if(idSearchCustomer == custom[i].getId()){
												custom[i].showUsnPwdUser();
												isfound = 1;
												break;
											}
										}
										if(isfound == 0){
											cout << "\nThe Id [ " << idSearchCustomer << " ] Search not found!\n\n";
										}
									break;
									case 2:
										isfound = 0;
										cout << "Enter Your Name: "; cin.ignore();getline(cin,name_search);
										headerUsPwdCus();
										for(i = 0; i < nCus; i++){
											if(name_search == custom[i].getName()){
												custom[i].showUsnPwdUser();
												isfound = 1;
												break;
											}
										}
										if(isfound == 0){
											cout << "\nThe name [ " << name_search << " ] Search not found!\n\n";
										}
									break;
									case 3:
										isfound = 0;
										cout << "Enter Your Contact: "; cin >> search_contact;
										headerUsPwdCus();
										for(i = 0; i < nCus; i++){
											if(search_contact == custom[i].getContact()){
												custom[i].showUsnPwdUser();
												isfound = 1;
												break;
											}
										}
										if(isfound == 0){
											cout << "\nThe Tel [ " << search_contact << " ] Search not found!\n\n";
										}
									break;
								}
							}
							system("pause");
						break;
						case 4:
							system("cls");
							Color8();
							break;
						case 5:exit(0);break;
					}
				}while(opUs != 0);
			break;
			case 3:
				// Stuff
				int opStaff;
				isfound = 0;
				if(n <= 0){
					cout << "There isn't any staff here please input information first!\n";
				}else{
					do{
						system("cls");
						cout << "======================= STAFF =========================\n\n\n";
						cout << "================           ================          ==========================\n";
						cout << "|  [0]  BACK   |           |  [1]. LOGIN  |          |  [2]. FORGET PASSWORD  |\n";
						cout << "================           ================          ==========================\n\n";
						cout << "PLEASE CHOOSE: ";cin >> choice;
						switch(choice){
							case 1:
								cout << "======================= LOGIN'S STAFF ======================\n\n";
								cout << "Enter Your Username: ";cin >> usn_staff;
								cout << "\nEnter Your Password: ";cin >> pass_staff;
								for(i = 0;i < n; i++){
									if(usn_staff == staff[i].getUsernameStaff() && pass_staff == staff[i].getPasswrdStaff()){
										do{
											system("cls");
											cout << "\n+----------------------------+            +-----------------------+           +-------------+              +------------+\n";
											cout << "|  [1]-VIEW OWN INFORMATION  |            |  [2]-MANAGE CUSTOMER  |           |  [3]-COLOR  |              |  [0]-BACK  |\n";
											cout << "+----------------------------+            +-----------------------+           +-------------+              +------------+\n\n";
											cout << "ENTER OPTION: ";cin >> opStaff;
											switch(opStaff){
												case 1:
													// VIEW OWN INFORMATION
													system("cls");
													isfound = 0;
													cout << "                                SEARCH INFORMATION STAFF                         \n";
													cout << "----------------------------------------------------------------------------------\n\n";
													cout << "[1] <--- Search by id\n";
													cout << "\n[2] <--- Search by name\n\n";
													cout << "Enter: ";
													cin >> search_staff;
													switch(search_staff){
														case 1:
															system("cls");
															cout << "                                   SEARCH BY ID                        \n";
															cout << "-------------------------------------------------------------------------\n\n";
															cout << "Enter id to search: ";
															cin >> search_id;
															headerStaffDisplay();
															for(i = 0;i < n; i++){
																if(search_id == staff[i].getId()){
																	staff[i].diplayStaff();
																	isfound = 1;
																	break;
																}
															}
															if(isfound == 0){
																cout << "\n\nThis id search not found!\n";
															}
															cout << "\n\n\tPress anykey: --<(o)>--";
															getch();
														break;
														case 2:
															// View own information through search id or name
															system("cls");
															cout << "                              SEARCH BY NAME                           \n";
															cout << "--------------------------------------------------------------------------\n\n";
															cout << "Enter name to search: ";
															cin.ignore();getline(cin,name_search);
															headerStaffDisplay();
															for(i = 0;i < n; i++){
																if(name_search == staff[i].getName()){
																	staff[i].diplayStaff();
																	isfound = 1;
																	break;
																}
															}
															if(isfound == 0){
																cout << "\n\nThis id search not found!\n";
															}
															cout << "\n\n\tPress anykey: --<(o)>--";
															getch();
														break;
													}
												break;
												case 2:
													system("cls");
													// Manage User
													if(nCus <= 0){
														cout << "There isn't any user here please create account first!\n";
													}else{
														do{
															system("cls");
															cout << "=========================== CUSTOMer MANAGE ===========================\n\n";
															cout << "\t[1] <-- CREATE ACCOUNT\n\n";
															cout << "\t[2] <-- DISPLAY\n\n";
															cout << "\t[3] <-- SEARCH\n\n";
															cout << "\t[4] <-- UPDATE\n\n";
															cout << "\t[5] <-- DELETE\n\n";
															cout << "\t[6] <-- EXIT\n\n";
															cout << "\t[7] <-- DEPOSIT\n\n";
															cout << "\t[0] <-- BACK\n\n\n";
															cout <<"______________________________________________________________________________\n\n";
															cout << "SELECT: ";cin >> op_ctM;
															switch(op_ctM){
																case 1:
																	system("cls");
																	cout << "                                   CREATE ACCOUNT CUSTOMER                     \n";
																	cout << "-----------------------------------------------------------------------------------\n\n";
																	cout << "How many customer that you insert: ";
																	cin >> num_customer;
																	for(i = 0; i < num_customer; i++){
																		cout << "\nCustomer: " << nCus + 1 << "\n\n";
																		custom[nCus].insertInfoCustomer();
																		system("cls");
																		cout << "\n-------------                   ----------";
																		cout << "\n| 1.DEPOSIT |                   | 2.SKIP |";
																		cout << "\n-------------                   ----------\n";
																		cout << "\nSelect: ";
																		cin >> op_DS;
																		if(op_DS == 1){
																			system("cls");
																			cout << "\n================ DEPOSIT =================\n";
																			custom[nCus].depositCus();
																		}else{
																			system("cls");
																		}
																		custom[nCus].RandomAccNumber();
																		cout << "\nSet Username: ";
																		cin >> usernameUser;
																		custom[nCus].setUsername(usernameUser);
																		cout << "\nSet Password: ";
																		cin >> passwordUser;
																		custom[nCus].setPassword(passwordUser);
																		nCus++;
																	}
																break;
																case 2:
																	system("cls");
																	isfound = 0;
																	cout << "                                                              DISPLAY CUSTOMER                \n";
																	headerUserDisplay();
																	for(i = 0; i < nCus; i++){
																		custom[i].dispayCustomer();
																		isfound = 1;
																	}
																	if(isfound == 0){
																		cout << "NO INFORMATION USER IN LIST!\n\n";
																	}
																	cout << "\n\n\t\t\t\t\t\tPress anykey: --<(o)>--";
																	getch();
																break;
																case 3:
																	system("cls");
																	cout << "================== Search Customer =================\n\n";
																	cout << "\n1 <---- SEARCH BY ID\n";
																	cout << "\n2 <---- SEARCH BY NAME\n";
																	cout << "\nENTER: ";
																	cin >> op_ctm_search;
																	switch(op_ctm_search){
																		case 1:
																			system("cls");
																			isfound = 0;
																			cout << "                            SEARCH BY ID                \n";
																			cout << "-----------------------------------------------------------------\n\n";
																			cout << "Enter id to search: ";
																			cin >> idSearchCustomer;
																			headerUserDisplay();
																			for(i = 0; i < nCus; i++){
																				if(idSearchCustomer == custom[i].getId()){
																					custom[i].dispayCustomer();
																					isfound = 1;
																					break;
																				}
																			}
																			if(isfound == 0){
																				cout << "\n\nThis id search not found!\n";
																			}
																			cout << "\n\n\tPress anykey: --<(o)>--";
																			getch();
																		break;
																		case 2:
																			system("cls");
																			isfound = 0;
																			cout << "                         SEARCH BY NAME              \n";
																			cout << "--------------------------------------------------------------\n\n";
																			cout << "Enter name to search: ";
																			cin.ignore();getline(cin, nameSearchCus);
																			headerUserDisplay();
																			for(i = 0; i < nCus; i++){
																				if(nameSearchCus == custom[i].getName()){
																					custom[i].dispayCustomer();
																					isfound = 1;
																					break;
																				}
																			}
																			if(isfound == 0){
																				cout << "\n\nThis name search not found!\n";
																			}
																			cout << "\n\n\tPress anykey: --<(o)>--";
																			getch();
																		break;
																	}
																break;
																case 4:
																	system("cls");
																	cout << "=================================================================\n\n";
																	cout << "                       UPDATE CUSTOMER                       \n\n";
																	cout << "=================================================================\n\n\n\n";
																	cout << "\n\t1 <----  UPDATE NAME\n";
																	cout << "\n\t2 <----  UPDATE ID\n";
																	cout << "\n\t3 <----  UPDATE AGE\n";
																	cout << "\n\t4 <----  UPDATE GENDER\n";
																	cout << "\n\t5 <----  UPDATE ADDRESS\n";
																	cout << "\n\t6 <----  UPDATE CONTACT\n";
																	cout << "\n\t7 <----  UPDATE DATE OF BIRTH\n";
																	cout << "\n\t8 <----  UPDATE All\n";
																	cout << "\n\t0 <----  BACK\n\n\n";
																	cout << "\n\n__________________________________________________________________\n\n\n";
																	cout << "ENTER: ";
																	cin >> opUpdate;
																	switch(opUpdate){
																		case 1:
																			system("cls");
																			isfound = 0;
																			cout << "================== UPDATE NAME CUSTOMER ================\n\n";
																			cout << "Enter id to update name: ";
																			cin >> idUpdateCus;
																			for(i = 0; i < nCus; i++){
																				if(idUpdateCus == custom[i].getId()){
																					cout << "\nCustomer Name : " << custom[i].getName() << endl;
																					cout << "\nEnter new name: ";
																					cin.ignore();getline(cin,newNameCus);
																					custom[i].setName(newNameCus);
																					cout << "\n\nCustomer Name Updated!\n";
																					isfound = 1;
																					break;
																				}
																			}
																			if(isfound == 0){
																				cout << "\n\nThis id search not found!\n";
																			}
																			cout << "\n\n\tPress anykey: --<(o)>--";
																			getch();
																		break;
																		case 2:
																			system("cls");
																			isfound = 0;
																			cout << "                               UPDATE ID CUSTOME                 \n";
																			cout << "__________________________________________________________________________\n\n";
																			cout << "Enter id to update: ";
																			cin >> idUpdateCus;
																			for(i = 0; i < nCus; i++){
																				if(idUpdateCus == custom[i].getId()){
																					cout << "\nCustomer Id: " << custom[i].getId() << endl;
																					cout << "\nEnter new Id: ";
																					cin >> newIdCus;
																					custom[i].setId(newIdCus);
																					cout << "\nCustomer Id Updated!\n";
																					isfound = 1;
																					break;
																				}
																			}
																			if(isfound == 0){
																				cout << "\n\nThis id search not found!\n";
																			}
																			cout << "\n\n\tPress anykey: --<(o)>--";
																			getch();
																		break;
																		case 3:
																			isfound = 0;
																			cout << "                               UPDATE AGE CUSTOMER                    \n";
																			cout << "___________________________________________________________________________\n\n";
																			cout << "Enter id to update: ";
																			cin >> idUpdateCus;
																			for(i = 0; i < nCus; i++){
																				if(idUpdateCus == custom[i].getId()){
																					cout << "\nCustomer Age: " << custom[i].getAge() << endl;
																					cout << "\nEnter new Age: ";
																					cin >> newAgeCus;
																					custom[i].setAge(newAgeCus);
																					cout << "\nCustomer Age Updated!\n";
																					isfound = 1;
																					break;
																				}
																			}
																			if(isfound == 0){
																				cout << "\n\nThis id search not found!\n";
																			}
																			cout << "\n\n\tPress anykey: --<(o)>--";
																			getch();
																		break;
																		case 4:
																			system("cls");
																			isfound = 0;
																			cout << "                            UPDATE GENDER CUSTOMER              \n";
																			cout << "_________________________________________________________________________\n\n";
																			cout << "Enter id to update: ";
																			cin >> idUpdateCus;
																			for(i = 0; i < nCus; i++){
																				if(idUpdateCus == custom[i].getId()){
																					cout << "\nCustomer Gender: " << custom[i].getGender() << endl;
																					cout << "\nEnter new Gender: ";
																					cin >> newGenderCus;
																					custom[i].setGender(newGenderCus);
																					cout << "\nCustomer Gender Updated!\n";
																					isfound = 1;
																					break;
																				}
																			}
																			if(isfound == 0){
																				cout << "\n\nThis id search not found!\n";
																			}
																			cout << "\n\n\tPress anykey: --<(o)>--";
																			getch();
																		break;
																		case 5:
																			system("cls");
																			isfound = 0;
																			cout << "                                 UPDATE ADDRESS CUSTOMER                   \n";
																			cout << "______________________________________________________________________________________\n\n";
																			cout << "Enter id to update: ";
																			cin >> idUpdateCus;
																			for(i = 0; i < nCus; i++){
																				if(idUpdateCus == custom[i].getId()){
																					cout << "\nCustomer Address: " << custom[i].getAddress() << endl;
																					cout << "\nEnter new Address: ";
																					cin >> newAddressCus;
																					custom[i].setAddress(newAddressCus);
																					cout << "\nCustomer Address Updated!\n";
																					isfound = 1;
																					break;
																				}
																			}
																			if(isfound == 0){
																				cout << "\n\nThis id search not found!\n";
																			}
																			cout << "\n\n\tPress anykey: --<(o)>--";
																			getch();
																		break;
																		case 6:
																			system("cls");
																			isfound = 0;
																			cout << "                                 UPDATE CONTACT CUSTOMER               \n";
																			cout << "______________________________________________________________________________________\n\n";
																			cout << "Enter id to update: ";
																			cin >> idUpdateCus;
																			for(i = 0; i < nCus; i++){
																				if(idUpdateCus == custom[i].getId()){
																					cout << "\nCustomer contact: " << custom[i].getContact() << endl;
																					cout << "\nEnter new contact: ";
																					cin >> newContactCus;
																					custom[i].setContact(newContactCus);
																					cout << "\nCustomer contact Updated!\n";
																					isfound = 1;
																					break;
																				}
																			}
																			if(isfound == 0){
																				cout << "\n\nThis id search not found!\n";
																			}
																			cout << "\n\n\tPress anykey: --<(o)>--";
																			getch();
																		break;
																		case 7:
																			system("cls");
																			isfound = 0;
																			cout << "                               UPDATE DATE OF BIRTH CUSTOMER                  \n";
																			cout << "_________________________________________________________________________________________\n\n";
																			cout << "Enter id to Dob: ";
																			cin >> idUpdateCus;
																			for(i = 0; i < nCus; i++){
																				if(idUpdateCus == custom[i].getId()){
																					cout << "\nCustomer Date of birth: " << custom[i].getDob() << endl;
																					cout << "\nEnter new Date of birth: ";
																					cin >> newDobCus;
																					custom[i].setDob(newDobCus);
																					cout << "\nCustomer Date of birth Updated!\n";
																					isfound = 1;
																					break;
																				}
																			}
																			if(isfound == 0){
																				cout << "\n\nThis id search not found!\n";
																			}
																			cout << "\n\n\tPress anykey: --<(o)>--";
																			getch();
																		break;
																		case 8:
																			system("cls");
																			isfound = 0;
																			cout << "                                    UPDATE ALL CUSTOMER                   \n";
																			cout << "________________________________________________________________________________\n\n";
																			cout << "Enter id to update: ";
																			cin >> idUpdateCus;
																			headerUserDisplay();
																			for(i = 0; i < nCus; i++){
																				if(idUpdateCus == custom[i].getId()){
																					custom[i].dispayCustomer();
																					custom[i].insertInfoCustomer();
																					cout << "\nCustomer All Updated!\n";
																					isfound = 1;
																					break;
																				}
																			}
																			if(isfound == 0){
																				cout << "\n\nThis id search not found!\n";
																			}
																			cout << "\n\n\tPress anykey: --<(o)>--";
																			getch();
																		break;
																		case 0:exit(0);break;
																	}
																break;
																case 5:
																	system("cls");
																	isfound = 0;
																	cout << "                                          DELETE CUSTOMER                            \n";
																	cout << "_________________________________________________________________________________________\n\n";
																	cout << "Enter id to delete customer: ";
																	cin >> idDeleteCus;
																	for(i = 0; i < nCus; i++){
																		if(idDeleteCus == custom[i].getId()){
																			custom[i] = custom[i+1];
																			nCus--;
																			isfound = 1;
																			cout << "\nThis customer deleted!\n";
																			break;
																		}
																	}
																	if(isfound == 0){
																		cout << "\n\nThis id search not found!\n";
																	}
																	cout << "\n\n\tPress anykey: --<(o)>--";
																	getch();
																break;
																case 6:exit(0);break;
																case 7:
																	system("cls");
																	int opDp;
																	isfound = 0;
																	cout << "CHECK ACCOUNT\n\n";
																	cout << "Enter Your id to check account: ";cin>>idSearchCustomer;	
																	headerCheckAccUser();
																	for(i = 0; i < nCus; i++){
																		if(idSearchCustomer == custom[i].getId()){
																			custom[i].displayEeachCustomer();
																			cout << "\n\n\tPress anykey: --<(o)>--";
																			getch();
																			custom[i].depositUser();
																			isfound = 1;
																			break;
																		}
																	}
																	if(!isfound){
																		cout << "\n\nThis id search not found in list!\n\n";
																	}
																	cout << "\n\n\tPress anykey: --<(o)>--";
																	getch();
																break;
															}
														}while(op_ctM != 0);
													}
													//
												break;
												case 3:
													system("cls");
													Color8();
												break;
											}
										}while(opStaff!=0);
										isfound = 1;
										system("pause");
									}
								}
								if(isfound == 0){
									cout << "\n\nInvalid Username and Password! Please Try Again!\n\n";
								}
								system("pause");
							break;
							case 2:
								// found usnername and password's staff
								cout << "================= FORGET PASSWORD ===================\n\n";
								cout << "SEARCH USERNAME AND PASSWORD BY\n\n";
								cout << "\t\t+-----+----------+\n";
								cout << "\t\t|  1  |    ID   |\n";
								cout << "\t\t|  2  |   NAME  |\n";
								cout << "\t\t+-----+---------+\n";
								cout << "SELECT OPTION: "; cin >> choice;
								switch(choice){
									case 1:
										isfound = 0;
										cout << "Enter Your Id: "; cin >> search_id;
										headerUsPwdCus();
										for(i = 0;i < n; i++){
											if(search_id == staff[i].getId()){
												staff[i].showUsnPwdStaff();
												isfound = 1;
												break;
												system("pause");
											}
										}
										if(isfound == 0){
											cout << "\nThis id[ "<< search_id << " ] Search not found!\n\n";
										}
										system("pause");
									break;
									case 2:
										isfound = 0;
										cout << "Enter Your Name: ";cin.ignore() ;getline(cin, name_search);
										headerUsPwdCus();
										for(i = 0;i < n; i++){
											if(name_search == staff[i].getName()){
												staff[i].showUsnPwdStaff();
												isfound = 1;
												break;
											}
										}
										if(isfound == 0){
											cout << "\nThis name[ "<< name_search << " ] Search not found!\n\n";
										}
										system("pause");
									break;
								}
							break;
						}
					}while(choice != 0);
				}
				system("pause");
			break;
		}
		system("cls"); 
	}while(op_log !=4);
	return 0;
}
