#include<iostream>
using namespace std;

double getTotal(double prices[],int size);
int main(){

    double prices[]={44.56, 23.56, 67.98, 2.34};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices,size);

    cout<<"$"<<total;

    return 0;
}
double getTotal(double prices[],int size){
    double total = 0;

    for(int i=0;i<size;i++){
        total += prices[i];
    }
    return total;
}