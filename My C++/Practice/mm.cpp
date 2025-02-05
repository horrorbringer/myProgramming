#include<iostream>
using namespace std;
int main(){
    string username;
    int password;
    
    cout<<"Please input username :";getline(cin,username);
    cout<<"Please input password :";cin>>password;
    if(username == "Li bei" ){
        if(password == 123){
            cout<<"congratulation login !"<<endl;
        }else{
            cout<<"Invaild password !"<<endl;
        }
    }else{
        cout<<"Invaild username !"<<endl;
    }
    return 0;
}