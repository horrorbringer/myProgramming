#include <iostream>
using namespace std;
char a=201,b=205,c=203,d=187;
char l=186,s=204,x=206,r=185;
char t=200,e=202,w=188;
int i , j, k,rows;
void Bot();
void On();
void Mid();
 
int main(){
    cout << "\tHow many rows dow you want: ";cin>>rows;
    Mid();
    return 0;
}

void Mid(){
    On();
    for(i=1;i<=rows-1;i++){
        cout<<s;
        for(j=1;j<=48;j++){
            if(j==9||j==19||j==29||j==39){
                cout <<x;
            }else{
            cout << b;
            }
        }
        cout<<r<<endl;
    }
    Bot();
}

void On(){
    for( i = 1;i <= 50;i++){
        if(i==1){
        cout << a;
        }else if(i==10||i==20||i==30||i==40){
            cout << c;
        }else if(i==50){
            cout << d;
        }else {
            cout <<b;
        }
    }
    cout <<"\n";
}

void Bot(){
    for(i=1;i<=50;i++){
        if(i==1){
            cout << t;
        }else if(i==10||i==20||i==30||i==40){
            cout << e;
        }else if(i==50){
            cout << w;
        }else{ 
            cout << b;
        }
    }
}