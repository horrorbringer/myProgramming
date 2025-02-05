#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int id , age  ;
    char gender;
    int gread;
    string name;
    int score_M,score_P,score_C,score_B,score_K;
    float total_score,averge;
    cout<<"\tEnter Your Name :";getline(cin,name);
    cout<<"\tEnter Your Gender :";cin>>gender;
    cout<<"\tEnter Your ID : "; cin>>id;
    cout<<"\tEnter Your Age :";cin>>age;
    cout<<"\tEnter Your Gread :";cin>>gread;
    cout<<"\tEnter score Math :";cin>>score_M;
    cout<<"\tEnter score Physic :";cin>>score_P;
    cout<<"\tEnter score Cemesty :"; cin>>score_C;
    cout<<"\tEnter score Biology :"; cin>>score_B; 
    cout<<"\tEnter score Khmer :"; cin>>score_K;
    total_score =  score_B + score_C + score_M + score_P + score_K;
    cout<<"\tTotal Score is : "<< total_score <<endl;
    averge = total_score / 5;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\tYour Averge is : "<<averge<<endl;
    if(averge >=90 && averge <=120){
        cout<<"\tcongatulation Your Gread A";
    } if (averge >=80 && averge <90){
        cout<<"\tcongatulation Your Gread B";
    } if (averge <80 && averge >=70){
        cout<<"\tcongatulation Your Gread C";
    } if (averge <70 && averge >=60){
        cout<<"\tcougatulation Your Gread D";
    } if (averge <60 && averge >=50){
        cout<<"\tcongatulation Your Gread E";
    }
    else{
        cout<<"\tyou fail !";
    }
return 0;
}