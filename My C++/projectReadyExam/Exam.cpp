#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>
using namespace std; 

class PhoneShop{
    private:
        string PhoneName,PhoneColor;
        int PhoneStorage,PhoneId;
        double PhonePrice;
    public:
        void Insert();
        void Display();
        int getId(){return PhoneId;}
};
void PhoneShop::Insert(){
    cout << "Enter Phone Id     : ";cin >> PhoneId;
    cout << "Enter Phone Name   : ";cin.ignore();getline(cin,PhoneName);
    cout << "Enter Phone Color  : ";cin >> PhoneColor;
    cout << "Enter Phone Storage: ";cin >> PhoneStorage;
    cout << "Enter Phone Price  : ";cin >> PhonePrice;
}
void PhoneShop::Display(){
    cout << PhoneId << setw(17) << PhoneName << setw(18) << PhoneColor << setw(20) << PhoneStorage << "G" << setw(18) << PhonePrice << " $" << endl;
}
int main(){
    PhoneShop phone[100];
    int op,i,n,n_phone=0,idsearch;
    bool f; 
    cout << fixed << showpoint << setprecision(2);
    do{
        cout << "PHONE SHOP\n";
        cout << "1.Insert   2.Display   3.Search    4.Edit  5.Delete    0.Exit\n";
        cout << "Selete option: ";cin >>op;
        system("cls");
        switch(op){
            case 1:
                cout << "How many phone do you want input: ";cin >> n;
                for(i = 0; i < n; i++){
                    phone[n_phone].Insert();
                    n_phone++;
                }
            break;
            case 2:
                if(n_phone <= 0){
                    cout << "Don't have any info in the list! Please insert.\n";
                }else{
                    cout << "ID" << setw(17) << "PhoneName" << setw(18) << "PhoneColor" << setw(20) << "PhoneStorage" << setw(20) << "PhonePrice" << endl;
                    for(i = 0; i < n_phone; i++){
                        phone[i].Display();
                    }
                }
            break;
            case 3:
            if(n_phone <= 0){
                    cout << "Don't have any info in the list! Please insert.\n";
            }else{
                cout << "Enter id to search: ";cin >> idsearch;
                cout << "ID" << setw(17) << "PhoneName" << setw(18) << "PhoneColor" << setw(20) << "PhoneStorage" << setw(20) << "PhonePrice" << endl;
                for(i = 0; i < n_phone; i++){
                    if(idsearch == phone[i].getId()){
                        phone[i].Display();
                        f=1;
                    }
                }if(!f){
                    cout << "This id << " << idsearch << " Search not found!\n";
                }
            }
            break;
            case 4:
            if(n_phone <= 0){
                    cout << "Don't have any info in the list! Please insert.\n";
            }else{
                cout << "Enter id's Phone to Edit: ";cin >> idsearch;
                cout << "ID" << setw(17) << "PhoneName" << setw(18) << "PhoneColor" << setw(20) << "PhoneStorage" << setw(20) << "PhonePrice" << endl;
                for(i = 0; i < n_phone; i++){
                    if(idsearch == phone[i].getId()){
                        phone[i].Display();
                        phone[i].Insert();
                        f=1;
                    }
                }if(!f){
                    cout << "\nThis id << " << idsearch << " Search not found!\n";
                }
            }
            break;
            case 5:
            if(n_phone <= 0){
                    cout << "Don't have any info in the list! Please insert.\n";
            }else{
                cout << "Enter id's Phone to Delete: ";cin >> idsearch;
                for(i = 0; i< n_phone; i++){
                    if(idsearch == phone[i].getId()){
                        phone[i] = phone[i+1];
                        n_phone--;
                        f=1;
                        cout << "This info have been deleted!\n";
                    }
                }if(!f){
                    cout << "\nThis id << " << idsearch << " Search not found!\n";
                }
            }
            break;
        }
        cout << "\n";
        system("pause");
        system("cls");
    }while(op != 0);
    return 0;
}