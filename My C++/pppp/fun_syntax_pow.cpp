#include<iostream>
using namespace std;
int Power(int number , int power)
{
    int i , c = 1, totalpower ;
    for( i = 1 ; i<= power ; i++ ){
        totalpower=number;
        c=  c*totalpower;
    }
    cout<<"C = "<<c; 
    return c;
}
int main(){
    int p,n;
    cout<<"Enter Value Number : ";cin>>n;
    cout<<"Enter Value Power : ";cin>>p;
    int result = Power(n,p);
    //cout<<"Result is : "<<result<<endl;

    return 0;
}