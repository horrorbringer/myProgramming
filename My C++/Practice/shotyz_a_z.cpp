#include<iostream>
using namespace std;
int main(){
int n;
char letter[100];
    cout<<"Enter the number of elements:";cin>>n;
    for(char i = 'a';i < n;i++){
    cout<<"Enter letter:";cin>>letter[i];
    }
    for(char i = 'a' ; i > n ; i++){
        for(int j = i + 1;j < n ;j++){
            cout<<letter[j]<<"  ";
        }
    }
    return 0;
}