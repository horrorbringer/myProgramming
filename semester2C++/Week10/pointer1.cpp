#include<iostream>
using namespace std;
int main(){
    system("cls");
    int x = 10;
    int *ptr ;
    ptr = &x;
    cout << "Value of X                      : " << x << endl;
    cout << "Address of X                    : " << &x << endl;
    cout << "Address of ptr that copy from X : " << ptr << endl;
    cout << "Value of ptr that copy from X   : " << *ptr << endl << endl << endl ;

    return 0;
}