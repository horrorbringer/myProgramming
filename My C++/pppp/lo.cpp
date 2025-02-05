#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int n;
    system("color F");
    cout<<"Calulate by this : 2 + 4 + 6 + ... + n = \n";
    cout<<"Enter number : ";cin>>n;
    if(n<0){
        system("color 02");
        cout<<"You can not negative number!\n";
        getch();
        system("cls");
        

    }
    return 0;
}