#include<iostream>
using namespace std;

struct employee{
    char p = 95, q = 124, r= 218 ;
    int n;
    int id[20];
    string name[20];
    int aga[20];
    char gender[20];
    string constact[20];
    float salary[20];

    void Under(){
    for(int i = 1; i <= 99; i++){
        if(i==1 ){
            cout <<q;
        }else if(i==8 ){
            cout <<q;
        }else if( i==16 ){
            cout <<q;
        }else if(i==41){
            cout <<q;
        }else if(i==49){
            cout <<q;
        }  else if(i==65){
            cout <<q;
        }else if(i==88){
            cout <<q;
        }else if(i==99){
            cout <<q;
        }else{
        cout <<p;
        }
    }
    cout <<endl;
}
    void on(){
        for(int a=1;a<=99;a++){
            cout <<p;
        }
        cout << endl;
    }
    void input(){
        cout << "\t\t\t\t\t\t\t\t------------------------>> Input <<-----------------------\n\n";
        cout << "\t\t\t\t\t\t\t\t\tHow many employee do you wnat input: ";
        cin >> n;
        for(int i = 0; i < n; i++){
            cout << "\t\t\t\t\t\t\t\t\tNo: " << i+1<<endl;
            cout << "\t\t\t\t\t\t\t\t\tEnter ID: ";cin >> id[i];
            cout << "\t\t\t\t\t\t\t\t\tEnter Name: ";fflush(stdin);cin.ignore();getline(cin,name[i]);
            cout << "\t\t\t\t\t\t\t\t\tEnter Age: ";cin >> aga[i];
            cout << "\t\t\t\t\t\t\t\t\tEnter Gender: ";cin >> gender[i];
            cout << "\t\t\t\t\t\t\t\t\tEnter Contact: ";cin >> constact[i];
            cout << "\t\t\t\t\t\t\t\t\tEnter Salary: ";cin >> salary[i];
        }
    }
    void output(){
        cout << "\t\t\t\t\t\t\t\t--------------------------->> Output <<--------------------------\n\n";
        cout <<"\t\t\t\t\t\t";on();
        cout <<"\t\t\t\t\t\t|  No  |  ID   |\t\b\bName\t\t|  Age  |    Gender\t|\tcontact\t\t\b|  Salary  |\n";
        cout <<"\t\t\t\t\t\t";Under();
        for(int i=0;i<n;i++){
            cout <<"\t\t\t\t\t\t|  " <<i+1<<"   |  "<<id[i]<<"    \b\b\b|\t\b\b\b"<<name[i]<<"\t\t|  "<<aga[i]<<"   \b |\t"<<gender[i]<<"\t|\t"<<constact[i]<<"\t\b|  "<<salary[i]<<"    $ \b|\n";
            cout <<"\t\t\t\t\t\t";Under();
           
        }
    }
};

int main(){
    system("cls");
    system("color 1");
    employee Emp;
    Emp.input();
    system("cls");
    Emp.output();

    return 0;
}