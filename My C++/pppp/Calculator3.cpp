#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num1,num2,option;
    float number1,number2,result;
    start:
    cout<<"\t============== Calculator ============"<<endl;
    cout<<"\tOption <<-1->> Addition"<<endl;
    cout<<"\tOption <<-2->> Subtraction"<<endl;
    cout<<"\tOption <<-3->> Multiplication"<<endl;
    cout<<"\tOption <<-4->> Division"<<endl;
    cout<<"\t============== Calculator ============"<<endl;
    cout<<"\tChose one of the above option (1-4) :";cin>>option;
    cout<<"\t============== Calculator ============"<<endl;
    switch(option){
        case 1:
            cout<<"\t============== Addition =============="<<endl;
            cout<<"\tNum1 + Num2"<<endl;
            cout<<"\tEnter Num1 : ";cin>>num1;
            cout<<"\tEnter Num2 : ";cin>>num2;
            result = num1 + num2;
            cout<<"\tResult : "<<num1<<" + "<<num2<<" = "<<result<<endl;
        break;
        case 2:
            cout<<"\t============= Subtraction ============"<<endl;
            cout<<"\tNum1 - Num2"<<endl;
            cout<<"\tEnter Num1 : ";cin>>num1;
            cout<<"\tEnter Num2 : ";cin>>num2;
            result = num1 - num2;
            cout<<"\tResult : "<<num1<<" - "<<num2<<" = "<<result<<endl;
        break;
        case 3:
            cout<<"\t============ Mutiplication ==========="<<endl;
            cout<<"\tNum1 * Num2"<<endl;
            cout<<"\tEnter Num1 : ";cin>>num1;
            cout<<"\tEnter Num2 : ";cin>>num2;
            result = num1 * num2;
            cout<<"\tResult : "<<num1<<" * "<<num2<<" = "<<result<<endl;
        break;
        case 4:
            cout<<"\t============== Division =============="<<endl;
            cout<<"\tNumber1 / Number2"<<endl;
            cout<<"\tEnter Number1 : ";cin>>number1;
            cout<<"\tEnter Number2 : ";cin>>number2;
            if(number2 == 0){
                cout<<"\tDivision by zero << Error...! >>"<<endl;
            }else{
                result = number1 / number2;
                cout<<"\tResult : "<<number1<<" / "<<number2<<" = "<<result<<endl;
            }
        break;
        default:
            cout<<"\tInvalid option.........!"<<endl;
    }
    cout<<"\tpress the key to continue.........!";
    getch();
    system("cls");
    goto start;
    return 0;
}