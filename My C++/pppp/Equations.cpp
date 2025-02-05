#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    float a , b , c ,dalta, x1,x2;
    cout<<"Enter Value a :";cin>>a;
    cout<<"Enter Value b :";cin>>b; 
    cout<<"Enter Value c :";cin>>c;
    dalta = b*b-4*a*c;
    cout<<"dalta = "<<dalta<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    if(a+b+c==0){
        cout<<"x1 = 1"<<endl;
        cout<<"x2 = 2"<<endl;
        x1 = 1;
        x2 = c/a;
        cout<<"x1 = "<<x1<<" , "<<"x2 = "<<x2;
    }else if(a-b+c==0){
        cout<<"x1 = -1"<<endl;
        cout<<"x2 = -c/a"<<endl;
        x1 = -1;
        x2 = -c/a;
        cout<<"x1 = "<<x1<<" , "<<"x2 = "<<x2;
    }else if(dalta > 0 ){
        x1 = -b + sqrt(dalta)/(2*a);
        x1 = -b - sqrt(dalta)/(2*a);
        cout<<"x1 = "<<x1<<" , "<<"x2 = "<<x2;
    }else if(dalta == 0){
        x1 = x2 =-b/(2*a);
        cout<<"x1 = "<<x1<<" , "<<"x2 = "<<x2;
    }else if(dalta < 0){
        x1 = -b/(2*a) + sqrt(-dalta)/(2*a);
        x1 = -b/(2*a) - sqrt(-dalta)/(2*a);
        cout<<"x1 = "<<x1<<" , "<<"x2 = "<<x2;
    }
    return 0;
}