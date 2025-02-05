#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
char color = 219;
void Green(){
    system("color A");
        for(int i = 60;i>=1; i--){
            cout<<setw(100)<<color<<color<<color<<endl;
            Sleep(500);
            cout<<endl;
            cout<<setw(100)<<">>>>|"<<i<<"|<<<<";
            Sleep(500);
            system("cls");
    }
}
void yellow(){
    system("color E");
        for(int i = 5;i>=1; i--){
            cout<<setw(100)<<color<<color<<color<<endl;
            Sleep(500);
            cout<<endl;
            cout<<setw(100)<<">>>>|"<<i<<"|<<<<";
            Sleep(500);
            system("cls");
    }
}
void red(){
    system("color C");
        for(int i = 60;i>=1; i--){
            cout<<setw(100)<<color<<color<<color<<endl;
            Sleep(500);
            cout<<endl;
            cout<<setw(100)<<">>>>|"<<i<<"|<<<<";
            Sleep(500);
            system("cls");
    }
}
int main(){
    a:
    Green();
    yellow();
    red();
    goto a;
    return 0;
}