#include<iostream>
#include<string.h>
#include<string>
#include<iomanip>
using namespace std;

class ClssPerson{
    public:
    int id;
    string name;
    char gender;
    public:
    void input(){
        cout<<"ID : ";cin>>id;
        cout<<"Name : ";cin.ignore();getline(cin,name);
        cout<<"Gender : ";cin>>gender;
    }
    void output(){
        cout<<"ID"<<"\t"<<"Name"<<"\t\t"<<"Gender"<<endl;
        cout<<id<<"\t"<<name<<"\t"<<gender<<endl;
    }
};
class Clssworker: public ClssPerson{
    public:
    float salary;
    public:
    void input(){
        ClssPerson::input();
        cout<<"Salary : ";cin>>salary;
    }
    void output(){
        ClssPerson::output();
        cout<<"\t"<<salary;
    }
};
int main(){
    Clssworker worker;
    worker.input();
    worker.output();
    return 0;
}