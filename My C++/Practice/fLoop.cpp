#include<iostream>
using namespace std;
int main()
{
    int i, j ,k,n;
    // n = 1000;
    cout<<"Enter number : ";cin>>n;
    for(i=0; i<n/2; i++){
        for(j=0  ; j<(n/2)-i;j++){
            cout<<" ";
            }
            for(k =0 ; k<(2*i)+1; k++){
                if(k<i){
                cout<<"1";
                }
                else
            cout<<"0";
        }
        cout<<"\n";
    }
    for(i = 0; i < n/2; i++){
        for(j = 0; j < i+1 ; j++){
            cout<<" ";
        }
            for(k = 0 ; k<(n/i)+1;k++){
                if(k>i){
                    cout<<"0";
                }
                else
                cout<<"1";
            }
            cout<<"\n";
    }
    return 0;
}