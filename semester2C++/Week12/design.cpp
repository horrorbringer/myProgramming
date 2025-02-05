#include<iostream> 
#include<windows.h>
#include<iomanip>
using namespace std;
// design login
string name,gender,address,dob,contact;
double total_Balance_us;
long total_Balance_kh;
int id, age;
void log(){
    int barwidth = 40;
    for(int i = 0;i<100;i++){
        system("color A");
        cout << "[";
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
        Sleep(50);
    }
}
void input(){

    cout << "Enter name               : "; cin.ignore();getline(cin, name);
    cout << "\nEnter gender           : "; getline(cin,gender);
    cout << "\nEnter id               : "; cin >> id;
    // cout << "\nEnter age              : "; cin >> age;
    // cout << "\nEnter date of birth    : "; cin >> dob;
    // cout << "\nEnter address          : "; cin.ignore();getline(cin, address);
    // cout << "\nEnter contact          : "; cin >> contact;

    // cout << "\nEnter total balance US $: "; cin >> total_Balance_us;
    // cout << "\nEnter total balance KH ៛: "; cin >> total_Balance_kh;

}
void output(){
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
// design menu currency
void MenuCurrency(){
    system("cls");
    cout << "====================         ====================         ==============\n";
    cout << "=  [1] Account US  =         =  [2] Account KH  =         =  [0] Exit  =\n";
    cout << "====================         ====================         ==============\n\n";
}
void m(){
    cout << "         \t----------\n";
    cout << "         \t TRANSFER\n";
    cout << "         \t----------\n\n";
    cout <<"\t[1]. TRANSFER TO OWN ACCOUNT\n\n";
    cout <<"\t[2]. TRANSFER TO OTHER ACCOUNT\n\n";
    cout << "______________________________________";
}
void td(){
    cout << "\n";
    cout << "+----------------------+---------------------+-------------+-------------------------+------------------------+----------------------+\n";
    cout << "|      Acc Nmber       |        Name         |      ID     |    Total Balance US     |      Total Balance KH  |           Dob        |\n";
    cout << "+----------------------+---------------------+-------------+-------------------------+------------------------+----------------------+\n";
    cout << "|" << setw(19) << contact << "   |" << setw(19) << name << "  |" << setw(10) << id << "   |" << setw(20) << total_Balance_us << " $   |" << setw(21) << total_Balance_kh << "៛  |" << setw(19) << dob << "   |" << endl;
    cout << "+----------------------+---------------------+-------------+-------------------------+------------------------+----------------------+\n";
}
void tba(){
    cout << "\n+-----------------+----------------+------------+-------------+-------------------+----------------------+----------------------+---------------------+--------------------+\n";
    cout << "|        Name     |     Gender     |     Id     |      Age    |      Address      |           Dob        |       Position       |        Salary       |    Start_to_work   |\n";
    cout << "+-----------------+----------------+------------+-------------+-------------------+----------------------+----------------------+---------------------+--------------------+\n";
}
void hdCtm(){
    cout << "\n";
    cout << "+-----------------+----------------+------------+-------------+-------------------+----------------------+----------------------+-------------------------+------------------------+\n";
    cout << "|        Name     |     Gender     |     Id     |      Age    |      Address      |           Dob        |       Contact        |    Total Balance US     |      Total Balance KH  |\n";
    cout << "+-----------------+----------------+------------+-------------+-------------------+----------------------+----------------------+-------------------------+------------------------+\n";
}
void Headerpass(){
    cout << "\n";
    cout << "                                 +-----------------------+-----------------------+-----------------------+\n";
    cout << "                                 |           Name        |        Username       |        Password       |\n";
    cout << "                                 +-----------------------+-----------------------+-----------------------+\n";
    cout << setw(34) << "|" << setw(20) << name << "   |" << setw(20) << id << "   |" << setw(20) << gender << "   |" ;
}

void massageInfo(  string TypAmt, // dps, wd, dedution , water, elec, inter, tv, other
                        char simbol, // +, -
                        double NumAmount,
                        char currencySimb,
                        char tsf,
                        string nameUs,
                        char riciver,
                        string acc_nb, 
                        string tm,
                        string crAcc_dDt,
                        string crAcc_rCv ){
    system("cls");
    cout << "\n\n                       __Successfuly__                 \n\n";
    cout << "  -----------------------------------------------------------\n\n";
    cout << "     Amount"<< setw(18) << TypAmt<<" : "<<simbol<<" "<< NumAmount << currencySimb <<"\n";
    if(tsf == 't'){
        cout << "     Account deduction amount : " << nameUs << crAcc_dDt <<"\n";
    }
    cout << "  \n  ------------------------------------------------------------\n\n";
    if(riciver == 'y'){
        cout << "     Account recive           : " << nameUs << crAcc_rCv <<"\n";
    }
    else{
        cout << "     Account deduction amount : " << nameUs << crAcc_dDt <<"\n";
    }
    cout << "     Account number           : " << acc_nb << "\n";
    cout << "     Date                     : " << tm << "\n";
    cout << "\n\n___________________________________________________________________\n";
}
/*
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
*/
	// void massageInfoTfUs(){
	// 	system("cls");
	// 	cout << "\n\n                       __Successfuly__                 \n\n";
	// 	cout << "  -----------------------------------------------------------\n\n";
	// 	cout << "     Account deduction amount : " << name << "(KH)\n";
	// 	cout << "     Account number           : " << getAccountNumber() << "\n";
	// 	cout << "     Deduction amount         : " << amountKh << " ៛\n";
	// 	cout << "  \n  ------------------------------------------------------------\n";
	// 	cout << "     Reciver amount           : " << name << " (US)\n";
	// 	cout << "     Date                     : " << getTime() << "\n";
	// 	cout << "\n\n___________________________________________________________________\n";
	// }
int main() {
    cout << fixed << showpoint << setprecision(2);

    // char p = 205;
    // log();
    // MenuCurrency();
    // m();​​​​​​​​​​​​​​​​​​​​​​​​​
    // cout << "\n៛ " << p << "\n";

    // cout << "\n\t---------> [ Meas Vanny ] Account <----------\n\n";

    // tba();
    // input();
    // hdCtm();
    // output();
    // td();
    // Headerpass();
    // cout << setw(34) << "+-----------------------+-----------------------+-----------------------+";
    // cout << setw(34) << "+-----------+";
    // massageInfo("Transfer",'+',10010,'$',"Loki",'y',"10002100","10:10"," (US) "," (KH) ");
    double a;
    double b;
    b = 7/2;
    a = 5.1;
    cout << a + b;
    return 0;

}