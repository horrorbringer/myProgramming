#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main(){
    // goto label
    string username,password,name;
    int id , age;
    char gender;
    stard:
    cout<<"\t=================>>> Loging <<<=================\n";
    cout<<"\t[Please Enter Username : ";cin>>username;
    cout<<"\t=================>>> Loging <<<=================\n";
    cout<<"\t[Please Enter Password : ";cin>>password;
    cout<<"\t=================>>> Loging <<<=================\n";
    if(username == "GoJo" && password == "7777"){
        cout<<"\tWellcome to the system ........! \n";
        system("cls");
    }else{
        cout<<"\tPlease try again..........! \n";
        cout<<"\tpres key to continue..........\n";
        getch();
        system("cls");
        goto stard;
    }
    cout<<"\t===========>>> Group Age <<<===============\n";
    cout<<"\tEnter name : ";cin>>name;
    cout<<"\tEnter gender : ";cin>>gender;
    cout<<"\tEnter id : ";cin>>id;
    cout<<"\tEnter age : ";cin>>age;
    if(age >=0 && age <=3){
        
        cout<<"\tYour gender is "<<gender<<endl;
        cout<<"\tYour id is "<<id<<endl;
        cout<<"\tYou are Baby \n";
    }else if (age >= 4 && age <=12){
        cout<<"\tYour name is "<<name<<endl;
        cout<<"\tYour gender is "<<gender<<endl;
       
        cout<<"\tYou are child";
    }else if(age >=13 && age <=18){
        cout<<"\tYour name is "<<endl;
        cout<<"\tYour gender is "<<endl;
        cout<<"\tYou are Teenager ";
    }else if (age >=20 && age <=59){
        cout<<"\tYou are Adult ";
    }else if(age >=60){
        cout<<"\tYour are Senior ";
    }else if (age < 0){
        cout<<"\tWrong input.........!";
    }
    return 0;
}