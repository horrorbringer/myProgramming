#include<iostream>
using namespace std;
int Sum(int a , int b){
    return a + b;
}
int main(){
    int a, b;
    cout<<"Enter A : ";
    cin>>a;
    cout<<"Enter B : ";
    cin>>b;
    cout<<"Sum of A and B is : "<<Sum(a,b);
    return 0;
}