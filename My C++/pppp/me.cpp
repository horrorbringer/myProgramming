#include<iostream>
using namespace std; 
int main (){
    int qty, menu;
    float total_payment;
    cout<<"\t============== Technology Item ===============\n";
    cout<<"\tmenu 1: Phone \n";
    cout<<"\tmenu 2: Laptop \n";
    cout<<"\tmenu 3: Desktop \n";
    cout<<"\tmenu 4: Ipat     \n";
    cout<<"\tmenu 5: Monitor   \n";
    cout<<"\tmenu 6: Keyboard   \n";
    cout<<"\tPleas choose menu : ";cin>>menu;
    if(menu ==1){
        cout<<"\tIphone 1 = 399$\n";
        cout<<"\tEnter Quanity Phone : ";cin>>qty;
        total_payment = 399 *qty;
    }else if(menu ==2){
        cout<<"\tLaptop 1 = 799$\n";
        cout<<"\tEnter Quanity Laptop : ";cin>>qty;
        total_payment = 799 * qty;
    }else if (menu ==3){
        cout<<"\tDesktop 1 = 1078$\n";
        cout<<"\tEnter Quanity Desktop : ";cin>>qty;
        total_payment = 1078 * qty;}
    else if (menu == 4){
        cout<<"\tIpat 1 = 887$\n";
        cout<<"\tEnter Quanity Ipat : ";cin>>qty;
        total_payment = 887 * qty;
    }else if(menu == 5){
        cout<<"\tMonitor 1 = 128$\n";
        cout<<"\tEnter Quanity Moniter : ";cin>>qty;
        total_payment = 128  * qty;
    }else if (menu == 6){
        cout<<"\tKeyboard 1 = 354$\n";
        cout<<"\tEnter Quanity Keyboard : ";cin>>qty;
        total_payment = 354 * qty;
        }
        cout<<"\ttotal payment : "<<total_payment<<"$";
    return 0;
}