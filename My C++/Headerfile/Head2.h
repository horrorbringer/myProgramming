#include<iostream>
using namespace std;
 int sum(int a,int b);
void Intro(){
    cout<<"Hello My name is Meas Vanny\n";
    cout<<"I'm 20 years old \n";
    cout<<"I'm a student at Beltie University \n";
}
void input(){
    int a,b;
    cout<<"Enter value A : ";cin>>a;
    cout<<"Enter value B : ";cin>>b;
    cout<<"sum("<<a<<", "<<b<<")="<<sum(a,b)<<endl;
}
int sum(int a,int b){
    return a+b;
}