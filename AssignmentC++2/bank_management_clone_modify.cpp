 #include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
#include <conio.h>
#include <ctime> // Import the ctime library
using namespace std;
int main();
class LOGIN {
private:
	string username_admin, password_admin;
	string username_user, password_user;
	int pin;
public:
	bool b;
	int barwidth = 20;
	void Admin() {
		while(!b){
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
							cout << ">";
						}else if(j==pos){
							cout << ">";
						}else {
							cout << " ";
						}
					}
					cout << "] ";
					cout << i << " % \r";
				}
				b = true;
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
				}
				cout << "\n\n\nInvalid password and username!\n\n\n";
			}
		}
		Pin();
	}
	void Pin() {
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
	
	string getUsername(){
		return username_user;
	}
	string getPassword(){
		return password_user;
	}

	void setUsername(string SusernameUs){
		this->username_user = SusernameUs;
	}
	void setPassword(string SpasswordUs){
		this->password_user = SpasswordUs;
	}

};

class STAFF  {
protected:
	int id,age;
	string name,dob,address,position, gender,start_to_work;
	float salary;
	string username_staff, password_staff;
public:

	void insertInfoPriavte() {
		cout << "\nEnter name         : "; cin.ignore(); getline(cin,name);
		cout << "\nEnter gender       : "; cin >> gender;
		cout << "\nEnter id           : "; cin >> id;
		cout << "\nEnter age          : "; cin >> age;
		cout << "\nEnter adress       : "; cin.ignore();getline(cin,address);
		cout << "\nEnter date of birth: "; cin >> dob;
	}
	void insertinfoStaffWordk(){
		cout << "\nEnter position     : "; cin.ignore();getline(cin,position);
		cout << "\nEnter salary       : $"; cin >> salary;
		cout << "\nEnter start to work: ";cin >> start_to_work;
	}
	void diplayStaff(){
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
	// getter
	int getId(){
		return id;
	}
	int getAge(){
		return age;
	}
	string getStartToWork(){
		return start_to_work;
	}
	string getName(){
		return name;
	}
	string getDob(){
		return dob;
	}
	string getAddress(){
		return address;
	}
	string getPosition(){
		return position;
	}
	
	string getGender(){
		return gender;
	}
	
	string getUsernameStaff(){
		return username_staff;
	}
	string getPasswrdStaff(){
		return password_staff;
	}
float getSalary(){
		return salary;
	}
	// setter
	void setId(int Id){
		this->id = Id;
	}
	void setAge(int Age){
		this->age = Age;
	}
	void setStartToWork(string SstartToWork){
		this->start_to_work = SstartToWork;
	}
	void setName(string Name){
		this->name = Name;
	}
	void setDob(string Dob){
		this->dob = Dob;
	}
	void setAddress(string Address){
		this->address = Address;
	}
	void setPosition(string Position){
		this->position = Position;
	}
	void setGender(string Gender){
		this->gender = Gender;
	}
	void setSalary(float Salary){
		this->salary = Salary;
	}
	
	void CreateUsnPassStaff(){
		cout << "\nSet Username Staff: "; cin >> username_staff;
		cout << "\nSet Password Staff: "; cin >> password_staff;
	}
	void showUsnPwdUser(){
		cout << setw(34) << "|" << setw(20) << name << "   |" << setw(20) << getUsernameStaff() << "   |" << setw(20) << getPasswrdStaff() << "   |\n" ;
	}
};

class APP {
private:
	int internet,tv,other_payment;
	string accountNumber;
	string RandomNew;
public:
	int water,electric;
	string Time[100];
public:
	void RandomAccNumber(){
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
	// getter
	string getAccountNumber(){
		return accountNumber;
	}
	string getTime(){
		int t = 0;
		time_t timestamp = time(NULL);
		struct tm datetime = *localtime(&timestamp);
		return Time[t] = asctime(&datetime);
		t++;
	}
	int getInternet(){
		return internet;
	}
	int getTv(){
		return tv;
	}
	int getOtherPayment(){
		return other_payment;
	}
	// setter
	void setInternet(int Sinternet){
		this->internet = Sinternet;
	}
	void setTv(int Stv){
		this->tv = Stv;
	}
	void setOtherPayment(int Sother_payment){
		this->other_payment = Sother_payment;
	}
};

class CUSTOMER : public STAFF , public LOGIN, public APP {
private:
	double total_Balance_us = 0;
	long total_Balance_kh = 0;
	double amountUs = 0;
	long amountKh = 0;
	string contact;
	
public:
	void insertInfoCustomer() {
		insertInfoPriavte();
		cout << "\nEnter contact          : "; cin >> contact;
	}
	void depositCus(){
		cout << "\nEnter total balance US $: "; cin >> total_Balance_us;
		cout << "\nEnter total balance KH ៛: "; cin >> total_Balance_kh;
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
		<< " $  |" << setw(21) << total_Balance_kh << "៛​  |" << endl;
		cout << "+-----------------+----------------+------------+-------------+-------------------+----------------------+----------------------+-------------------------+------------------------+\n";
	}
	void displayEeachCustomer(){
		cout << "|" << setw(19) << getAccountNumber() << "   |" << setw(19) << getName() << "  |" << setw(10) << getId() << "   |" << setw(20) << getTotalBalancUs() << " $   |" << setw(21) << getTotalBalacKh() << "៛  |" << setw(19) << getDob() << "   |" << endl;
		cout << "+----------------------+---------------------+-------------+-------------------------+------------------------+----------------------+\n";
	}
	string getContact(){
		return contact;
	}
	double getTotalBalancUs(){
		return total_Balance_us;
	}
	long getTotalBalacKh(){
		return total_Balance_kh;
	}
	void setContact(string Contact){
		this->contact = Contact;
	}
	void setTotalBalancUs(double StotalBalanceUs){
		this->total_Balance_us = StotalBalanceUs;
	}
	void setTotalBalanKh(long StotalBalnceKh){
		this->total_Balance_kh = StotalBalnceKh;
	}
	void MenuCurrency(){
		system("cls");
		cout << "====================         ====================         ==============\n";
		cout << "=  [1] Account US  =         =  [2] Account KH  =         =  [0] Exit  =\n";
		cout << "====================         ====================         ==============\n\n";
	}
	// void showUsnPwdUser(){
	// 	cout << setw(34) << "|" << setw(20) << name << "   |" << setw(20) << getUsername() << "   |" << setw(20) << getPassword() << "   |\n" ;
	// }
	void myAccount(double total_Balance_us,long total_Balance_kh){
		cout << "\n\t---------> ["<<name<<"] Account <----------\n\n";
		cout << "\tbalance US: " << total_Balance_us << " $\n";
		cout << "\tbalance KH: " << total_Balance_kh << " ៛\n";
	}
	void depositUser(){
		system("cls");
		int opDp;
		MenuCurrency();
		cout << "Enter your choice: ";
		cin >> opDp;
		switch(opDp){
			case 1:
				total_Balance_us += depositUs();
				massageInforDpsUs();
			break;
			case 2:
				total_Balance_kh += depositKh();
				massageInforDpsKh();
			break;
			case 0:
				exit(0);
		}
		myAccount(total_Balance_us,total_Balance_kh);
	}
	long depositKh(){
		cout << "\n\t----------> Deoposit Account KH <------------\n\n";
		cout << "Enter amount do you want DEPOSIT: ៛";
		cin >> amountKh;
		if(amountKh > 0){
			return amountKh;
		}else {
			cout << "\tInvalid amount!\n";
			return amountKh = 0;
		}
	}
	double depositUs(){
		cout << "\n\t----------> Deoposit Account US <------------\n\n";
		cout << "Enter amount do you want DEPOSIT: $";
		cin >> amountUs;
		if(amountUs > 0){
			return amountUs;
		}else {
			cout << "\tInvalid amount!\n";
			return amountUs = 0;
		}
	}
	long withDrawKh(){
		cout << "\n\t----------> Withdraw Account KH <------------\n\n";
		cout << "Enter amount do you want WITHDRAW: ៛";
		cin >> amountKh;
		if(amountKh > 0){
			return amountKh;
		}else {
			cout << "\tInvalid amount!\n";
			return 0;
		}
	}
	double withDrawUs(){
		cout << "\n\t----------> Withdraw Account US <------------\n\n";
		cout << "Enter amount do you want WITHDRAW: $";
		cin >> amountUs;
		if(amountUs > 0){
			return amountUs;
		}else {
			cout << "\tInvalid amount!\n";
			return 0;
		}
	}
	long tranSfersKh(){
		cout << "\n\t----------> Transfer Account KH <------------\n\n";
		cout << "Enter Amount KHR: ៛";
		cin >> amountKh;
		return amountKh; 
	}
	double tranSfersUs(){
		cout << "\n\t----------> Transfer Account US <------------\n\n";
		cout << "Enter Amount USD: $";
		cin >> amountUs;
		return amountUs;
	}
	long PaymentTv(){
		cout << "\n\t----------> Payment <--------------\n";
		cout << "Input Amount for paymemt: $/៛";
		cin >> amountKh;
		setTv(amountKh);
		return getTv();
	}
	int PaymentInternet(){
		cout << "\n\t----------> Payment <--------------\n";
		cout << "Enter Amount for paymemt: $/៛";
		cin >> amountKh;
		setInternet(amountKh);
		return getInternet();
	}
	int PaymentOther(){
		cout << "\n\t----------> Payment <--------------\n";
		cout << "Enter Amount for paymemt: $/៛ ";
		cin >> amountKh;
		setOtherPayment(amountKh);
		return getOtherPayment();
	}



//		 ______Successfully______

//   ----------------------------------
//     account send money  : -------
//     account number      : -------
//     amount send         : -------
//   ----------------------------------
//     reciver             : -------
//     date when send	   : -------
//   ----------------------------------

//_________________________________________

