#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct student{
    int id;
    string firstname;
    string lastname;
    char gender;
    float testScore;
    float programmingScore;
    double gpa;
};

int main(){
    system("cls");
    system("color 01");
    cout << endl;
    student newstudent;
    newstudent.id = 1001;
    newstudent.firstname = "Sre";
    newstudent.lastname = "SreyLeak";
    newstudent.gender = 'F';
    newstudent.testScore = 90;
    newstudent.programmingScore = 89;
    newstudent.gpa = 3.9;

    cout << fixed << showpoint << setprecision(2);
    cout << "\tStudent ID: " << newstudent.id << endl;
    cout << "\tStudent Name: " << newstudent.firstname << " " << newstudent.lastname <<endl;
    cout << "\tStudent Gender: " << newstudent.gender << endl;
    cout << "\tStudent TesScore: " << newstudent.testScore << endl;
    cout << "\tStudent ProgrammingScore: " << newstudent.programmingScore << endl;
    cout << "\tStudent GPA: " << newstudent.gpa <<endl;
    cout << endl;
    return 0 ;
}