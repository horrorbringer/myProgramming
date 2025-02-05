#include<iostream>
using namespace std;
int main(){
    //break = break out of a loop
    //continue =  skip current interation
    for(int i= 1 ; i <= 10; i++){
        if(i == 5){
            continue;;
        }
        cout<<i<<endl;
    }
    return 0;
}