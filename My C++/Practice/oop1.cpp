#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Student{
    private:
    //data member
    int student_id;
    char student_name[30];
    float student_score;
    char student_address[30];
    public:
    //fuction member
    void Input();
    void Output();
    //Accessor
    int getID(){
        return student_id;
    }
    char *getName(){
        return student_name;
    }
    float getScore(){
        return student_score;
    }
    char *getAddress(){
        return student_address;
    }
    //implemet
    void setID(int id){
        student_id=id;
    }
    void setName(char *name){
        strcpy(student_name, name);
    }
    void setScore(float score){
        student_score = score;
    }
    void setAddress(char *address){
        strcpy(student_address , address);
    }
};
void Student::Input(){
    cout<<"Enter Student ID : ";cin>>student_id;
    cout<<"Enter Student Name : ";cin.ignore();cin.sync();cin.get(student_name, 30);
    cout<<"Enter Student Score : ";cin>>student_score;
    cout<<"Enter Student Address : ";cin.ignore();cin.sync();cin.get(student_address, 30);
}
void Student::Output(){
    cout<<student_id<<setw(25)<<student_name<<setw(10)<<student_score<<setw(25)<<student_address<<endl;

}
int main(){
    int n,i,search,b,j,update;
    Student arr[100],temp;
    cout<<"Enter n to precess: ";cin>>n;
    cout<<"----------------------------------------------------------------------"<<endl;
    //input information
    for(i = 0 ;i<n;i++){
        arr[i].Input();
    cout<<"----------------------------------------------------------------------"<<endl;
    }
    cout<<"----------------------------------------------------------------------"<<endl;
    //output information
    cout<<"ID"<<setw(25)<<"Name"<<setw(10)<<"Score"<<setw(15)<<"Address"<<endl;
    for(i = 0;i<n ;i++){
        arr[i].Output();
    cout<<"----------------------------------------------------------------------"<<endl;
    }
    //search
    cout<<"Enter student id to search";cin>>search;
    for(i=0;i<n;i++){
        if(arr[i].getID()==search){
            b=1;
            cout<<"ID"<<setw(25)<<"Name"<<setw(10)<<"Score"<<setw(15)<<"Address"<<endl;
            arr[i].Output();
        }
        if(b=0){
            cout<<"not found"<<search;
        }
    }
    getch();
    //sort
    cout<<"sort information"<<endl;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i].getScore()<arr[j].getScore()){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
            cout<<"ID"<<setw(25)<<"Name"<<setw(10)<<"Score"<<setw(15)<<"Address"<<endl;
            for(i=0;i<n;i++){
                arr[i].Output();
            }
        }
    }
    getch();
    //update
    cout<<"Enter student id to update: ";cin>>update;
    for(i=0;i<n;i++){
        if(arr[i].getID()==update){
            b=1;
            arr[i].Input();
            cout<<"ID"<<setw(25)<<"Name"<<setw(10)<<"Score"<<setw(15)<<"Address"<<endl;
            for(i=0;i<n;i++){
                arr[i].Output();
            }
        }
        if(b=0)
        cout<<"not found id to update"<<endl;
    }
    getch();

}
