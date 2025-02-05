#include<iostream>
using namespace std;
int main (){
    //int number[5]={3,2,5,1,5,};
    //int Result=0;
    //for(int i=0 ;i<5;i++){
    //    Result+=number[i];
    //}
    //cout<<"Result: "<<Result<<endl;
    //return 0;

    /*int n;
    cout<<"Enter the number element";
    cin>>n;
    int a[n];
    for(int i =0 ;i<n;i++)
    {
        cin>>a[1];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum +=a[i];
    }
    cout<<sum;
    return 0;*/

    int n;
    int a[n];
    cout<<"Enter the number of elements:";
    cin>>n;
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

