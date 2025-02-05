#include <iostream>
using namespace std;
void Sum(int a , int b){
    cout<<"Sum of A and B is : "<<a +b<<endl;
}
int main(){
    int a, b;
    cout<<"Enter A : ";cin>>a;
    cout<<"Enter B : ";cin>>b;
    Sum(a, b);
    return 0;
}