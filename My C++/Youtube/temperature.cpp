#include<iostream>
using namespace std;
int main(){
    double temp;
    char unit;
    cout<<"======== Temperature conversion =========\n";
    cout<<"F = Fahrinheit\n";
    cout<<"C = celius\n";
    cout<<"What unit would you like to convert to: ";
    cin>>unit;

    if(unit == 'F' ){
        cout<<"Fahrinheit the temperature in Celius : ";
        cin>>temp;
        temp = (1.8 * temp) + 32;
        cout<<"Fahrinheit is : "<<temp<<" F\n";
    }
    else if (unit == 'C' ){
        cout<<"Celius the temperature in Fahrinheit : ";
        cin>>temp;
        temp = (temp - 32)/1.8;
        cout<<"Celius is : "<<temp<<" C\n";
    }else {
        cout<<"Pleas Enter unit << F >> or << C >> ";
    }
    
}