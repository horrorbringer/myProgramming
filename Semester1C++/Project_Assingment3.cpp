#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>
using namespace std;
int op,qty,seat;
float price,suger,payment_USD,payment_KHR;
string username,password,order;
int main(){

    F:
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<setw(120)<<"===============>>> Login <<<=============="<<endl;
    cout<<setw(102)<<"Please Enter Username : ";getline(cin,username);
    cout<<setw(102)<<"Please Enter Password : ";getline(cin,password);

    if(username == "Jonh Son" && password == "123"){
        cout<<setw(102)<<"Wellcome! Admin"<<endl;
        cout<<setw(102)<<"Press Key to contune...!";
        getch();
        system("cls");
    }else{
        cout<<setw(97)<<"Pleas try again...!"<<endl;
        cout<<setw(102)<<"Press Key to contune...!";
        getch();
        system("cls");
        goto F;
    }

    cout<<setw(102)<<"Wellcome To Shop Coffee"<<endl;
    cout<<setw(90)<<"menu"<<endl;
    cout<<setw(102)<<"1.COFFEE"<<setw(25)<<"2.SOFT DRINK"<<setw(25)<<"3.ALCOHOL"<<endl;
    cout<<setw(100)<<"Choose Menu :";cin>>op;
    switch(op){
        case 1:
            char size;
            float price;
            cout<<setw(130)<<"===========>> Wellcome Shop COFFEE <<============"<<endl;
            cout<<setw(90)<<"Menu"<<endl;
            cout<<setw(96)<<"1.Hot COFFEE"<<setw(25)<<"2.ICE COFFEE"<<endl;
            cout<<setw(94)<<"Choose Menu :";cin>>op;
            switch(op){
                case 1:
                    cout<<"===========>> HOT COFFEE <<==========="<<endl;
                    cout<<"Menu"<<endl;
                    cout<<setw(20)<<"Hot Cappuccino"<<setw(25)<<"Hot Americano"<<setw(26)<<"Hot Latte"<<endl;
                    cout<<"Please Choose :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"===========>> Hot Cappuccino <<============="<<endl;
                        break;
                        case 2:
                            cout<<"============>> Hot Americano <<=============="<<endl;
                        break;
                        case 3:
                            cout<<"===============>> Hot Latte <<==============="<<endl;
                        break;
                    }
                break;
                case 2:
                    cout<<"===========>> ICE COFFEE <<=============="<<endl;
                    cout<<"Menu"<<endl;
                    cout<<setw(20)<<"1.Ice Cappuccino"<<setw(29)<<"2.Ice Americano"<<setw(27)<<"3.Ice Latte"<<endl;
                    cout<<"Please choose :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"============>> Ice Cappuccino <<============"<<endl;
                        break;
                        case 2:
                            cout<<"=============>> Ice Americano <<============="<<endl;
                        break;
                        case 3:
                            cout<<"==============>> Ice Latte <<================="<<endl;
                        break;
                    }
                break;
            }
            // char size;
            // float price;
            cout<<setw(20)<<"Size"<<setw(27)<<"S"<<setw(27)<<"M "<<setw(28)<<"L"<<endl;
            cout<<setw(20)<<"Price"<<setw(27)<<"1$"<<setw(27)<<"1.5$"<<setw(28)<<"2$"<<endl;
            cout<<"Buy 5 up Discount 10%"<<endl;
            cout<<"Quantity :";cin>>qty;
            cout<<"Size :";cin>>size;
            cout<<"Suger% :";cin>>suger;
            cout<<"Seat No :";cin>>seat;
            switch(size){
                case 'S':
                    price = 1; 
                break;
                case 'M':
                    price = 1.5;
                break;
                case 'L':
                    price = 2;
                break;
                default :
                cout<<"Invalid size...!";
            }
            if(qty >= 5){
                payment_USD = (qty *price ) * 0.9;
                payment_KHR = payment_USD * 4044;
            }else{
                payment_USD = qty * price;
                payment_KHR = payment_USD * 4044;
            }
            system("cls");
            cout<<"============>> Recipt<<=========="<<endl;
            cout<<"Order by :"<<username<<setw(20);
            cout<<"Size :"<<size<<(30);
            cout<<"Quantity :"<<qty <<setw(30);
            cout<<"Suger : % "<<suger <<setw(30);
            cout<<"Seat No :"<<seat<<endl;
            cout<<"Total Payment USD :$"<<payment_USD<<endl;
            cout<<"Total Payment KHR :R "<<payment_KHR<<endl;

        break;
        case 2:
            char size;
            cout<<"===========>> Wellcome SOFT DRINK <<============"<<endl;
            cout<<"Menu"<<endl;
            cout<<setw(20)<<"1.CAN"<<setw(25)<<"2.JUICE"<<setw(25)<<"SHAKE"<<endl;
            cout<<"Choose Menu :";cin>>op;
            switch(op){
                case 1:
                    cout<<"============>> CAN <<============="<<endl;
                    cout<<"Menu"<<endl;
                    cout<<setw(20)<<"1.Coke"<<setw(25)<<"2.Sting"<<setw(25)<<"3.Pepsi"<<endl;
                    cout<<"Choose menu :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"============>> Coke <<==========="<<endl;
                            price = 0.5;
                            cout<<"Price Coke 1 = "<<price<<endl;;
                        break;
                        case 2:
                            cout<<"============>> Sting <<============"<<endl;
                            price = 0.6;
                            cout<<"Price Sting 1 = "<<price<<endl;

                        break;
                        case 3:
                            cout<<"============>> Pepsi <<============="<<endl;
                            price = 0.5;
                            cout<<"Price Pepsi 1 = "<<price<<endl;
                        break;
                    }
                    cout<<"size"<<setw(20)<<"S"<<setw(26)<<"M"<<setw(29)<<"L"<<endl;
                    cout<<"Buy 5 up Discound 10%"<<endl;
                    cout<<"Order by :";cin>>order;cin.ignore();getline(cin,order);
                    cout<<"Quantity :";cin>>qty;
                    cout<<"Seat No :";cin>>seat;
                    if(qty >= 5){
                            payment_USD = (qty *price ) * 0.9;
                            payment_KHR = payment_USD * 4044;
                        }else{
                            payment_USD = qty * price;
                            payment_KHR = payment_USD * 4044;
                        }
                   
                    cout<<"============>> Recit<<=========="<<endl;
                        cout<<"Order by :"<<order<<endl;
                        cout<<"Quantity :"<<qty <<endl;
                        cout<<"Seat No :"<<seat<<endl;
                        cout<<"Total Payment USD :$"<<payment_USD<<endl;
                        cout<<"Total Payment KHR :R "<<payment_KHR<<endl;

                break;
                case 2:
                    cout<<"============>> JUICE <<============="<<endl;
                    cout<<"Menu"<<endl;
                    cout<<setw(20)<<"4.Aloe"<<setw(25)<<"5.Oishi"<<setw(25)<<"6.Ichitan"<<endl;
                    cout<<"Choose Tye Juice :";cin>>op;
                    switch(op);{
                        case 4:
                            cout<<"=============>> Aloe <<============"<<endl;
                            price = 0.6;
                            cout<<"Price Aloe 1 = "<<price<<endl;
                        break;
                        case 5:
                            cout<<"=============>> Oishi <<============"<<endl;
                            price = 0.5;
                            cout<<"Price Oishi 1 = "<<price<<endl;
                        break;
                        case 6:
                            cout<<"==============>> Ichitan <<============"<<endl;
                            price = 0.5;
                            cout<<"Price Ichitan 1 ="<<price<<endl;
                        break;
                            
                    }
                    cout<<"size"<<setw(20)<<"S"<<setw(26)<<"M"<<setw(29)<<"L"<<endl;
                    cout<<"Buy 5 up Discound 10%"<<endl;
                    cout<<"Order by :";cin>>order;cin.ignore();getline(cin,order);
                    cout<<"Quantity :";cin>>qty;
                    cout<<"Seat No :";cin>>seat;
                    
                    if(qty >= 5){
                            payment_USD = (qty *price ) * 0.9;
                            payment_KHR = payment_USD * 4044;
                        }else{
                            payment_USD = qty * price;
                            payment_KHR = payment_USD * 4044;
                        }
                    cout<<"============>> Recit<<=========="<<endl;
                        cout<<"Order by :"<<order<<endl;
                        cout<<"Quantity :"<<qty <<endl;
                        cout<<"Seat No :"<<seat<<endl;
                        cout<<"Total Payment USD :$"<<payment_USD<<endl;
                        cout<<"Total Payment KHR :R "<<payment_KHR<<endl;
                break;
                case 3:
                    cout<<"=============>> SHAKE <<==============="<<endl;
                    cout<<"Menu"<<endl;
                    cout<<setw(20)<<"1.Strewberry Milkshake"<<setw(25)<<"2.Orange Milkshake"<<setw(25)<<"3.Avocado Milkshake"<<endl;
                    cout<<"Choose type Juice Shake :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"=============>> Strewberry Milkshake <<============="<<endl;
                            price = 3.5;
                            cout<<"Strewberry Milkshake = "<<price;
                        break;
                        case 2:
                            cout<<"=============>> Orange Milkeshake <<=============="<<endl;
                            price = 2.5;
                            cout<<"Strewberry Milkshake = "<<price;
                        break;
                        case 3:
                            cout<<"=============>> Avocado Milkshake <<==============="<<endl;
                            price = 4.5;
                            cout<<"Strewberry Milkshake = "<<price;
                        break;
                    }
                    cout<<"========>> Order <<=========="<<endl;
                    cout<<"Order by :";cin.ignore();getline(cin,order);
                    cout<<"Quantity :";cin>>qty;
                    cout<<"Seat No :";cin>>seat;
                    if(qty >= 5){
                            payment_USD = (qty *price ) * 0.9;
                            payment_KHR = payment_USD * 4044;
                        }else{
                            payment_USD = qty * price;
                            payment_KHR = payment_USD * 4044;
                        }
                    cout<<"===========>> Recipt <<==========="<<endl;
                    cout<<"Costomer :"<<order<<endl;
                    cout<<"Quantity :"<<qty<<endl;
                    cout<<"Seat No :"<<seat<<endl;
                    cout<<"Payment USD : $"<<payment_USD<<endl;
                    cout<<"Payment KHR : R"<<payment_KHR<<endl;
                break;
            }
        break;
        case 3:
            cout<<"===========>> Wellcome ALCOHOL <<============"<<endl;
            cout<<"Menu"<<endl;
            cout<<setw(20)<<"1.BEER"<<setw(25)<<"2.WINE"<<endl;
            cout<<"Choose Menu :";cin>>op;
            switch(op){
                case 1:
                    cout<<"==========>> BEER <<============"<<endl;
                    cout<<"Tye Beer"<<endl;
                    cout<<setw(20)<<"7.Gagzberg"<<setw(25)<<"8.Haknuman"<<setw(25)<<"9.Cambodia"<<endl;
                    cout<<"Get one";cin>>op;
                    switch(op){
                        case 7:
                            cout<<"================>> Gagzberg <<==============="<<endl;
                            price = 0.61;
                            cout<<"1 can = "<<price;
                        break;
                        case 8:
                            cout<<"=================>> Haknuman <<==============="<<endl;
                            price = 0.61;
                            cout<<"1 can = "<<price;
                        break;
                        case 9:
                            cout<<"=================>> Cambodia <<==============="<<endl;
                            price = 0.61;
                            cout<<"1 can = "<<price;
                        break;
                    }
                    cout<<"==========>> Purchase <<==========="<<endl;
                    cout<<"Costomer :";cin.ignore();getline(cin,order);
                    cout<<"Number of Can :";cin>>qty;

                    if(qty >= 5){
                            payment_USD = (qty *price ) * 0.9;
                            payment_KHR = payment_USD * 4044;
                        }else{
                            payment_USD = qty * price;
                            payment_KHR = payment_USD * 4044;
                        }
                    cout<<"===============>> Recipt <<=============="<<endl;
                    cout<<"Costomer :"<<order<<endl;
                    cout<<"Number of Can :"<<qty<<" can"<<endl;
                    cout<<"Payment USD :"<<payment_USD<<endl;
                    cout<<"Payment KHR :"<<payment_KHR<<endl;
                break;
                case 2:
                    
                    cout<<"===========>> WINE <<============"<<endl;
                    cout<<"Tye wine"<<endl;
                    cout<<setw(50)<<"Option"<<setw(20)<<"========>> 10 <<========"<<setw(35)<<"========>> 11 <<======="<<setw(36)<<"==========>> 12 <<=========="<<endl;
                    cout<<setw(50)<<"Name"<<setw(20)<<"Opolo Mountain Zinfandel"<<setw(35)<<"Wynns Black Label Shiraz"<<setw(36)<<"Harveys Bristol Cream Sherry"<<endl;
                    cout<<"Select Wine";cin>>op;
                    switch(op){
                        case 10:
                            cout<<"===============>> Opolo Mountain Zinfandel <<=============="<<endl;
                            cout<<"1 bottle = $34.95"<<endl;
                            cout<<"1 cup = $9"<<endl;
                            A:
                            cout<<"select do you want :";cin>>op;
                            switch(op){
                                case 1:
                                    cout<<"==========>> bottle <<=========="<<endl;
                                    price = 34.95;
                                    cout<<"1 bottle = "<<price<<endl;
                                break;
                                case 2:
                                    cout<<"===========>> cup <<============"<<endl;
                                    price = 9;
                                    cout<<"1 cup = "<<price<<endl;
                                break;
                                default:
                                goto A;
                                break;
                            }
                                cout<<"===========>> Purchase <<==========="<<endl;
                                cout<<"Costomer :";cin.ignore();getline(cin,order);
                                cout<<"Quantity :";cin>>qty;
                                cout<<"Seat No :";cin>>seat;
                                if(qty >= 5){
                                    payment_USD = (qty *price ) * 0.9;
                                    payment_KHR = payment_USD * 4000;
                                }else{
                                    payment_USD = qty * price;
                                    payment_KHR = payment_USD * 4000;
                                }
                                cout<<"=============>> Recipt <<=============="<<endl;
                                cout<<"Costomer :"<<order<<endl;
                                cout<<"Quantity :"<<qty<<endl;
                                cout<<"Seat No :"<<seat<<endl;
                                cout<<"Payment : "<<payment_USD<<endl;
                                cout<<"Payment : "<<payment_KHR<<endl;
                        break;
                        case 11:
                            cout<<"===============>> Wynns Black Label Shiraz <<================="<<endl;
                            cout<<"1.bottle"<<endl;
                            cout<<"2.cup"<<endl;
                            a:
                            cout<<"select  do you want :";cin>>op;
                            switch(op){
                                case 1:
                                    cout<<"==========>> bottle <<============"<<endl;
                                    price = 44.90;
                                    cout<<"1 bottle = "<<price<<endl;
                                break;
                                case 2:
                                    cout<<"===========>> cup <<=============="<<endl;
                                    price = 12.5;
                                    cout<<"1 cup = "<<price<<endl;
                                break;
                                default:
                                goto a;
                                break;
                            }
                                cout<<"===========>> Purchase <<==========="<<endl;
                                cout<<"Costomer :";cin.ignore();getline(cin,order);
                                cout<<"Quantity :";cin>>qty;
                                cout<<"Seat No :";cin>>seat;
                                if(qty >= 5){
                                    payment_USD = (qty *price ) * 0.9;
                                    payment_KHR = payment_USD * 4000;
                                }else{
                                    payment_USD = qty * price;
                                    payment_KHR = payment_USD * 4000;
                                }
                                cout<<"=============>> Recipt <<=============="<<endl;
                                cout<<"Costomer :"<<order<<endl;
                                cout<<"Quantity :"<<qty<<endl;
                                cout<<"Seat No :"<<seat<<endl;
                                cout<<"Payment : "<<payment_USD<<endl;
                                cout<<"Payment : "<<payment_KHR<<endl;
                        break;
                        case 12:
                            cout<<"===============>> Harveys Bristol Cream Sherry <<=================="<<endl;
                            cout<<"1.bottle"<<endl;
                            cout<<"2.cup"<<endl;
                            b:
                            cout<<"select :";cin>>op;
                            switch(op){
                                case 1:
                                    cout<<"=========>> bottle <<========="<<endl;
                                    price = 35.99;
                                    cout<<"1 bottle = "<<price<<endl;
                                break;
                                case 2:
                                    cout<<"========>> cup <<========="<<endl;
                                    price = 10;
                                    cout<<"1 cup = "<<price<<"$"<<endl;
                                break;
                                default:
                                goto b;
                                break;
                            }
                                cout<<"===========>> Purchase <<==========="<<endl;
                                cout<<"Costomer :";cin.ignore();getline(cin,order);
                                cout<<"Quantity :";cin>>qty;
                                cout<<"Seat No :";cin>>seat;
                                if(qty >= 5){
                                    payment_USD = (qty *price ) * 0.9;
                                    payment_KHR = payment_USD * 4000;
                                }else{
                                    payment_USD = qty * price;
                                    payment_KHR = payment_USD * 4000;
                                }
                                cout<<"=============>> Recipt <<=============="<<endl;
                                cout<<"Costomer :"<<order<<endl;
                                cout<<"Quantity :"<<qty<<endl;
                                cout<<"Seat No :"<<seat<<endl;
                                cout<<"Payment : "<<payment_USD<<endl;
                                cout<<"Payment : "<<payment_KHR<<endl;
                        break;
                    }
                break;
            }
        break;
    }
    return 0;
}