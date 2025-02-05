#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"input time Spam : ";cin>>n;
    for(int i=2;i<n;i++){
        for(int j = 1;j<i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}