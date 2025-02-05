#include<iostream>
#include<conio.h>
#include<windows.h>
#include <thread>
#include <chrono>
using namespace std;

void displayProgressBar(int totalItems) {
    int width = 50;  // Width of the progress bar
    int progress = 0;

    string progressChar = "#";
    string bar;

    // Incrementally update the progress bar
    for (int i = 1; i <= totalItems; ++i) {
        progress = i * width / totalItems;
        bar = string(progress, progressChar[0]) + string(width - progress, ' ');

        cout << "\r[";
        cout << bar;
        cout << "] " << (i * 100 / totalItems) << "% ";
        cout.flush();

        // Simulate work with a small delay
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    cout << endl;
}

void Admin() {
    string username_admin;
    string password_admin;
	log_admin:
		cout << "============================================================\n\n";
		cout << "                     Admin Login                          \n\n";
		cout << "============================================================\n\n\n\n";
		cout << "\nEnter Username: "; cin >> username_admin;
		cout << "\nEnter Password: "; cin >> password_admin;
		cout << "\n\n\n__________________________________________________________________\n\n\n";
		if (username_admin == "Admin" && password_admin == "123") {
            system("color A");
			displayProgressBar(64);
			cout << "\n\n\t\tSuccess\n";
            cout << "\n\nPRESS ANY KEY ==<o>==";
            getch();
		}
		else {
            system("color red");
			cout << "Login.\n\n";
			displayProgressBar(16);
			cout << "\n\nInvalid password and username!\n";
			goto log_admin;
            cout << "\n\nPRESS ANY KEY ==<o>==";
            getch();

		}
}
class MOTOBIKE{
    private:
        int id;
        string made_in,color,name;
        int year;
        float price;
    public:
        void inpMoto(){
            cout << "\nEnter Id       :";cin >> id;
            cout << "\nEnter name     :";cin >> name;
            cout << "\nEnter Made in  :";cin >> made_in;
            cout << "\nEnter Year     :";cin >> year;
            cout << "\nEnter Color    :";cin >> color;
            cout << "\nEnter Price    :";cin >> price;
        }
        void outMoto(){
            cout << "Id         :" << id << endl;;
            cout << "\nName     :" << name << endl;
            cout << "\nMade in  :" << made_in << endl;
            cout << "\nColor    :" << color << endl;
            cout << "\nPrice    :" << price << "$" << endl;
        }
        int getId(){
            return id;
        }
        
};
int main(){
    MOTOBIKE moto[100] ,car[100],passapp[100];
    int option,opMt,nIp,i;
    int idMtSearch,idMtDelete,idMtUpdate;
    int nMt=0,nCar=0,nPa=0;
    bool isFound;
    Admin();
    system("color F");
    do{
        system("cls");
        cout << "======================================================\n\n";
        cout << "\t\t[1] M O T O B I K E\n\n";
        cout << "\t\t[2] C A R\n\n";
        cout << "\t\t[3] P A S S  A P P\n\n";
        cout << "\t\t[0] E X I T\n\n";
        cout << "======================================================\n\n";
        cout << "SELECT: ";cin >> option;
        switch(option){
            case 1:
                system("cls");
                cout << "==========================================================\n\n";
                cout << "                         M O T O B I K E\n\n";
                cout << "==========================================================\n\n";
                cout << "\t\t[1] INPUT\n\n";
                cout << "\t\t[2] LIST\n\n";
                cout << "\t\t[3] SEARCH\n\n";
                cout << "\t\t[4] UPDATE\n\n";
                cout << "\t\t[5] DELET\n\n";
                cout << "___________________________________\n\n";
                cout << "SELECT: ";cin >> opMt;
                switch(opMt){
                    case 1:
                        system("cls");
                        cout << "How many Motobike do you want input: ";cin >> nIp;
                        for(i = 0; i < nIp; i++){
                            moto[nMt].inpMoto();
                            nMt++;
                        }
                    break;
                    case 2:
                        system("cls");
                        for(i = 0; i < nMt; i++){
                            moto[i].outMoto();
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                    case 3:
                        system("cls");
                        isFound = 0;
                        cout << "Enter Id To Search: ";cin >> idMtSearch;
                        for(i = 0; i < nMt; i++){
                            if(idMtSearch == moto[i].getId()){
                                moto[i].outMoto();
                                isFound = 1;
                                break;
                            }
                        }
                        if(isFound == 0){
                            cout << "\n\nThis Is Search not found ind list (X)\n";
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                    case 4:
                        system("cls");
                        isFound = 0;
                        cout << "Enter Id to Search to update: ";cin >> idMtUpdate;
                        for(i = 0; i < nMt; i++){
                            if(idMtUpdate == moto[i].getId()){
                                cout << "\n=========== Enter New Info ==========\n\n";
                                moto[i].inpMoto();
                                isFound = 1;
                                break;
                            }
                        }
                        if(isFound == 0){
                            cout << "\n\nThis Is Search not found ind list (X)\n";
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                    case 5:
                        system("cls");
                        isFound = 0;
                        cout << "Enter Id to delete: ";cin >> idMtDelete;
                        for(i = 0; i < nMt; i++){
                            if(idMtDelete == moto[i].getId()){
                                moto[i] = moto[i+1];
                                nMt--;
                                cout << "\nThis info Deleted Success!\n";
                                isFound = 1;
                            }
                        }
                        if(isFound == 0){
                            cout << "\n\nThis Is Search not found ind list (X)\n";
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                }
            break;
            case 2:
                system("cls");
                cout << "==========================================================\n\n";
                cout << "                         C A R\n\n";
                cout << "==========================================================\n\n";
                cout << "\t\t[1] INPUT\n\n";
                cout << "\t\t[2] LIST\n\n";
                cout << "\t\t[3] SEARCH\n\n";
                cout << "\t\t[4] UPDATE\n\n";
                cout << "\t\t[5] DELET\n\n";
                cout << "___________________________________\n\n";
                cout << "SELECT: ";cin >> opMt;
                switch(opMt){
                    case 1:
                        system("cls");
                        cout << "How many car do you want input: ";cin >> nIp;
                        for(i = 0; i < nIp; i++){
                            car[nCar].inpMoto();
                            nCar++;
                        }
                    break;
                    case 2:
                        system("cls");
                        for(i = 0; i < nCar; i++){
                            car[i].outMoto();
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                    case 3:
                        system("cls");
                        isFound = 0;
                        cout << "Enter Id To Search: ";cin >> idMtSearch;
                        for(i = 0; i < nCar; i++){
                            if(idMtSearch == car[i].getId()){
                                car[i].outMoto();
                                isFound = 1;
                                break;
                            }
                        }
                        if(isFound == 0){
                            cout << "\n\nThis Is Search not found ind list (X)\n";
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                    case 4:
                        system("cls");
                        isFound = 0;
                        cout << "Enter Id to Search to update: ";cin >> idMtUpdate;
                        for(i = 0; i < nCar; i++){
                            if(idMtUpdate == moto[i].getId()){
                                cout << "\n=========== Enter New Info ==========\n\n";
                                car[i].inpMoto();
                                isFound = 1;
                                break;
                            }
                        }
                        if(isFound == 0){
                            cout << "\n\nThis Is Search not found ind list (X)\n";
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                    case 5:
                        system("cls");
                        isFound = 0;
                        cout << "Enter Id to delete: ";cin >> idMtDelete;
                        for(i = 0; i < nCar; i++){
                            if(idMtDelete == car[i].getId()){
                                car[i] = car[i+1];
                                nCar--;
                                cout << "\nThis info Deleted Success!\n";
                                isFound = 1;
                            }
                        }
                        if(isFound == 0){
                            cout << "\n\nThis Is Search not found ind list (X)\n";
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                }
            break;
            case 3:
                system("cls");
                cout << "==========================================================\n\n";
                cout << "                         P A S S  A P P\n\n";
                cout << "==========================================================\n\n";
                cout << "\t\t[1] INPUT\n\n";
                cout << "\t\t[2] LIST\n\n";
                cout << "\t\t[3] SEARCH\n\n";
                cout << "\t\t[4] UPDATE\n\n";
                cout << "\t\t[5] DELET\n\n";
                cout << "___________________________________\n\n";
                cout << "SELECT: ";cin >> opMt;
                switch(opMt){
                    case 1:
                        system("cls");
                        cout << "How many Passapp do you want input: ";cin >> nIp;
                        for(i = 0; i < nIp; i++){
                            passapp[nPa].inpMoto();
                            nPa++;
                        }
                    break;
                    case 2:
                        system("cls");
                        for(i = 0; i < nPa; i++){
                            passapp[i].outMoto();
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                    case 3:
                        system("cls");
                        isFound = 0;
                        cout << "Enter Id To Search: ";cin >> idMtSearch;
                        for(i = 0; i < nPa; i++){
                            if(idMtSearch == passapp[i].getId()){
                                passapp[i].outMoto();
                                isFound = 1;
                                break;
                            }
                        }
                        if(isFound == 0){
                            cout << "\n\nThis Is Search not found ind list (X)\n";
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                    case 4:
                        system("cls");
                        isFound = 0;
                        cout << "Enter Id to Search to update: ";cin >> idMtUpdate;
                        for(i = 0; i < nPa; i++){
                            if(idMtUpdate == passapp[i].getId()){
                                cout << "\n=========== Enter New Info ==========\n\n";
                                passapp[i].inpMoto();
                                isFound = 1;
                                break;
                            }
                        }
                        if(isFound == 0){
                            cout << "\n\nThis Is Search not found ind list (X)\n";
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                    case 5:
                        system("cls");
                        isFound = 0;
                        cout << "Enter Id to delete: ";cin >> idMtDelete;
                        for(i = 0; i < nPa; i++){
                            if(idMtDelete == passapp[i].getId()){
                                passapp[i] = passapp[i+1];
                                nPa--;
                                cout << "\nThis info Deleted Success!\n";
                                isFound = 1;
                            }
                        }
                        if(isFound == 0){
                            cout << "\n\nThis Is Search not found ind list (X)\n";
                        }
                        cout << "\n\nPRESS ANY KEY ==<o>==";
                        getch();
                    break;
                }
            break;
        }
    }while(option != 0);
    return 0;
}