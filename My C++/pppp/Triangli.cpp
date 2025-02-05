#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter size <30 : ";cin>>n;
    for(i = 1;i < n; i++){
        for(j = n-1; j > i; j--){
            cout<<"  ";
        }
        for(k = 1;k <=2*i-1; k++){
            if(i==n-1 || k==1 || k==2*i-1){
                cout<<"* ";
            }else {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}