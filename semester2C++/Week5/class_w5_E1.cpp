#include<iostream>
using namespace std;

class person {

    public:
    int id;
    string firstname;
    string lastname;
    char gender;
    int age;
    string address;
    string contat;

};

int main(){
    person obj;
    obj.id = 1001;
    obj.firstname = "Meas";
    obj.lastname = "Vanny";
    obj.gender = 'M';
    obj.age = 20;
    obj.address = "Phnom Penh";
    obj.contat = "015748353";

    cout << "\tId: "<<obj.id << endl;
    cout << "\tFull name: "<<obj.firstname + " " + obj.lastname <<endl;
    cout << "\tGender: "<<obj.gender<<endl;
    cout << "\tAge: "<<obj.age<<endl;
    cout << "\tAddress: "<<obj.address<<endl;
    cout << "\tContact: "<<obj.contat;

    return 0;
}