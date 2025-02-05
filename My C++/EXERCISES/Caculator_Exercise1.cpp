#include<iostream>
using namespace std;

int main(){

    int choice,a,b,c;

    cout<<"-------->> Caculator <<---------\n\n";
    cout<<"Enter number A: ";cin>>a;
    cout<<"Enter number B: ";cin>>b;
    cout<<"\n-------->> Caculator <<---------\n\n";
    system("cls");
    again:
    cout<<"1.Add two numbers\n";
    cout<<"2.Subtract two numbers\n";
    cout<<"3.Multiply two numbers\n";
    cout<<"4.Divide two numbers\n";
    cout<<"4.Modulus two numbers\n";
    cout<<"choice one: ";cin>>choice;

    if(choice == 1){
        c = a + b;
    }else if(choice == 2){
        c = a - b;
    }else if(choice == 3){
        c = a * b;
    }else if(choice == 4){
        c = a / b;
    }else if(choice == 5){
        c = a % b;
    }else{cout<<"Invalid choice!\n";goto again;}
    
    cout<<c<<'\n';
    return 0;
}