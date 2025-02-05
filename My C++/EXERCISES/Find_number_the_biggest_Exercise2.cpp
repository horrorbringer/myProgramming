#include<iostream>
using namespace std;

int main(){
    system("cls");
    int a,b,c,the_big;
    for(int i=1;i<=3;i++){
    cout<<"Input value A: ";cin>>a;
    }
    for(int i=1;i<=3;i++){
        if(a>b>c){
            the_big=a;
        }else  if(a<b<c){
            the_big=c;
        }else if(a<b>c){
            the_big=b;
        }
    }
    
    cout<<"\nNumber the biggest is: "<<the_big<<'\n';
    return 0;
}