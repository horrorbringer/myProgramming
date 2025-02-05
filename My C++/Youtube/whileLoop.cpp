#include<iostream>
using namespace std;
int main(){
    // do while loop = do some bolck of code first,
    //               = THEN repeat again if condition is true

    int number ;

    cout<<"Enter a posotive #: ";
    cin>>number;

    do{
        cout<<"Enter a Positive #: ";
        cin>>number;
       
    }while(number < 0);
    cout<<"The # is: "<<number;
    return 0;
}