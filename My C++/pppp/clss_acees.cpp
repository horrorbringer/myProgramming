#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int score;

    void AddStudent(){
        cout<<"Enter name : ";cin>>name;
        cout<<"Enter age : ";cin>>age;
        cout<<"Enter score : ";cin>>score;
    }
    void Dispay(){
        cout<<"Name : "<<"\t\t"<<"Age : "<<"\t\t"<<"score : "<<endl;
        cout<<name<<"\t\t"<<age<<"\t\t"<<score;
    }
};
int main(){
    Student obj1,obj2,obj3;
    obj1.AddStudent();
    obj1.Dispay();
}
