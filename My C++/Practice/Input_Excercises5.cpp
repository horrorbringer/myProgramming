#include<iostream>
#include<iomanip>
using namespace std ;
int main (){
    cout<<fixed<<showpoint<<setprecision(3);
    double n;  //that 1 miles = 1609.344m 
    double kilometer;
    cin>>n;
    kilometer = (1000 * n) * 1609.344;
    cout<<kilometer;

}