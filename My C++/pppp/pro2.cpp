#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;
int op,qty,seat;
float price,payment_USD,payment_KHR;
string username,password,order,menu,suger;

float caculator(int a,float b){
    if(a >= 5){
        payment_USD = (a * b ) * 0.9;
        payment_KHR = payment_USD * 4000;
    }else{
        payment_USD = a * b;
        payment_KHR = payment_USD * 4000;
    }
    return payment_USD,payment_KHR;
}

void Order(){
    char size;
    cout<<"\t\t\t\t\tBuy 5 up discound 10%"<<endl;
    cout<<"\t\t\t\t\tSuger% :";cin>>suger;
    cout<<"\t\t\t\t\tOrder by :";cin.ignore();getline(cin,order);
    cout<<"\t\t\t\t\tQUantity :";cin>>qty;
    cout<<"\t\t\t\t\tSeat No :";cin>>seat;
    caculator(qty,price);
}

void Size(){
    char size;
    X:
    cout<<"\t\t\t\t\tsize"<<setw(20)<<"S"<<setw(26)<<"M"<<setw(29)<<"L"<<endl;
    cout<<"\t\t\t\t\tprice"<<setw(20)<<"1.5$"<<setw(26)<<"2.5$"<<setw(29)<<"3$"<<endl;
    cout<<"\t\t\t\t\tSize :";cin>>size;
    switch(size){
        case 'S':
        price = 1.5;
        break;
        case 'M':
        price = 2.5;
        break;
        case 'L':
        price = 3;
        break;
        default:
        goto X;
    }
}

