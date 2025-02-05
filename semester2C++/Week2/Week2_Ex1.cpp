#include<iostream>
using namespace std;

int main(){
    system("cls");
    float avg=0.0;
    int sum=0;
    int list[5]={10,20,30,40,50};
    for(int i = 0; i < 5; i++){
        cout << "\tvalue of index["<<i<<"] = "<<list[i]<<endl;
        sum += list[i];
    }
        avg = sum/5;
        cout << "\n";
        cout << "\tTotal of Array is = " <<sum<<endl;
        cout << "\tAverage is = "<<avg<<endl; 
        cout << "\n";

    return 0;
}