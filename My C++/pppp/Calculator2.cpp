#include<iostream>
using namespace std;
int main (){
    int num1,num2,option;
    float result;
    cout<<"\t============== Enter value ============="<<endl;
    cout<<"\tEnter number1 : ";cin>>num1;
    cout<<"\tEnter number2 : ";cin>>num2;
    cout<<"\t============== Options ================"<<endl;
    cout<<"\t1 - Addition"<<endl;
    cout<<"\t2 - Subtraction"<<endl;
    cout<<"\t3 - Multiplication"<<endl;
    cout<<"\t4 - Division"<<endl;
    cout<<"\tChose one of the following operations(1-4) : ";cin>>option;
    switch(option){
        case 1:
            result = num1 + num2;
        break;
        case 2:
            result = num1 - num2;
        break;
        case 3:
            result = num1 * num2;
        break;
        case 4:
            result = num1 / num2;
        break;
        default:
            cout<<"\tno have option!"<<endl;
        break;
    }
    cout<<"\tResult = "<<result<<endl;
    return 0;
}