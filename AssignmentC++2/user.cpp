#include <iostream>
using namespace std;
string date_create,date_birth,name,address,gender;
int account_number,phone_number;
int opUs;

void createAcc(){
    cout << "Enter Phone number: ";
    cin >> phone_number;
    cout << "Enter Gender: ";
    cin >> gender;
    cout << "Enter Address: ";
    cin >> address;
    cout << "Enter Account number: ";
    cin >> account_number;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Day's create: ";
    cin >> date_create;
    cout << "Enter Date of birth: ";
    cin >> date_birth;
}
int main(){
    cout << "1 <---< Create Account\n";
    cout << "2 <---< Login\n";
    cout << "Please Select: ";
    cin >> opUs;
    switch(opUs){
        case 1:
            createAcc();
            cout << "1 <-----: Deposit\n";
            cout << "2 <-----: Skip\n";
            cout << "Enter: ";cin>>opUs;
            if(opUs == 1){
                //deposit
            }
        break;
        case 2:
            // Login
        break;
    }

    // app
    return 0;
}