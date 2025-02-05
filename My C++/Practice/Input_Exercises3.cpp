#include<iostream>
using namespace std;
int main (){
    float a,b,area,perimeter;
    cout<<"Enter value width of rectangle : ";
    cin>>a;
    cout<<"Enter vaue length of rectangle : ";
    cin>>b;

    area = a * b ;
    perimeter = (a + b)*2;

    system("cls");
    cout<<"\t+ Find the Area and Perimeter of a Rectangle"<<endl<<endl;
    cout<<"\t-Area = "<<a<<" x "<<b<< " = "<<area <<" squar centimeter"<<endl<<endl;
    cout<<"\t-Perimeter = "<<"( "<<a<<" + "<<b<<" )/2"<<" = "<< perimeter<<"centimeter"<<endl<<endl;
    cout<<"\t*So Area of Rectangle is = "<<area<<"Square Centimeter"<<endl<<endl;
    cout<<"\t*So Perimeter of Rectangle is = "<<perimeter<<"Centimeter"<<endl<<endl;
    return 0;
}