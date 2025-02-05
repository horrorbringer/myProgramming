#include <iostream>
using namespace std;
void liner(int a[] , int size , int target){
    for(int i =0 ; i<size; i++){
        if(a[i]==target){
            cout<<target<<" found at index "<<i;
            return;
        }
    }
    cout<<"element not found"<<endl;
}

int main(){
    int a[]={10,30,20,40,60};
    int size=sizeof(a)/sizeof(a[0]);
    int target;

    cout<<"Enter the element that you want to find :"<<endl;
    cin>>target ;
    liner(a ,size ,target);
    return 0;


}
