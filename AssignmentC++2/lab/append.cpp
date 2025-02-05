#include<iostream>
#include<conio.h>
using namespace std;  

// Str1.append(str2);  
// Str1.append(str2,pos,len);  
// Str1.append(str2,n);  

void method1(){
    cout << "\n";
    string str1="Welcome to C++ programming";  
    string str2="language";  
    cout<<"Before appending,string value is"<<str1<<'\n';  
    str1.append(str2);  
    cout<<"After appending, string value is"<<str1<<'\n'; 
}
void method2(){
    cout << "\n";
    string str1 = "Mango is my favourite" ;  
    string str2 ="fruit";  
    cout<<"Before appending, string value is :" <<str1<<'\n';  
    str1.append(str2,0,5);  
    cout<<"After appending, string value is :" <<str1<<'\n'; 
}
void method3(){
    cout << "\n";
    string str1 = "Kashmir is nature";  
    str1.append("of  beauty",9) ;  
    cout<<"String value is :"<<str1;  
    cout << "\n";
}

int main()  
{  
    int op;
    again:
    cout << "\n==============     ===============     ===============\n";
    cout << " [1] _METHOD1_      [2] _METHOD2_       [3] _METHOD3_\n";
    cout << "==============     ===============     ===============\n\n";
    cout << "PLEASE SELECT: ";cin >> op;
    switch(op){
        case 1:
            system("cls");
            method1();
            getch();
            goto again;
        break;
        case 2:
            system("cls");
            method2();
            getch();
            goto again;
        break;
        case 3:
            system("cls");
            method3();
            getch();
            goto again;
        break;
    }

return 0;  
}   