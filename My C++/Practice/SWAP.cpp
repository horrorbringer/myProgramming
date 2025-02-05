#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    //considering an array if size n
    //give input as element
    for(int i = 0 ; i < n ; i++){
        cin>>a [i];
    }
    cout<<"Before swapping "<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }cout<<"\nAfter Swapping "<<endl;
    for(int i = n-1 ; i >= 0 ; i--){
        cout<<a[i]<<" ";
    }
    return 0;
}

