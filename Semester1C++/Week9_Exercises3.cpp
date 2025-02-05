#include<iostream>
using namespace std;
int main (){
    char option;
    cout<<"\toption M : Good moning\n";
    cout<<"\toption A : Good Afternoon\n";
    cout<<"\toption E : Good Evining\n";
    cout<<"\tchose option :";
    cin>>option;
    switch (option)
    {
    case 'A':
        cout<<"Good Moning!";
        break;
    case 'E':
        cout<<"Good Afternoon!";
        break;
    case 'M':
        cout<<"Good Evening";
        break;
    
    default:
        cout<<"wrong input!";
        break;
    }
    return 0;
}