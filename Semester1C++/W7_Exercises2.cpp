#include<iostream>
using namespace std;
int main(){
    int hour;
    do{
    cout<<"Enter Hour : ";
    cin>>hour;
    if(hour >= 00 && hour <12 ){
        cout<<"\tGoodmoning !\n";
    }else if(hour >=12 && hour < 16){
        cout<<"\tGoodaffternoon !\n";
    }else if(hour >=16 && hour <19){
        cout<<"\tGoodevening !\n";
    }else if(hour >=19 && hour <= 24 ){
        cout<<"\t night !\n";
    }else{
        cout<<"\tYou not Human !\n";
        cout<<"\tAre you Alien ?";
    }
    }while(hour < 25 );
    return 0;
}