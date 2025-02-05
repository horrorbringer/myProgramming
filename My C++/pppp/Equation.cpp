#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void myEquation(int a,int b,int c){
    float dalta,x1,x2;
    cout<<fixed<<showpoint<<setprecision(2);
    dalta = (b/2) - a*c;
    if(a+b+c == 0){
        x1 = 1;
        x2 = c/a;
        cout<<"x1 = "<<x1<<" , "<<"x2 = "<<x2;
    }else if(a-b+c == 0){
        x1 = -1;
        x2 = -c/a;
        cout<<"x1 = "<<x1<<" , "<<"x2 = "<<x2;
    }else if(dalta > 0){
        x1 = -b + sqrt(dalta)/a;
        x2 = -b - sqrt(dalta)/a;
        cout<<"x1 = "<<x1<<" , "<<"x2 = "<<x2;
    }else if(dalta < 0){
        cout<<"Dalta = "<<dalta<<"  Dalta < 0 "<<endl;
        cout<<"Meaningless Equation but have root but there are roots complex numbers !";
    }
}
void input(){
    int a , b , c;
    cout<<"Enter Value A :";cin>>a;
    cout<<"Enter Value B :";cin>>b;
    cout<<"Enter Value c :";cin>>c;
    myEquation(a,b,c);
}
int main(){
   input(); 
return 0; 
}