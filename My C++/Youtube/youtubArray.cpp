#include<iostream>
using namespace std ;
int main(){
    int i, min,max,size=10;
    int arr[10]={34,76,87,99,23,16,83,74,49,56};
    min = arr[0];
    max = arr[0];
    for(i=1; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }if(arr[i] > max){
            max=arr[i];
        }
    }
    cout<<"Smallest Number = "<<min<<endl;
    cout<<"Largest Number = "<<max;
    return 0;
}