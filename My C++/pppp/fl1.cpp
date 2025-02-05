#include<iostream>
using namespace std;
int main(){
    int i , j ,n ;
    cout<<"Enter n: ";cin>>n;
    for(i = 110 ; i >= n ; i--){
        for(j = 0 ;j <= n; j++){
            cout<<" #\t";
        }
        cout<<" *\n ";
    }
}