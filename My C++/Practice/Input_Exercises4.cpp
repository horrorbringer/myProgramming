#include<iostream>
using namespace std;
int main(){
    float fahrenheit;
    float celsius;
    cout<<"Fahrenheit = ";
    cin>>fahrenheit;
    celsius = (fahrenheit - 32)/1.8;
    cout<<"Celsius convert to fahrenheit is = "<<celsius<<" C";
    return 0; 
}