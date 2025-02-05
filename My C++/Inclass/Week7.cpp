#include<iostream>
using namespace std;
int main (){
    int score;

    cout<<"\tInput score:";
    cin>>score;

    if(score >= 70 && score <=100){
        cout<<"\tYou pass A \n";
    }else if (score >=50 && score <70){
        cout<<"\tYou pass C \n";
    }else if (score < 50 ){
        cout<<"\t You fail \n";
    }else{
        cout<<"\t Pleas Input score from 1--->100\n";
    }
    return 0;
}