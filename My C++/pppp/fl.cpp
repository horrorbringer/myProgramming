#include<iostream>
using namespace std;
int main(){
    int i , j , k , n;
    cout<<"Enter n : ";cin>>n;
    for(i = 1 ; i < n ; i++){
        cout<<" 0\t ";
        for(j = 1; j < n-1; j++){
            for(k = 1; k < n*2+1; k++){
                cout<<" 1\t ";
            }
            cout<<" 1\t ";
        }
        cout<<" 0\t ";
    } 
    for(i = 1 ; i < n-1 ; i++){
        cout<<" 1\t ";
        for(j = 1; j < n+2; j++){
            for(k = 1; k < n*2+1; k++){
                cout<<" 0\t ";
            }
            cout<<" 1\t ";
        }
        cout<<" 0\t ";
    } 
    return 0;
}