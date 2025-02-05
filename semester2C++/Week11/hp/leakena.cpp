#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

bool login() {
    string username;
    string password;

    const string correctUsername = "leak";
    const string correctPassword = "1001";

    while (true) {
        cout << "========168 Auto Garage=======" << endl;
        cout << "Please enter your username: ";
        cin >> username;
        cout << "Please enter your password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "\t\t\t\tLogin Success!!" << endl;
            return true;
        } else {
            cout << "Invalid Input! Please try again." << endl;
        }
    }
}

const int MAX_ITEMS = 50;
int price[MAX_ITEMS];
int qty[MAX_ITEMS];
int id[MAX_ITEMS];
string name[MAX_ITEMS];
int k = 0;

void Menu() {
    cout << "\t============> OPTION <============\n";
    cout << "\t1======> Insert  \n";
    cout << "\t2======> Display \n";
    cout << "\t3======> Search  \n";
    cout << "\t4======> Update  \n";
    cout << "\t5======> Delete  \n";

}
class GrassPhnomPhen{
    public:
        void Insert() {
        cout << "\t============> Insert <=============\n";
        cout << "\t======> How many do you want to input: "; 
        cin >> k;
        for (int i = 0; i < k; i++) {
            cout << "\tNO = " << i + 1 << endl;
            cout << "\t======> Insert  ID    : "; cin >> id[i];
            cout << "\t======> Insert  Name  : "; cin >> name[i];
            cout << "\t======> Insert  Price : "; cin >> price[i];
            cout << "\t======> Insert  Qty   : "; cin >> qty[i];
        }
    }
        void Display() {
            cout << "\t=============> Display <============\n";
            for (int i = 0; i < k; i++) {
                cout << "\tNO = " << i + 1 << endl;
                cout << "\t Display  ID    : " << id[i] << endl;
                cout << "\t Display  Name  : " << name[i] << endl;
                cout << "\t Display  Price : " << price[i] << endl;
                cout << "\t Display  Qty   : " << qty[i] << endl;
            }
        }
        void Search() {
            bool isfound = false;
            int op_search, id_search, price_search, qty_search;
            string name_search;

            cout << "\t============> Search <============\n";
            cout << "\t1. Search by ID\n";
            cout << "\t2. Search by Name\n";
            cout << "\t3. Search by Price\n";
            cout << "\t4. Search by Qty\n";
            cout << "\t====> Choose the option : "; 
            cin >> op_search;
            
            switch (op_search) {
                case 1:
                    cout << "\t Enter id to search : "; cin >> id_search;
                    for (int i = 0; i < k; i++) {
                        if (id_search == id[i]) {
                            cout << "\tNo = " << i + 1 << endl;
                            cout << "\t  ID    : " << id[i] << endl;
                            cout << "\t  Name  : " << name[i] << endl;
                            cout << "\t  Price : " << price[i] << "$" << endl;
                            cout << "\t  Qty   : " << qty[i] << endl;
                            isfound = true;
                            break;
                        }
                    }
                    if (!isfound) cout << "\t Not found\n";
                    break;
                
                case 2:
                    cout << "\t Enter name to search : "; cin >> name_search;
                    for (int i = 0; i < k; i++) {
                        if (name_search == name[i]) {
                            cout << "\tNO = " << i + 1 << endl;
                            cout << "\t  ID    : " << id[i] << endl;
                            cout << "\t  Name  : " << name[i] << endl;
                            cout << "\t  Price : " << price[i] << "$" << endl;
                            cout << "\t  Qty   : " << qty[i] << endl;
                            isfound = true;
                            break;
                        }
                    }
                    if (!isfound) cout << "\t Not found\n";
                    break;
                
                case 3:
                    cout << "\t Enter price to search : "; cin >> price_search;
                    for (int i = 0; i < k; i++) {
                        if (price_search == price[i]) {
                            cout << "\tNo = " << i + 1 << endl;
                            cout << "\t  ID    : " << id[i] << endl;
                            cout << "\t  Name  : " << name[i] << endl;
                            cout << "\t  Price : " << price[i] << "$" << endl;
                            cout << "\t  Qty   : " << qty[i] << endl;
                            isfound = true;
                            break;
                        }
                    }
                    if (!isfound) cout << "\t Not found\n";
                    break;
                
                case 4:
                    cout << "\t Enter qty to search : "; cin >> qty_search;
                    for (int i = 0; i < k; i++) {
                        if (qty_search == qty[i]) {
                            cout << "\tNo = " << i + 1 << endl;
                            cout << "\t  ID    : " << id[i] << endl;
                            cout << "\t  Name  : " << name[i] << endl;
                            cout << "\t  Price : " << price[i] << "$" << endl;
                            cout << "\t  Qty   : " << qty[i] << endl;
                            isfound = true;
                            break;
                        }
                    }
                    if (!isfound) cout << "\t Not found\n";
                    break;
            }
        }
        void Update() {
            int op_update, id_update, price_update, qty_update;
            string update_name;

            cout << "\t============> Update <============\n";
            cout << "\t1. Update ID\n";
            cout << "\t2. Update Name\n";
            cout << "\t3. Update Price\n";
            cout << "\t4. Update Qty\n";
            cout << "\t5. Update All\n";
            cout << "\t====> Choose the option : "; 
            cin >> op_update;


            switch (op_update) {
                case 1:
                    cout << "\t=====> ID Update <=====\n";
                    cout << "\t==> Enter id to update: "; cin >> id_update;
                    for (int i = 0; i < k; i++) {
                        if (id[i] == id_update) {
                            cout << "\tNO = " << i + 1 << endl;
                            cout << "\tProduct ID : " << id[i] << endl;
                            cout << "\tEnter new ID : "; cin >> id[i];
                            break;
                        }
                    }
                    break;

                case 2:
                    cout << "\t=====> Name Update <=====\n";
                    cout << "\t==> Enter name to update: "; cin >> update_name;
                    for (int i = 0; i < k; i++) {
                        if (name[i] == update_name) {
                            cout << "\tNO = " << i + 1 << endl;
                            cout << "\tProduct Name : " << name[i] << endl;
                            cout << "\tEnter new Name: "; cin >> name[i];
                            break;
                        }
                    }
                    break;

                case 3:
                    cout << "\t=====> Price Update <=====\n";
                    cout << "\t==> Enter price to update: "; cin >> price_update;
                    for (int i = 0; i < k; i++) {
                        if (price[i] == price_update) {
                            cout << "\tNO = " << i + 1 << endl;
                            cout << "\tProduct Price : " << price[i] << endl;
                            cout << "\tEnter new Price: "; cin >> price[i];
                            break;
                        }
                    }
                    break;

                case 4:
                    cout << "\t=====> Qty Update <=====\n";
                    cout << "\t==> Enter qty to update: "; cin >> qty_update;
                    for (int i = 0; i < k; i++) {
                        if (qty[i] == qty_update) {
                            cout << "\tNO = " << i + 1 << endl;
                            cout << "\tProduct Qty : " << qty[i] << endl;
                            cout << "\tEnter new Qty: "; cin >> qty[i];
                            break;
                        }
                    }
                    break;

                case 5:
                    cout << "\t=====> Update All <=====\n";
                    cout << "\t==> Enter ID to update: "; cin >> id_update;
                    for (int i = 0; i < k; i++) {
                        if (id[i] == id_update) {
                            cout << "\tNO = " << i + 1 << endl;
                            cout << "\tEnter new ID    : "; cin >> id[i];
                            cout << "\tEnter new Name  : "; cin >> name[i];
                            cout << "\tEnter new Price : "; cin >> price[i];
                            cout << "\tEnter new Qty   : "; cin >> qty[i];
                            break;
                        }
                    }
                    break;
            }
        }
        void Delete() {
        int id_delete;
        cout << "\t========> Delete <=======\n";
        cout << "\t==> Enter ID to delete: "; cin >> id_delete;
        for (int i = 0; i < k; i++) {
            if (id_delete == id[i]) {
                for (int j = i; j < k - 1; j++) {
                    id[j] = id[j + 1];
                    name[j] = name[j + 1];
                    price[j] = price[j + 1];
                    qty[j] = qty[j + 1];
                }
                k--;
                cout << "\tProduct deleted successfully.\n";
                return;
            }
        }
        cout << "\tProduct not found.\n";
    }
};

int main() {
    GrassPhnomPhen Moto,Car,PassaPP;
    if (login()) {
        int option,op;
        do{
            cout << "[1] MOTOBIKE      [2] CAR      [3] PASS APP     [4] EXIT\n";
            cout << "Please select: ";cin >> option;
            switch(option){
                case 1:
                    Menu();
                    cout << "Please choose: ";cin>>op;
                    switch (op){
                        case 1: Moto.Insert();
                        break;
                        case 2: break;
                        case 3: break;
                        case 4: break;
                        case 5: break;
                    }
                break;
                case 2:
                    Menu();
                    cout << "Please choose: ";cin>>op;
                    switch (op){
                        case 1: 
                            Car.Insert();
                        break;
                        case 2: break;
                        case 3: break;
                        case 4: break;
                        case 5: break;
                    }
                break;
                case 3:
                    Menu();
                    cout << "Please choose: ";cin>>op;
                    switch (op){
                        case 1: 
                            PassaPP.Insert();
                        break;
                        case 2: break;
                        case 3: break;
                        case 4: break;
                        case 5: break;
                    }
                break;
            }
        }while(option !=0);
    }
    return 0;
}
