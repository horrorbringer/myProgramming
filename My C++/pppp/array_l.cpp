#include<iostream>
using namespace std;
int main(){
    int list[3][2]={
        {50,60},
        {90,80},
        {100,200},
    };
    for(int index = 0; index < 3; index++){
        for(int index2 = 0; index2 <2; index2++){
            cout<<"The array of index ["<<index<<"]"<<"["<<index2<<"] : "<<list[index][index2]<<endl;
        }
    }
}