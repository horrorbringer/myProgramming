#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
int main(){
    start:
    for(int i = 50;i>=0; i--){
        Sleep(550);
        system("color A");
        cout<<setw(65)<<">>>>["<<i<<"]<<<<";
        Sleep(550);
        system("cls");
    }
    for(int i = 10;i>=0; i--){
        Sleep(550);
        system("color E");
        cout<<setw(65)<<">>>>["<<i<<"]<<<<";
        Sleep(550);
        system("cls");
    }
    for(int i = 50;i>=0; i--){
        Sleep(550);
        system("color C");
        cout<<setw(65)<<">>>>["<<i<<"]<<<<";
        Sleep(550);
        system("cls");
        goto start;
    }
    return 0;
}