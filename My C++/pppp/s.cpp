#include<iostream>
using namespace std;
int main(){
    int i , j ,n;
    do{
    cout<<"N (1->55)\n";
    cout<<"Enter n: ";cin>>n;

    if(n<=55 && n>=1){   
        for(i = n ; i >= 1 ; i--){
        for(j = 1 ; j <= i ; j++){
            cout<<" * ";
            }
            cout<<endl;
        }
        for(i = 1; i<=n ; i++){
            for(j = 1; j <= i; j++ ){
                cout<<" # ";
            }
            cout<<endl;
        }
    }else{
        cout<<"Not Working !";
    }
    }while(n <=55 && n>=1);
    return 0;
}