	void massageInforDpsUs(){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount deposit           : +" << amountUs << " $\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account recive           : " << name << " (US)\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInforDpsKh(){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount deposit           : +" << amountKh << " ៛\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account recive           : " << name << " (KH)\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInforWdUs(){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount withdraw          : -" << amountUs << " $\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << " (US)\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInforWdKh(){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount withdraw          : -" << amountKh << " ៛\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << " (KH)\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInfoTfUs(){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << "(KH)\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Deduction amount         : " << amountKh << " ៛\n";
		cout << "  \n  ------------------------------------------------------------\n";
		cout << "     Reciver amount           : " << name << " (US)\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInfoTfKh(){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << " (US)\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Deduction amount         : " << amountUs << " $\n";
		cout << "  \n  ------------------------------------------------------------\n";
		cout << "     Reciver amount           : " << name << " (KH)\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInfoWater(){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount water             : -" << water << " $/៛\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << " (US/KH)\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInfoElectric(){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount electric          : -" << electric << " $/៛\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << " (US/KH)\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInfoInternet(){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount internet          : -" << getInternet() << " $/៛\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << " (US/KH)\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInfoPmTv(){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount television        : -" << getTv() << " $/៛\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << " (US/KH)\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void massageInfoOhterPm(){
		system("cls");
		cout << "\n\n                       __Successfuly__                 \n\n";
		cout << "  -----------------------------------------------------------\n\n";
		cout << "     Amount ohter payment     : -" << getOtherPayment() << " $/៛\n";
		cout << "  \n  ------------------------------------------------------------\n\n";
		cout << "     Account deduction amount : " << name << " (US/KH)\n";
		cout << "     Account number           : " << getAccountNumber() << "\n";
		cout << "     Date                     : " << getTime() << "\n";
		cout << "\n\n___________________________________________________________________\n";
	}
	void Atm(){
		system("cls");
		int opDp;
		int choice;
		do{
			system("cls");
			cout << "|\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/|\n";
			cout << "|/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\|\n\n";
			cout << "\n\n\t1 <=====  M-Y  A-C-C-O-U-N-T\n\n";
			cout << "\t2 <=====  D-E-P-O-S-I-T\n\n";
			cout << "\t3 <=====  W-I-T-H-D-R-A-W\n\n";
			cout << "\t4 <=====  T-R-A-N-S-F-E-R-S\n\n";
			cout << "\t5 <=====  P-A-Y-M-E-N-T\n\n";
			cout << "\t0 <=====  B-A-C-K\n\n\n";
			cout << "|\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/|\n";
			cout << "|/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\|\n";
			cout << "\n\nPlease choose option: ";
			cin >> choice;
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
							total_Balance_us += depositUs();
							massageInforDpsUs();
						break;
						case 2:
							total_Balance_kh += depositKh();
							massageInforDpsKh();
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
							total_Balance_us -= withDrawUs();
							massageInforWdUs();
						break;
						case 2:
							total_Balance_kh -= withDrawKh();
							massageInforWdKh();
						break;
						case 0:exit(0);break;
					}
					myAccount(total_Balance_us,total_Balance_kh);
				break;
				case 4:
					int opTs;
					int transferkh;
					cout << "         \t+----------+\n";
					cout << "         \t| TRANSFER |\n";
					cout << "         \t+----------+\n\n";
					cout <<"\t[1]. TRANSFER TO OWN ACCOUNT\n\n";
					cout <<"\t[2]. TRANSFER TO OTHER ACCOUNT\n\n";
					cout << "______________________________________\n";
					cout << "Enter your choice: ";
					cin >> opDp;
					switch(opDp){
						case 1:
							MenuCurrency();
							cout << "Choose Account recive: ";
							cin >> opTs;
							switch(opTs){
								case 1:
									total_Balance_kh -= tranSfersKh();
									total_Balance_us += (amountKh / 4000);
									massageInfoTfUs();
								break;
								case 2:
									total_Balance_us -= tranSfersUs();
									total_Balance_kh += (amountUs * 4000);
									massageInfoTfKh();
								break;
								case 0:exit(0);break;
							}
							myAccount(total_Balance_us,total_Balance_kh);
						break;
						case 2:
							cout << "\tTransfers to other account\n\n";
							MenuCurrency();
							cout << "Choose Account : ";
							cin >> opTs;
							switch(opTs){
								case 1:
									total_Balance_us -= tranSfersUs();
									massageInfoTfUs();
								break;
								case 2:
									total_Balance_kh -= tranSfersKh();
									massageInfoTfKh();
								break;
								case 0:exit(0);break;
							}
							myAccount(total_Balance_us,total_Balance_kh);
						break;
					}
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
									cout << "Enter amount water us: $";
									cin >> water;
									total_Balance_us -= float(water);
									massageInfoWater();
								break;
								case 2:
									cout << "Enter amount water kh: ៛";
									cin >> water;
									total_Balance_kh -= water;
									massageInfoWater();
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
									cout << "Enter amount electric US: $";
									cin >> electric;
									total_Balance_us -= float(electric);
									massageInfoElectric();
								break;
								case 2:
									cout << "Enter amount electric KH: ៛";
									cin >> electric;
									total_Balance_kh -= electric;
									massageInfoElectric();
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
									total_Balance_us -= float(PaymentInternet());
									massageInfoInternet();
								break;
								case 2:
									total_Balance_kh -= PaymentInternet();
									massageInfoInternet();
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
									total_Balance_us -= float(PaymentTv());
									massageInfoPmTv();
								break;
								case 2:
									total_Balance_kh -= PaymentTv();
									massageInfoPmTv();
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
									total_Balance_us -= float(PaymentOther());
									massageInfoOhterPm();
								break;
								case 2:
									total_Balance_kh -= PaymentOther();
									massageInfoOhterPm();
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
class RunCode : LOGIN{
	public:
		int nCus=0 , n=0;
		int i,num_staff;
		bool isfound;
		bool b;
		string us_staff,ps_staff;
		char c;
		// Declare Function

		void main_menu(); 

		void FunctionAdminWork();
		void AddInformationtStaff();
		void DisplayInformationStaff();
		void SearchInformationStaff();
		void UpdateInformationStaff();
		void DeleteInformationStaff();

		void DepositEachCustomer();

		void FunctionStaffWork();
		void ManageCustomer();
		void CreateAccountCustomer();
		void DisplayAcountCustomer();
		void SearchAccountCustomer();
		void UpdateAccoutnCustomer();
		void DeleteAccounttCustomer();

		void AppForAdminCheck();
		void SomeInformationCustomer();
		void ViewOwnInformationStaff();
		void PasswordUsernameCustomer();

		void FunctionUser();
		void SiginUser();
		void StaffLogin();

	private:
		STAFF staff[100];
		CUSTOMER custom[100];
		LOGIN log;
};

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
void Color8(){
    int choice;
    // while(choice!=0){
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
    // }
	system("cls");
}



void RunCode::FunctionAdminWork(){
	system("cls");
	int op_stM,op_info;
	log.Admin(); 
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
							AddInformationtStaff();
							break;
						case 2:
							system("cls");
							DisplayInformationStaff();
							break;
						case 3:
							system("cls");
							SearchInformationStaff();
							break;
						case 4:
							system("cls");
							UpdateInformationStaff();
							break;
						case 5:
							system("cls");
							DeleteAccounttCustomer();
						break;
					}
					system("cls");
			}while(op_stM != 0);
		break;
		case 2:
			system("cls");
			ManageCustomer();
		break;
		case 3:
		// APP
			system("cls");
			AppForAdminCheck();
		break;
		case 4:
			system("cls");
			Color8();
		break;				
		case 5:exit(0);break;				
		}
		system("cls");
	}while(op_info != 0);
}
void RunCode::FunctionStaffWork(){
	int opStaff;
	system("cls");
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
				ViewOwnInformationStaff();
			break;
			case 2:
				system("cls");
				// Manage User
				ManageCustomer();
			break;
			case 3:
				system("cls");
				Color8();
			break;
		}
	}while(opStaff!=0);
}
void RunCode::FunctionUser(){
	int opUs; 
	system("cls");
	system("color 7");
	do{
		system("cls");
		cout << "===========================================================\n\n";
		cout << "                    A C L E D A  B A N K                 \n\n";
		cout << "===========================================================\n\n\n\n";
		cout << "\t1 <----  CREATE ACCOUNT\n\n";
		cout << "\t2 <----  SIGN IN\n\n";
		cout << "\t3 <----  COLOR\n\n";
		cout << "\t4 <----  EXIT\n\n";
		cout << "\t0 <----  BACK\n\n\n\n\n";
		cout << "____________________________________________________________\n\n";
		cin >> opUs;
		system("cls");
		switch(opUs){
			case 1:
				system("cls");
				CreateAccountCustomer();
			break;
			case 2:  
				SiginUser();
			break;
			case 3:
				system("cls");
				Color8();
				break;
			case 4:exit(0);break;
		}
	}while(opUs != 0);
}

void RunCode::ManageCustomer(){
	int op_ctM;
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
				CreateAccountCustomer();
			break;
			case 2:
				system("cls");
				DisplayAcountCustomer();
			break;
			case 3:
				system("cls");
				SearchAccountCustomer();
			break;
			case 4:
				system("cls");
				UpdateAccoutnCustomer();
			break;
			case 5:
				system("cls");
				DeleteAccounttCustomer();
			break;
			case 6:exit(0);break;
			case 7:
				system("cls");
				DepositEachCustomer();
			break;
		}
	}while(op_ctM != 0);
}
void RunCode::DepositEachCustomer(){
	int opDp,idSearchCustomer;
	isfound = 0;
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
	cout << "\n\n\tPress anykey: --<(o)>--";
	getch();
}

void RunCode::AddInformationtStaff(){
	cout << "                          ENTER INFORMATION STAFF               \n";
	cout << "------------------------------------------------------------------------\n\n";
	cout << "How many staff do you want input: ";
	cin >> num_staff;
	for(i = 0; i < num_staff;i++){
		cout << "\nNo: " << n + 1 << "\n";
		staff[n].insertInfoPriavte();
		staff[n].insertinfoStaffWordk();
		staff[n].CreateUsnPassStaff();
		n++;
	}
}
void RunCode::DisplayInformationStaff(){
	isfound = 0;
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
	cout << "\n\n\tPress anykey: --<(o)>--";
	getch();
}
void RunCode::SearchInformationStaff(){
	isfound = 0;
	string name_search;
	int search_id,search_staff;
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
void RunCode::UpdateInformationStaff(){
	int idUpdate_search,update_info_staff;
	int opUpdate;
	float newSalary;
	int newId,newAge;
	string new_name,newGender,newDob,newAddress,newPosition,newStartToWork;
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
					cout << "\nEnter New Salary: ៛";
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
					staff[i].insertInfoPriavte();
					staff[i].insertinfoStaffWordk();
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
		case 0:
		exit(0);
	}
}
void RunCode::DeleteInformationStaff(){
	isfound = 0;
	int idDeleteStaff;
	cout << "                                      DELETE INFORMAITON STAFF                           \n";
	cout << "----------------------------------------------------------------------------------------\n\n";
	cout << "Enter id to delete information staff: ";
	cin >> idDeleteStaff;
	for(i = 0; i < n; i++){
		if(idDeleteStaff == staff[i].getId()){
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

void RunCode::CreateAccountCustomer(){
	int num_customer;
	int op_DS;
	string usernameUser,passwordUser;
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
}
void RunCode::DisplayAcountCustomer(){
	isfound = 0;
	cout << "                                                              DISPLAY CUSTOMER                \n";
	cout << "\n";
	headerUserDisplay();
	for(i = 0; i < nCus; i++){
		custom[i].dispayCustomer();
		isfound=1;
	}
	if(isfound == 0){
		cout << "NO INFORMATION IN LIST PLEASE ADD INFORMATION FIRST!\n\n";
	}
	cout << "\n\n\t\t\t\t\t\tPress anykey: --<(o)>--";
	getch();
}
void RunCode::SearchAccountCustomer(){
	int op_ctm_search,idSearchCustomer;
	string nameSearchCus;
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
void RunCode::UpdateAccoutnCustomer(){
	string newNameCus,newGenderCus,newAddressCus,newDobCus,newContactCus;
	int idUpdateCus;
	int newIdCus,newAgeCus;
	int opUpdate;
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
void RunCode::DeleteAccounttCustomer(){
	isfound = 0;
	int idDeleteCus;
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
}

void RunCode::AppForAdminCheck(){
	int choice;
	do{
		system("cls");
		cout << "\n";
		cout << "                     +===============================================================================+\n";
		cout << "                     |                                        APP                                    |\n";
		cout << "                     +===============================================================================+\n\n\n";
		cout << "+------------------------+                +-------------------------+            +------------+             +------------+\n";
		cout << "|  [1] ACCOUNT CUSTOMER  |                |  [2] PASSWORD CUSTOMER  |            |  [3] BACK  |             |  [4] EXIT  |\n";
		cout << "+------------------------+                +-------------------------+            +------------+             +------------+\n\n";
		cout << "ENTER CHOICE: ";cin >> choice;
		switch(choice){
			case 1:
				SomeInformationCustomer();
			break;
			case 2:
				PasswordUsernameCustomer();
			break;
			case 4:exit(0);break;
		}
	}while(choice!=3);
}
void RunCode::ViewOwnInformationStaff(){
	isfound = 0;
	int search_staff,search_id;
	string name_search;
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
}
void RunCode::SomeInformationCustomer(){
	headerCheckAccUser();
	for(i = 0; i < nCus; i++){
		custom[i].displayEeachCustomer();
	}
	cout << "\n\n\tPress anykey: --<(o)>--";
	getch();
}
void RunCode::PasswordUsernameCustomer(){
	headerUsPwdCus();
	for(i = 0; i < nCus; i++){
		custom[i].showUsnPwdUser();
	}
	cout << "                                 +-----------------------+-----------------------+-----------------------+\n";
	cout << "\n\n\tPress anykey: --<(o)>--";
	getch();
}

void RunCode::StaffLogin(){
		system("cls");
		isfound = 0;
		cout << "++=====================================================++\n";
		cout << "||                     STAFF LOGIN                     ||\n";
		cout << "++=====================================================++\n\n";
		cout << "Enter Username: "; cin >> us_staff;
		cout << "\nEnter Password: "; cin >> ps_staff;
		for(i = 0; i < n; i++){
			if(us_staff == staff[i].getUsernameStaff() && ps_staff == staff[i].getPasswrdStaff()){
				cout << "\nLogin Success!\n\n";
				FunctionStaffWork();
				isfound = 1;
				break;
			}
		}
		if(!isfound){
			cout << "\n\n\nInvalid Please try again or Create new Account \n\n";
		}
		system("pause");
}
void RunCode::SiginUser(){
	system("cls");
	isfound = 0;
	string usernameUser,passwordUser;
	cout << "============ SIGN IN =========\n";
	cout << "\nEnter Username:";
	cin >> usernameUser;
	cout << "\nEnter Password: ";
	cin >> passwordUser;
	for(i = 0;i < nCus; i++){
		if(usernameUser == custom[i].getUsername() && passwordUser == custom[i].getPassword()){
			cout << "no: " << nCus+1 << "\n\n";
			custom[i].Atm();
			isfound = 1;
			break;
		}
	}
	if(!isfound){
		cout << "\n\n\nInvalid Please try again or Create new Account \n\n";
	}
}

void RunCode::main_menu(){
	int op_log;
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
				FunctionAdminWork();
			break;
				// User
			case 2:
				FunctionUser();
			break;
			case 3:
				// Stuff
				StaffLogin();
			break;
		}
		system("cls"); 
	}while(op_log !=4);
}

int main() {
	RunCode r;
	r.main_menu();
	return 0;
}
