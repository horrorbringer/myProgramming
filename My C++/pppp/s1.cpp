#include<iostream>
#include<string>
#include<iomanip>
#include<windows.h>
using namespace std;
int main(){
    string username,password;
    int op,op1,op2,op3,QTY;
    double discount,total;
    double item_op1 = 1.5;
    double item_op2 = 3;
    double item_op3 = 2.5;
    a:
    system("cls");
    cout << "*****************Login********************"<<endl;
    cout << "\n\tEnter username : ";
    cin >> username;
    cout << "\n\tEtner password : ";
    cin >> password;
    if (username == "admin" &&password == "123123"){
        cout <<"\tLoading...";
        for (int i=1;i<=10;i++){
            cout <<".";
            Sleep(100);
           
            
        }
    cout << "" << endl;
    system("cls");
    cout<< "==============>>SOFT DRINK<<================"<<endl;
    cout <<"1.CAN : " <<endl;
    cout <<"2.JUICE : "<<endl;
    cout <<"3.SHANK : "<<endl;
    cout <<"choose option menu : ";
    cin>>op;
    switch (op)
    {
    case 1:
        cout <<"1.RED BULL :\t"<<"$1.5"<<endl;
        cout <<"2.BOOST STRONG :"<<"$1.5"<<endl;
        cout <<"3.RED ANT :\t"<<"$1.5"<<endl;
        cout <<"choose option menu : ";
    cin>>op1;
        cout << "How many items would you like to buy? ";
        cin>>QTY;
         if (QTY >= 5) {
        
        discount = 0.30;
        cout << "You are eligible for a 30% discount." << endl;
    }

    total = QTY * item_op1 * (1 - discount);
    cout << "Total Payment USD: $" << fixed << setprecision(2) << total << endl;
    cout << "Total Payment KHR: " << total*4100 <<  " KHR" << endl;
    break;
        
    case 2:
        cout<<"ACAI : \t\t\t"<<"$3.00"<<endl;
        cout<<"ALOE VERA JUICE :\t"<<"$3.00"<<endl; 
        cout<<"APPLE SPICED CIDER :\t"<<"$3.00"<<endl;
        cout <<"choose option menu : ";
    cin>>op1;
        cout << "How many items would you like to buy? ";
    cin>>QTY;
    if (QTY >= 5) {
         
        discount = 0.30;
        cout << "You are eligible for a 30% discount." << endl;
    }

     total = QTY * item_op2 * (1 - discount);
    cout << "Total cost: $" << fixed << setprecision(2) << total << endl;
    cout << "Total Payment KHR: " << total*4100 <<  " KHR" << endl;

    break;
    case 3:
        cout <<"Frozen Fanta Blue Raspberry :\t"<<"$2.50"<<endl;
        cout <<"Frozen Coca-Cola Classic :\t"<<"$2.50"<<endl;
        cout <<"Strawberry Banana Smoothie :\t"<<"$2.50"<<endl;
        cout <<"choose option menu : ";
    cin>>op1;
        cout << "How many items would you like to buy? ";
    cin>>QTY;
    if (QTY >= 5) {
        
        discount = 0.30;
        cout << "You are eligible for a 30% discount." << endl;
        
    }
    total = QTY * item_op3* (1 - discount);
    cout << "Total cost: $" << fixed << setprecision(2) << total << endl;
    cout << "Total Payment KHR: " << total*4100 <<  " KHR" << endl;
    break; 

    default:
    cout << "Invalid option. Please try again." << endl;
    goto a;
    
    break;
   
    }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    else{
         cout <<"Loading...";
        for(int i=1;i<=20;i++){
            cout << ".";
            Sleep(100);

        }
        cout << "\n\tWrong username and passowrd!!!"<<endl;
        system("pause");
        goto a;
        
    }
   
   
    return 0;
}