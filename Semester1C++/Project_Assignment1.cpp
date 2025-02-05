#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;
int op,qty,seat;
float price,suger,payment_USD,payment_KHR;
string username,password,order;
int main(){

    F:
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\t\t\t\t===================>>> Login <<<==================="<<endl;
    cout<<"\t\t\t\t\tPlease Enter Username : ";getline(cin,username);
    cout<<"\t\t\t\t\tPlease Enter Password : ";getline(cin,password);

    if(username == "Jonh Son" && password == "123"){
        cout<<"\t\t\t\t\tLoadin...";
        for(int i =1;i<=10;i++){
            Sleep(80);
            system("Color A");
            cout<<".";
        }
        cout<<"\n\t\t\t\t\tWellcome\n";
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
    cout<<"\t\t\t\t\tWellcome To Shop Coffee"<<endl;
    cout<<"\t\t\t\t\tmenu"<<endl;
    cout<<"\t\t\t\t\t1.COFFEE"<<setw(25)<<"2.SOFT DRINK"<<setw(25)<<"3.ALCOHOL"<<endl;
    cout<<"\t\t\t\t\tChoose Menu :";cin>>op;
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
                    cout<<"\t\t\t\t================>> HOT COFFEE <<==============="<<endl;
                    cout<<"\t\t\t\t\tMenu"<<endl;
                    cout<<"\t\t\t\t\t1.Hot Cappuccino"<<setw(25)<<"2.Hot Americano"<<setw(26)<<"3.Hot Latte"<<endl;
                    cout<<"\t\t\t\t\tPlease Choose :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"\t\t\t\t=================>> Hot Cappuccino <<=================="<<endl;
                        break;
                        case 2:
                            cout<<"\t\t\t\t================>> Hot Americano <<================="<<endl;
                        break;
                        case 3:
                            cout<<"\t\t\t\t==================>> Hot Latte <<=================="<<endl;
                        break;
                    }
                    cout<<"\t\t\t\t\tSize"<<setw(27)<<"S"<<setw(27)<<"M "<<setw(28)<<"L"<<endl;
                    cout<<"\t\t\t\t\tPrice"<<setw(27)<<"1$"<<setw(27)<<"1.5$"<<setw(28)<<"2$"<<endl;
                    cout<<"\t\t\t\t\tBuy 5 up Discount 10%"<<endl;
                    cout<<"\t\t\t\t\tQuantity :";cin>>qty;
                    cout<<"\t\t\t\t\tSize :";cin>>size;
                    cout<<"\t\t\t\t\tSuger% :";cin>>suger;
                    cout<<"\t\t\t\t\tSeat No :";cin>>seat;
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
                            cout<<"\t\t\t\t\tInvalid size...!";
                    }
                        if(qty >= 5){
                            payment_USD = (qty *price ) * 0.9;
                            payment_KHR = payment_USD * 4044;
                        }else{
                            payment_USD = qty * price;
                            payment_KHR = payment_USD * 4044;
                        }
                        system("cls");
                        cout<<"\t\t\t\t===================>> Recipt<<================="<<endl;
                        cout<<"\t\t\t\t\tOrder by :"<<username<<setw(20);
                        cout<<"\t\t\t\t\tSize :"<<size<<(30);
                        cout<<"\t\t\t\t\tQuantity :"<<qty <<setw(30);
                        cout<<"\t\t\t\t\tSuger : % "<<suger <<setw(30);
                        cout<<"\t\t\t\t\tSeat No :"<<seat<<endl;
                        cout<<"\t\t\t\t\tTotal Payment USD :$"<<payment_USD<<endl;
                        cout<<"\t\t\t\t\tTotal Payment KHR :R "<<payment_KHR<<endl;
                break;
                case 2:
                    cout<<"\t\t\t\t=================>> ICE COFFEE <<==================="<<endl;
                    cout<<"\t\t\t\t\tMenu"<<endl;
                    cout<<"\t\t\t\t\t1.Ice Cappuccino"<<setw(29)<<"2.Ice Americano"<<setw(27)<<"3.Ice Latte"<<endl;
                    cout<<"\t\t\t\t\tPlease choose :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"\t\t\t\t================>> Ice Cappuccino <<================="<<endl;
                        break;
                        case 2:
                            cout<<"\t\t\t\t==================>> Ice Americano <<================="<<endl;
                        break;
                        case 3:
                            cout<<"\t\t\t\t===================>> Ice Latte <<====================="<<endl;
                        break;
                    }
                    cout<<"\t\t\t\t\tsize"<<setw(20)<<"S"<<setw(26)<<"M"<<setw(29)<<"L"<<endl;
                    cout<<"\t\t\t\t\tsize"<<setw(20)<<"1.5$"<<setw(26)<<"2.5"<<setw(29)<<"3"<<endl;
                    cout<<"\t\t\t\t\tBuy 5 up Discound 10%"<<endl;
                    cout<<"\t\t\t\t\tOrder by :";cin>>order;cin.ignore();getline(cin,order);
                    cout<<"\t\t\t\t\tQuantity :";cin>>qty;
                    cout<<"\t\t\t\t\tSize :";cin>>size;
                    cout<<"\t\t\t\t\tSugar % :";cin>>suger;
                    cout<<"\t\t\t\t\tSeat No :";cin>>seat;
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
                    }
                    if(qty >= 5){
                        payment_USD = (qty *price ) * 0.9;
                        payment_KHR = payment_USD * 4044;
                    }else{
                        payment_USD = qty * price;
                        payment_KHR = payment_USD * 4044;
                    }
                    cout<<"\t\t\t\t\t============>> Recipt<<=========="<<endl;
                    cout<<"\t\t\t\t\tOrder by :"<<order<<endl;
                    cout<<"\t\t\t\t\tSize :"<<size<<endl;
                    cout<<"\t\t\t\t\tQuantity :"<<qty <<endl;
                    cout<<"\t\t\t\t\tSuger : % "<<suger <<endl;
                    cout<<"\t\t\t\t\tSeat No :"<<seat<<endl;
                    cout<<"\t\t\t\t\tTotal Payment USD :$"<<payment_USD<<endl;
                    cout<<"\t\t\t\t\tTotal Payment KHR :R "<<payment_KHR<<endl;

                break;
            }

        break;
        case 2:
            char size;
            cout<<"\t\t\t\t\t===========>> Wellcome SOFT DRINK <<============"<<endl;
            cout<<"\t\t\t\t\tMenu"<<endl;
            cout<<"\t\t\t\t\t1.CAN"<<setw(25)<<"2.JUICE"<<setw(25)<<"3.SHAKE"<<endl;
            cout<<"\t\t\t\t\tChoose Menu :";cin>>op;
            switch(op){
                case 1:
                    cout<<"\t\t\t\t\t============>> CAN <<============="<<endl;
                    cout<<"\t\t\t\t\tMenu"<<endl;
                    cout<<"\t\t\t\t\t1.Coke"<<setw(25)<<"2.Sting"<<setw(25)<<"3.Pepsi"<<endl;
                    cout<<"\t\t\t\t\tChoose menu :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"\t\t\t\t==================>> Coke <<=================="<<endl;
                            price = 0.5;
                            cout<<"\t\t\t\t\tPrice Coke 1 = "<<price<<endl;;
                        break;
                        case 2:
                            cout<<"\t\t\t\t===================>> Sting <<=================="<<endl;
                            price = 1;
                            cout<<"\t\t\t\t\tPrice Sting 1 = "<<price<<endl;
                        break;
                        case 3:
                            cout<<"\t\t\t\t=====================>> Pepsi <<======================"<<endl;
                            price = 1.5;
                            cout<<"\t\t\t\t\tPrice Pepsi 1 = "<<price<<endl;
                        break;
                    }

                    cout<<"\t\t\t\t\tBuy 5 up Discound 10%"<<endl;
                    cout<<"\t\t\t\t\tOrder by :";cin>>order;cin.ignore();getline(cin,order);
                    cout<<"\t\t\t\t\tQuantity :";cin>>qty;
                    cout<<"\t\t\t\t\tSeat No :";cin>>seat;
                    if(qty >= 5){
                            payment_USD = (qty *price ) * 0.9;
                            payment_KHR = payment_USD * 4044;
                        }else{
                            payment_USD = qty * price;
                            payment_KHR = payment_USD * 4044;
                        }
                   
                    cout<<"\t\t\t\t==========================>> Recit <<========================="<<endl;
                    cout<<"\t\t\t\t\tOrder by :"<<order<<endl;
                    cout<<"\t\t\t\t\tQuantity :"<<qty <<endl;
                    cout<<"\t\t\t\t\tSeat No :"<<seat<<endl;
                    cout<<"\t\t\t\t\tTotal Payment USD :$"<<payment_USD<<endl;
                    cout<<"\t\t\t\t\tTotal Payment KHR :R "<<payment_KHR<<endl;

                break;
                case 2:
                   
                    cout<<"\t\t\t\t==========================>> JUICE <<============================"<<endl;
                    cout<<"\t\t\t\t\tMenu"<<endl;
                    cout<<"\t\t\t\t\t4.Aloe"<<setw(25)<<"5.Oishi"<<setw(25)<<"6.Ichitan"<<endl;
                    cout<<"\t\t\t\t\tChoose Tye Juice :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"\t\t\t\t===========================>> Aloe <<========================="<<endl;
                            price = 2.5;
                            cout<<"\t\t\t\t\tPrice Aloe 1 = "<<price<<endl;
                        break;
                        case 2:
                            cout<<"\t\t\t\t==========================>> Oishi <<=========================="<<endl;
                            price = 2.2;
                            cout<<"\t\t\t\t\tPrice Oishi 1 = "<<price<<endl;
                        break;
                        case 3:
                            cout<<"\t\t\t\t===========================>> Ichitan <<============================"<<endl;
                            price = 3.5;
                            cout<<"\t\t\t\t\tPrice Ichitan 1 = "<<price<<endl;
                        break;
                    }

                    cout<<"\t\t\t\t===========================>> Order <<========================="<<endl;
                    cout<<"\t\t\t\t\tBuy 5 up Discound 10%"<<endl;
                    cout<<"\t\t\t\t\tOrder by :";cin>>order;cin.ignore();getline(cin,order);
                    cout<<"\t\t\t\t\tQuantity :";cin>>qty;
                    cout<<"\t\t\t\t\tSeat No :";cin>>seat;
                    
                    if(qty >= 5){
                            payment_USD = (qty *price ) * 0.9;
                            payment_KHR = payment_USD * 4000;
                        }else{
                            payment_USD = qty * price;
                            payment_KHR = payment_USD * 4000;
                        }

                    cout<<"\t\t\t\t============================>> Recit <<==========================="<<endl;
                    cout<<"\t\t\t\t\tOrder by :"<<order<<endl;
                    cout<<"\t\t\t\t\tQuantity :"<<qty <<endl;
                    cout<<"\t\t\t\t\tSeat No :"<<seat<<endl;
                    cout<<"\t\t\t\t\tTotal Payment USD :$"<<payment_USD<<endl;
                    cout<<"\t\t\t\t\tTotal Payment KHR :R "<<payment_KHR<<endl;

                break;
                case 3:
                    cout<<"\t\t\t\t============================>> SHAKE <<============================="<<endl;
                    cout<<"\t\t\t\t\tMenu"<<endl;
                    cout<<"\t\t\t\t\t1.Strewberry Milkshake"<<setw(25)<<"2.Orange Milkshake"<<setw(25)<<"3.Avocado Milkshake"<<endl;
                    cout<<"\t\t\t\t\tChoose type Juice Shake :";cin>>op;
                    switch(op){
                        case 1:
                            cout<<"\t\t\t\t=======================>> Strewberry Milkshake <<======================="<<endl;
                            price = 3.5;
                            cout<<"\t\t\t\t\tStrewberry Milkshake = "<<price<<endl;
                        break;
                        case 2:
                            cout<<"\t\t\t\t=======================>> Orange Milkeshake <<======================"<<endl;
                            price = 2.5;
                            cout<<"\t\t\t\t\tStrewberry Milkshake = "<<price<<endl;
                        break;
                        case 3:
                            cout<<"\t\t\t\t=======================>> Avocado Milkshake <<========================="<<endl;
                            price = 4.5;
                            cout<<"\t\t\t\t\tStrewberry Milkshake = "<<price<<endl;
                        break;
                    }
                    cout<<"\t\t\t\t===========================>> Order <<========================="<<endl;
                    cout<<"\t\t\t\t\tOrder by :";cin.ignore();getline(cin,order);
                    cout<<"\t\t\t\t\tQuantity :";cin>>qty;
                    cout<<"\t\t\t\t\tSeat No :";cin>>seat;
                    if(qty >= 5){
                            payment_USD = (qty *price ) * 0.9;
                            payment_KHR = payment_USD * 4044;
                        }else{
                            payment_USD = qty * price;
                            payment_KHR = payment_USD * 4044;
                        }
                    cout<<"\t\t\t\t=======================>> Recipt <<======================="<<endl;
                    cout<<"\t\t\t\t\tCostomer :"<<order<<endl;
                    cout<<"\t\t\t\t\tQuantity :"<<qty<<endl;
                    cout<<"\t\t\t\t\tSeat No :"<<seat<<endl;
                    cout<<"\t\t\t\t\tPayment USD : $"<<payment_USD<<endl;
                    cout<<"\t\t\t\t\tPayment KHR : R"<<payment_KHR<<endl;
                break;
            }
        break;
        case 3:
            cout<<"\t\t\t\t==============================>> Wellcome ALCOHOL <<============================="<<endl;
            cout<<"\t\t\t\t\tMenu"<<endl;
            cout<<"\t\t\t\t\t1.BEER"<<setw(25)<<"2.WINE"<<endl;
            cout<<"\t\t\t\t\tChoose Menu :";cin>>op;
            switch(op){
                case 1:
                    cout<<"\t\t\t\t===========================>> BEER <<==============================="<<endl;
                    cout<<"\t\t\t\t\tTye Beer"<<endl;
                    cout<<"\t\t\t\t\t7.Gagzberg"<<setw(25)<<"8.Haknuman"<<setw(25)<<"9.Cambodia"<<endl;
                    cout<<"\t\t\t\t\tGet one";cin>>op;
                    switch(op){
                        case 7:
                            cout<<"\t\t\t\t==============================>> Gagzberg <<============================="<<endl;
                            price = 0.61;
                            cout<<"\t\t\t\t\t1 can = "<<price<<endl;
                        break;
                        case 8:
                            cout<<"\t\t\t\t=============================>> Haknuman <<============================"<<endl;
                            price = 0.61;
                            cout<<"\t\t\t\t\t1 can = "<<price<<endl;
                        break;
                        case 9:
                            cout<<"\t\t\t\t================================>> Cambodia <<=========================="<<endl;
                            price = 0.61;
                            cout<<"\t\t\t\t\t1 can = "<<price<<endl;
                        break;
                    }
                    cout<<"\t\t\t\t===========================>> Purchase <<==========================="<<endl;
                    cout<<"\t\t\t\t\tCostomer :";cin.ignore();getline(cin,order);
                    cout<<"\t\t\t\t\tNumber of Can :";cin>>qty;

                    if(qty >= 5){
                            payment_USD = (qty *price ) * 0.9;
                            payment_KHR = payment_USD * 4044;
                        }else{
                            payment_USD = qty * price;
                            payment_KHR = payment_USD * 4044;
                        }
                    cout<<"\t\t\t\t====================================>> Recipt <<================================="<<endl;
                    cout<<"\t\t\t\t\tCostomer :"<<order<<endl;
                    cout<<"\t\t\t\t\tNumber of Can :"<<qty<<" can"<<endl;
                    cout<<"\t\t\t\t\tPayment USD :"<<payment_USD<<endl;
                    cout<<"\t\t\t\t\tPayment KHR :"<<payment_KHR<<endl;
                break;
                case 2:
                    
                    cout<<"\t\t\t\t============================>> WINE <<=========================="<<endl;
                    cout<<"\t\t\t\t\tTye wine"<<endl;
                    cout<<"\t\t\t\t\tOption"<<setw(20)<<"========>> 10 <<========"<<setw(35)<<"========>> 11 <<======="<<setw(36)<<"==========>> 12 <<=========="<<endl;
                    cout<<"\t\t\t\t\tName"<<setw(20)<<"10.Opolo Mountain Zinfandel"<<setw(35)<<"11.Wynns Black Label Shiraz"<<setw(36)<<"12.Harveys Bristol Cream Sherry"<<endl;
                    cout<<"\t\t\t\t\tSelect Wine";cin>>op;
                    switch(op){
                        case 10:
                            cout<<"\t\t\t\t=============================>> Opolo Mountain Zinfandel <<============================"<<endl;
                            cout<<"\t\t\t\t\t1 bottle = $34.95"<<endl;
                            cout<<"\t\t\t\t\t1 cup = $9"<<endl;
                            A:
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
                                cout<<"\t\t\t\t\tCostomer :";cin.ignore();getline(cin,order);
                                cout<<"\t\t\t\t\tQuantity :";cin>>qty;
                                cout<<"\t\t\t\t\tSeat No :";cin>>seat;
                                if(qty >= 5){
                                    payment_USD = (qty *price ) * 0.9;
                                    payment_KHR = payment_USD * 4000;
                                }else{
                                    payment_USD = qty * price;
                                    payment_KHR = payment_USD * 4000;
                                }
                                cout<<"\t\t\t\t================================>> Recipt <<=============================="<<endl;
                                cout<<"\t\t\t\t\tCostomer :"<<order<<endl;
                                cout<<"\t\t\t\t\tQuantity :"<<qty<<endl;
                                cout<<"\t\t\t\t\tSeat No :"<<seat<<endl;
                                cout<<"\t\t\t\t\tPayment : "<<payment_USD<<endl;
                                cout<<"\t\t\t\t\tPayment : "<<payment_KHR<<endl;
                        break;
                        case 11:
                            cout<<"\t\t\t\t================================>> Wynns Black Label Shiraz <<==============================="<<endl;
                            cout<<"\t\t\t\t\t1.bottle"<<endl;
                            cout<<"\t\t\t\t\t2.cup"<<endl;
                            a:
                            cout<<"select  do you want :";cin>>op;
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
                                cout<<"\t\t\t\t\tCostomer :";cin.ignore();getline(cin,order);
                                cout<<"\t\t\t\t\tQuantity :";cin>>qty;
                                cout<<"\t\t\t\t\tSeat No :";cin>>seat;
                                if(qty >= 5){
                                    payment_USD = (qty *price ) * 0.9;
                                    payment_KHR = payment_USD * 4000;
                                }else{
                                    payment_USD = qty * price;
                                    payment_KHR = payment_USD * 4000;
                                }
                                cout<<"\t\t\t\t==================================>> Recipt <<================================"<<endl;
                                cout<<"\t\t\t\t\tCostomer :"<<order<<endl;
                                cout<<"\t\t\t\t\tQuantity :"<<qty<<endl;
                                cout<<"\t\t\t\t\tSeat No :"<<seat<<endl;
                                cout<<"\t\t\t\t\tPayment : "<<payment_USD<<endl;
                                cout<<"\t\t\t\t\tPayment : "<<payment_KHR<<endl;
                        break;
                        case 12:
                            cout<<"\t\t\t\t=================================>> Harveys Bristol Cream Sherry <<==============================="<<endl;
                            cout<<"\t\t\t\t\t1.bottle"<<endl;
                            cout<<"\t\t\t\t\t2.cup"<<endl;
                            b:
                            cout<<"\t\t\t\t\tselect :";cin>>op;
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
                                cout<<"\t\t\t\t\tCostomer :";cin.ignore();getline(cin,order);
                                cout<<"\t\t\t\t\tQuantity :";cin>>qty;
                                cout<<"\t\t\t\t\tSeat No :";cin>>seat;
                                if(qty >= 5){
                                    payment_USD = (qty *price ) * 0.9;
                                    payment_KHR = payment_USD * 4000;
                                }else{
                                    payment_USD = qty * price;
                                    payment_KHR = payment_USD * 4000;
                                }
                                cout<<"\t\t\t\t============================>> Recipt <<=========================="<<endl;
                                cout<<"\t\t\t\t\tCostomer :"<<order<<endl;
                                cout<<"\t\t\t\t\tQuantity :"<<qty<<endl;
                                cout<<"\t\t\t\t\tSeat No :"<<seat<<endl;
                                cout<<"\t\t\t\t\tPayment : "<<payment_USD<<endl;
                                cout<<"\t\t\t\t\tPayment : "<<payment_KHR<<endl;
                        break;
                    }
                break;
            }
        break;
    }
    return 0;
}