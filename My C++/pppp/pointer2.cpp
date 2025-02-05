#include<iostream>
using namespace std;
int main(){
    int *p=new int[3];
    for(int i=0;i<3;i++){
        cin>>p[i];
    }
    for(int i=0;i<3;i++){
        cout<<p[i]<<" ";
    }
    delete []p;
}