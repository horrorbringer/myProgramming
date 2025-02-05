#include<iostream>
using namespace std;
int main (){
    int rows,columes;
    char symbols;
    cout<<"Enter rows : ";cin>>rows;
    cout<<"Enter columes : ";cin>>columes;
    cout<<"Enter symbols : ";cin>>symbols;
    for(int i=0; i<= rows; i++){
        for(int j = 0 ; j<= columes; j++){
        cout<<symbols;
        }
        cout<<endl;
    }
    return 0;
}