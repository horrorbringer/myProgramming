#include<iostream>
#include<string.h>
#include<string>
#include<iomanip>
using namespace std;
 class ClssStudent{
    public:
        int id;
        char name[30];
        char gender;
        float score;

    public:
        void input(){
            cout<<"Please input ID : ";cin>>id;
            cout<<"Please Input Name : ";cin>>name;
            cout<<"Please input Gender : ";cin>>gender;
            cout<<"Please input Score : ";cin>>score;

        }
        void output(){
            cout<<"ID"<<"\t"<<"Name"<<"\t\t"<<"Gender"<<"\t"<<"Score"<<endl;
            cout<<id<<"\t"<<name<<"\t\t"<<gender<<"\t"<<score<<endl;
            
        }
        ClssStudent() //defualt contructor
        {
            id = 123;
            strcpy(name,"MeasBory");
            gender = 'F';
            score = 99 ;
        }
        ClssStudent (int myid,char *myname ,char mygender,float myscore) // contructor with parameters
        {
            this->id = myid;
            strcpy(name,myname);
            gender = mygender;
            score = myscore;
        }
        ClssStudent (ClssStudent &myobj) //copy contructor
        {
            this->id=myobj.id;
            strcpy(this->name,myobj.name);
            this->gender=myobj.gender;
            this->score=myobj.score;
        }
        void setId(int id){
            this->id=id;
        }
        void setName(char *name){
            strcpy(this->name,name);
        }
 };
 int main(){
    ClssStudent obj1(111,"Kiair",'F',100);

    ClssStudent obj2(obj1);
    obj2.setId(998);
    obj2.setName("Horror");
    obj2.output();

    obj1.setId(231);
    obj1.output();
    // obj.output();
 }