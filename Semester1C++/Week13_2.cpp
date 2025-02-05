#include<iostream>
#include<Windows.h>
using namespace std;
string username,password,pro,pay;
int op;
float acc_us,add_us,price,acc;
int acc_kh,add_kh;
void login(){
    Login:
    cout<<"\t-------------->> Login <<-----------------\n";
    cout<<"\tEnter Username :";cin>>username;
    cout<<"\tEnter Password :";cin>>password;
    if(username == "Gojo" && password == "123"){
        cout<<"\tLoadin...";
        for(int i =1;i<=20;i++){
            Sleep(80);
            system("Color A");
            cout<<".";
        }
        cout<<"\nWellcome\n";
    }
    else{
        cout<<"\tLogin...!";
        for(int i =1;i<=10;i++){
            Sleep(80);
            system("Color C");
            cout<<".";
        }
        cout<<"\n\tPlease try again\n";
        system("cls");
        goto Login;
    }
}
void PIN(){
    int PIN;
    PIN:
    cout<<"\tConfirm PIN:";cin>>PIN;
    if(PIN == 123){
        for(int i =1;i<=10;i++){
            Sleep(80);
            system("Color A");
            cout<<".";
        }
        cout<<"\nVerified\n";
    }
    else{
        cout<<"Login...!\n";
        for(int i =1;i<=10;i++){
            Sleep(80);
            system("Color C");
            cout<<".";
        }
        cout<<"\nPlease try again\n";
        system("cls");
        goto PIN;
    }
}
void showoption(){
    cout<<"\n\t-------------->>> BIU ATM MACHINE <<<---------------"<<endl<<endl;
    cout<<"\t1. Check Balance"<<endl;
    cout<<"\t2. Deposit"<<endl;
    cout<<"\t3. Withdraw"<<endl;
    cout<<"\t4. Payment"<<endl;
    cout<<"\t5. Exit"<<endl<<endl;
    cout<<"\t------------->>> BIU ATM MACHINE <<<---------------"<<endl<<endl;
}
void ATM(){  
    do{
    system("color F");
    showoption();
    cout<<"choose option: ";cin>>op;
    switch(op){
        case 1:
            system("cls");
            cout<<"-------------->> Check Balance <<-------------"<<endl<<endl;
            cout<<"Account USD : "<<acc_us<<" $" <<endl;
            cout<<"Account KHR : "<<acc_kh<<" R" <<endl<<endl;
        break;
        case 2:
            system("cls");
            cout<<"\n------------>> Deposit <<-------------"<<endl<<endl;
            b:
            cout<<"1.Deposit Account USD"<<endl;
            cout<<"2.Deposit Account KHR"<<endl;
            cout<<"Choise option do you want deposit :";cin>>op;
            switch(op){
                case 1:
                    cout<<"\n\n------------>> Deposit <<----------"<<endl<<endl;
                    cout<<"Deposit Account USD :";cin>>add_us;
                    acc_us += add_us;
                break;
                case 2:
                    cout<<"\n\n-------------->> Deposit <<--------------"<<endl<<endl;
                    cout<<"Deposit Account KHR :";cin>>add_kh;
                    acc_kh += add_kh;
                break;
                default:
                goto b;
            }
        break;
        case 3:
            system("cls");
            c:
            cout<<"\n-------------->> Withdraw <<-------------"<<endl<<endl;
            cout<<"1.Withdraw Account USD"<<endl;
            cout<<"2.Withdraw Account KHR"<<endl;
            cout<<"Do you want withdraw :";cin>>op;
            switch(op){
                case 1:
                    cout<<"\n------------>> Withdraw Account USD <<------------"<<endl<<endl;
                    cout<<"Input money do you want withdraw :";cin>>add_us;
                    acc_us -= add_us;
                    cout<<"Account USD After Withdraw = "<<acc_us<<endl;
                break;
                case 2:
                    cout<<"\n----------->> Withdraw Account KHR <<-------------"<<endl<<endl;
                    cout<<"Input monwy do you want withdraw :";cin>>add_kh;
                    acc_kh -= add_kh;
                    cout<<"Acount KHR After Withraw = "<<acc_kh<<endl;
                break;
                default: 
                goto c;
            }
        break;
        case 4:
            system("cls");
            cout<<"\n--------------->> Payment <<---------------"<<endl<<endl;
            cout<<"Name Invoice : ";cin>>pro;
            cout<<"Amount Payment : ";cin>>price;
            cout<<"1.Payment USD"<<endl;
            cout<<"2.Payment KHR"<<endl;
            cout<<"Choice Payment :";cin>>op;
            if(op == 1){
                pay = "Payment USD";
                acc_us -= price;
                acc = acc_us;
            }else if(op == 2){
                pay = "Payment KHR";
                acc_kh -= price;
                acc = acc_kh;
            }
            cout<<"\n\n---------------->> Resipt <<-----------------"<<endl<<endl;
            cout<<"Payment : "<<pay<<endl;
            cout<<"Name Invoice : "<<pro<<endl;
            cout<<"Amount Payment : "<<price<<endl;
            cout<<"The Rest Of Your Account = "<<acc<<endl<<endl;
        break;
        case 5:
            cout<<"---------------->> Exit <<--------------";
        break;
    }
    }while(op != 5);
}
int main(){
    system("cls");
    login();
    PIN();
    ATM();
    return 0;
}