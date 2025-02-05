#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
    string username;
    char yes;
    int password;
    do{
    cout<<"Please input username:";getline(cin,username);
    cout<<"Please input password:";cin>>password;
    if(username =="Li Bei"){
        if(password == 123){
            cout<<"congratulation login !"<<endl;
        
            }else cout<<"Wrong !"<<endl;
        
        }
        cout<<"Do you want continue...............!"<<endl;
        yes = getche();
    }while(yes =='y');
    return 0;
}