int main(){
    F:
    system("cls");
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\t\t\t\t========================>>> Login <<<============================"<<endl;
    cout<<"\t\t\t\t\tPlease Enter Username : ";getline(cin,username);
    cout<<"\t\t\t\t\tPlease Enter Password : ";getline(cin,password);

    if(username == "Jonh Son" && password == "123"){
        cout<<"\t\t\t\t\tLoadin...";
        for(int i =1;i<=10;i++){
            Sleep(80);
            system("Color A");
            cout<<".";
        }
        cout<<"\n\t\t\t\t\t----------------------->> Wellcome <<-----------------------"<<endl;
    }else{
        cout<<"\t\t\t\t\tLogin...!";
        for(int i =1;i<=10;i++){
            Sleep(80);
            system("Color C");
            cout<<".";
        }
        cout<<"\n\t\t\t\t\tPlease try again\n";
        system("cls");
        goto F;
    }
    
    system("cls");
    system("color 0");

    do{
    cout<<"\t\t\t\t\t\t\t\t\t\tWellcome To Shop Coffee"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\tMenu"<<endl<<endl;
    cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t1.COFFEE"<<setw(25)<<"2.SOFT DRINK"<<setw(25)<<"3.ALCOHOL"<<setw(26)<< "4.Resipt" <<setw(26)<<"0.Exit"<<endl;
    cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------------------------------\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\tChoose Menu :";cin>>op;
    switch(op){
        case 1:
            cout<<"\t\t\t\t===============>> Wellcome Shop COFFEE <<================="<<endl;
            cout<<"\t\t\t\t\tMenu"<<endl;
            cout<<"\t\t\t\t\t1.Hot COFFEE"<<setw(25)<<"2.ICE COFFEE"<<endl;
            cout<<"\t\t\t\t\tChoose Menu :";cin>>op;
            switch(op){
                char size;
                float price;
                case 1:
                    cout<<"\t\t\t\t========================>> HOT COFFEE <<==================="<<endl;
                    cout<<"\t\t\t\t\tMenu"<<endl;
                    cout<<"\t\t\t\t---------------------------------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\t1.Hot Cappuccino"<<setw(30)<<"2.Hot Americano"<<setw(30)<<"3.Hot Latte"<<endl;
                    cout<<"\t\t\t\t---------------------------------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\tChose type coffee : ";cin>>op;
                    switch(op){
                        case 1: 
                        cout<<"\t\t\t\t=================>> Hot Cappuccino <<==============="<<endl;
                        menu = "Hot Cappuccino";
                        break;
                        case 2:
                        cout<<"\t\t\t\t==================>> Hot Americano <<================="<<endl;
                        menu = "Hot Americano";
                        break;
                        case 3:
                        cout<<"\t\t\t\t==================>> Hot Latte <<===================="<<endl;
                        menu = "Hot Latte";
                        break;
                    }
                    Size();
                    Order();
                    system("cls");
                break;
                case 2:
                    cout<<"\t\t\t\t=================>> ICE COFFEE <<==================="<<endl;
                    cout<<"\t\t\t\t\tMenu"<<endl;
                    cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\t1.Ice Cappuccino"<<setw(29)<<"2.Ice Americano"<<setw(27)<<"3.Ice Latte"<<endl;
                    cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\tPlease choose :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"\t\t\t\t================>> Ice Cappuccino <<================="<<endl;
                            menu = "Ice Cappuccino";
                        break;
                        case 2:
                            cout<<"\t\t\t\t==================>> Ice Americano <<================="<<endl;
                            menu = "Ice Americano";
                        break;
                        case 3:
                            cout<<"\t\t\t\t===================>> Ice Latte <<====================="<<endl;
                            menu = "Ice Latte";
                        break;
                    }
                    Size();
                    Order();
                    system("cls");
                break;
            }
        break;
        case 2:
            char size;
            cout<<"\t\t\t\t\t===========>> Wellcome SOFT DRINK <<============"<<endl;
            cout<<"\t\t\t\t\tMenu"<<endl;
            cout<<"\t\t\t\t---------------------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t1.CAN"<<setw(25)<<"2.JUICE"<<setw(25)<<"3.SHAKE"<<endl;
            cout<<"\t\t\t\t---------------------------------------------------------------------------\n";
            cout<<"\t\t\t\t\tChoose Menu :";cin>>op;
            switch(op){
                case 1:
                    cout<<"\t\t\t\t\t============>> CAN <<============="<<endl;
                    cout<<"\t\t\t\t\tMenu"<<endl;
                    cout<<"\t\t\t\t---------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\t1.Coke"<<setw(25)<<"2.Sting"<<setw(25)<<"3.Pepsi"<<endl;
                    cout<<"\t\t\t\t---------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\tChoose menu :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"\t\t\t\t==================>> Coke <<=================="<<endl;
                            menu = "Coke";
                            price = 0.5;
                            cout<<"\t\t\t\t\tPrice Coke 1 = "<<price<<endl;;
                        break;
                        case 2:
                            cout<<"\t\t\t\t===================>> Sting <<=================="<<endl;
                            menu = "Sting";
                            price = 1;
                            cout<<"\t\t\t\t\tPrice Sting 1 = "<<price<<endl;
                        break;
                        case 3:
                            cout<<"\t\t\t\t=====================>> Pepsi <<======================"<<endl;
                            menu = "Pepsi";
                            price = 1.5;
                            cout<<"\t\t\t\t\tPrice Pepsi 1 = "<<price<<endl;
                        break;
                    }
                    Order();
                    system("cls");
                break;
                case 2:
                   cout<<"\t\t\t\t===========================>> JUICE <<============================="<<endl;
                    cout<<"\t\t\t\t\tMenu"<<endl;
                    cout<<"\t\t\t\t--------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\t1.Aloe"<<setw(25)<<"2.Oishi"<<setw(25)<<"3.Ichitan"<<endl;
                    cout<<"\t\t\t\t--------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\tChoose type Juice Shake :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"\t\t\t\t===================>> Aloe <<====================="<<endl;
                            menu = "Aloe";
                            price = 0.8;
                            cout<<"\t\t\t\t\tPrice Aloe X 1 = "<<price<<" $ "<<endl;
                        break;
                        case 2:
                            cout<<"\t\t\t\t====================>> Oishi <<======================="<<endl;
                            menu = "Oishi";
                            price = 1.2;
                            cout<<"\t\t\t\t\tPrice Oishi X 1 = "<<price<<" $ "<<endl;
                        break;
                        case 3:
                            cout<<"\t\t\t\t=====================>> Ichitan <<======================="<<endl;
                            menu = "Ichitan";
                            price = 1;
                            cout<<"\t\t\t\t\tPrice Ichitan X 1 = "<<price<<" $ "<<endl;
                        break;
                    }
                    cout<<"\t\t\t\t============================>> Purchase <<========================="<<endl;
                    Order();
                    system("cls");
                break;
                case 3:
                    cout<<"\t\t\t\t============================>> SHAKE <<============================="<<endl;
                    cout<<"\t\t\t\t\tMenu"<<endl;
                    cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\t1.Strewberry Milkshake"<<setw(25)<<"2.Orange Milkshake"<<setw(25)<<"3.Avocado Milkshake"<<endl;
                    cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\tChoose type Juice Shake :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"\t\t\t\t=======================>> Strewberry Milkshake <<======================="<<endl;
                            menu = "Strewberry Milkshake";
                            price = 3.5;
                            cout<<"\t\t\t\t\tStrewberry Milkshake = "<<price<<endl;
                        break;
                        case 2:
                            cout<<"\t\t\t\t=======================>> Orange Milkeshake <<======================"<<endl;
                            menu = "Orange Milkeshake";
                            price = 2.5;
                            cout<<"\t\t\t\t\tStrewberry Milkshake = "<<price<<endl;
                        break;
                        case 3:
                            cout<<"\t\t\t\t=======================>> Avocado Milkshake <<========================="<<endl;
                            menu = "Avocado Milkshakev";
                            price = 4.5;
                            cout<<"\t\t\t\t\tStrewberry Milkshake = "<<price<<endl;
                        break;
                    }
                    cout<<"\t\t\t\t===========================>> Order <<========================="<<endl;
                    Order();
                    system("cls");
                break;
            }
        break;
        case 3:
            cout<<"\t\t\t\t==============================>> Wellcome ALCOHOL <<============================="<<endl;
            cout<<"\t\t\t\t\tMenu"<<endl;
            cout<<"\t\t\t\t-----------------------------------------------------------\n";
            cout<<"\t\t\t\t\t1.BEER"<<setw(25)<<"2.WINE"<<endl;
            cout<<"\t\t\t\t-----------------------------------------------------------\n";
            cout<<"\t\t\t\t\tChoose Menu : ";cin>>op;
            switch(op){
                case 1:
                    cout<<"\t\t\t\t===========================>> BEER <<==============================="<<endl;
                    cout<<"\t\t\t\t\tTye Beer"<<endl;
                    cout<<"\t\t\t\t-------------------------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\t1.Gagzberg"<<setw(25)<<"2.Haknuman"<<setw(25)<<"3.Cambodia"<<endl;
                    cout<<"\t\t\t\t-------------------------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\tGet one : ";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"\t\t\t\t==============================>> Gagzberg <<============================="<<endl;
                            menu = "Gagzberg";
                            price = 0.61;
                            cout<<"\t\t\t\t\t1 can = "<<price<<endl;
                        break;
                        case 2:
                            cout<<"\t\t\t\t=============================>> Haknuman <<============================"<<endl;
                            menu = "Haknuman";
                            price = 0.61;
                            cout<<"\t\t\t\t\t1 can = "<<price<<endl;
                        break;
                        case 3:
                            cout<<"\t\t\t\t================================>> Cambodia <<=========================="<<endl;
                            menu = "Cambodia";
                            price = 0.61;
                            cout<<"\t\t\t\t\t1 can = "<<price<<endl;
                        break;
                    }
                    cout<<"\t\t\t\t===========================>> Purchase <<==========================="<<endl;
                    Order();
                        system("cls");
                break;
                case 2:
                    
                    cout<<"\t\t\t\t============================>> WINE <<=========================="<<endl;
                    cout<<"\t\t\t\t\tTye wine"<<endl;
                    cout<<"\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\tOption "<<setw(30)<<"========>> -1- <<========"<<setw(35)<<"========>> -2- <<======="<<setw(36)<<"==========>> -3- <<=========="<<endl;
                    cout<<"\t\t\t\t\tName "<<setw(34)<<"1.Opolo Mountain Zinfandel"<<setw(35)<<"2.Wynns Black Label Shiraz"<<setw(36)<<"3.Harveys Bristol Cream Sherry"<<endl;
                    cout<<"\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\tSelect Wine : ";cin>>op;
                    switch(op){
                        case 1:
                            A:
                            cout<<"\t\t\t\t=============================>> Opolo Mountain Zinfandel <<============================"<<endl;
                            menu = "Opolo Mountain Zinfandel";
                            cout<<"\t\t\t\t\t1 bottle = $34.95"<<endl;
                            cout<<"\t\t\t\t\t2 cup = $9"<<endl;
                            cout<<"\t\t\t\t\tvselect do you want :";cin>>op;
                            switch(op){
                                case 1:
                                    cout<<"\t\t\t\t===========================>> bottle <<========================="<<endl;
                                    price = 34.95;
                                    cout<<"\t\t\t\t\t1 bottle = "<<price<<endl;
                                break;
                                case 2:
                                    cout<<"\t\t\t\t==============================>> cup <<==========================="<<endl;
                                    price = 9;
                                    cout<<"\t\t\t\t\t1 cup = "<<price<<endl;
                                break;
                                default:
                                goto A;
                                break;
                            }
                                cout<<"\t\t\t\t==========================>> Purchase <<============================"<<endl;
                                Order();
                                system("cls");
                        break;
                        case 2:
                            a:
                            cout<<"\t\t\t\t================================>> Wynns Black Label Shiraz <<==============================="<<endl;
                            menu = "Wynns Black Label Shiraz";
                            cout<<"\t\t\t\t\t1.bottle"<<endl;
                            cout<<"\t\t\t\t\t2.cup"<<endl;
                            cout<<"\t\t\t\t\tselect  do you want :";cin>>op;
                            switch(op){
                                case 1:
                                    cout<<"\t\t\t\t===============================>> bottle <<================================="<<endl;
                                    price = 44.90;
                                    cout<<"\t\t\t\t\t1 bottle = "<<price<<endl;
                                break;
                                case 2:
                                    cout<<"\t\t\t\t=================================>> cup <<====================================="<<endl;
                                    price = 12.5;
                                    cout<<"\t\t\t\t\t1 cup = "<<price<<endl;
                                break;
                                default:
                                goto a;
                                break;
                            }
                                cout<<"\t\t\t\t====================================>> Purchase <<================================="<<endl;
                                Order();
                                system("cls");
                        break;
                        case 3:
                            b:
                            cout<<"\t\t\t\t=================================>> Harveys Bristol Cream Sherry <<==============================="<<endl;
                            menu = "Harveys Bristol Cream Sherry";
                            cout<<"\t\t\t\t\t1.bottle"<<endl;
                            cout<<"\t\t\t\t\t2.cup"<<endl;
                            cout<<"\t\t\t\t\tselect : ";cin>>op;
                            switch(op){
                                case 1:
                                    cout<<"\t\t\t\t=================================>> bottle <<============================"<<endl;
                                    price = 35.99;
                                    cout<<"\t\t\t\t\t1 bottle = "<<price<<endl;
                                break;
                                case 2:
                                    cout<<"\t\t\t\t===============================>> cup <<============================="<<endl;
                                    price = 10;
                                    cout<<"\t\t\t\t\t1 cup = "<<price<<"$"<<endl;
                                break;
                                default:
                                goto b;
                                break;
                            }
                                cout<<"\t\t\t\t============================>> Purchase <<========================="<<endl;
                                Order();
                                system("cls");
                        break;
                    }
                break;
            }
        break;
        case 4:
            system("cls");
            cout<<"\t\t\t\t=======================>> Recipt <<====================="<<endl<<endl;
            cout<<"\t\t\t\t\tORDER BY          : "<<order<<endl;
            cout<<"\t\t\t\t\tORDER             : "<<menu<<endl;
            cout<<"\t\t\t\t\tPRICE             : "<<price<<" $"<<endl;
            cout<<"\t\t\t\t\tQUANTITY          : "<<qty<<endl;
            cout<<"\t\t\t\t\tSUGER             : "<<suger<<" %"<<endl;
            cout<<"\t\t\t\t\tSEAT NO           : "<<seat<<endl;
            cout<<"\t\t\t\t\tTOTAL PAYMENT USD : "<<payment_USD<<" $"<<endl;
            cout<<"\t\t\t\t\tTOTAL PAYMENT KHR : "<<payment_KHR<<" R"<<endl<<endl;
            cout<<"\t\t\t\t-------------------------->> Thank you <<------------------------------"<<endl<<endl;
            cout<<"\t\t\t\t\tPress key to continue...";
            getch();
            system("cls");
        break;
    }
    }while(op != 0);
    return 0;
}