#include<iostream>
using namespace std;
struct studentType{
    string name;
    int id;
    int age;
    char gender;
    int score1,score2,score3,score4,score5;
    double total_score,avg;
    char grade;
};
int main(){
    studentType stu;
    studentType *stuPtr;
    stuPtr = &stu; // point to stu
    cout << "Enter id      :";cin >> stuPtr->id;
    //cout << "Enter id      :";cin >> (*stuPtr).id; another way
    cout << "Enter name    :";cin >> stuPtr->name;
    cout << "Enter gender  :";cin >> stuPtr->gender;
    cout << "Enter score1  :";cin >> stuPtr->score1;
    cout << "Enter score2  :";cin >> stuPtr->score2;
    cout << "Enter score3  :";cin >> stuPtr->score3;
    cout << "Enter score4  :";cin >> stuPtr->score4;
    cout << "Enter score5  :";cin >> stuPtr->score5;
    stuPtr->total_score = stuPtr->score1 + stuPtr->score2 + stuPtr->score3 + stuPtr->score4 + stuPtr->score5;
    stuPtr->age = stuPtr->total_score / 5;
    if(stuPtr->age <= 100){
        stuPtr->grade = 'A';
    }else if(stuPtr->age <= 90){
        stuPtr->grade = 'B';
    }else if(stuPtr->age <= 80){
        stuPtr->grade = 'C';
    }else if(stuPtr->age <= 80){
        stuPtr->grade = 'D';
    }else if(stuPtr->age <= 80){
        stuPtr->grade = 'E';
    }else if(stuPtr->age < 50){
        stuPtr->grade = 'F';
    }
    cout << "Value of stuPtr that point to stu\n";
    cout << "name          : " << stuPtr->name <<endl;
    cout << "id            : " << stuPtr->id <<endl;
    cout << "gender        : " << stuPtr->gender <<endl;
    cout << "total score   : " << stuPtr->total_score <<endl;
    cout << "average       : " << stuPtr->age <<endl;
    cout << "Grade         : " << stuPtr->grade <<endl;
    cout<< "\n    Address          \n";
    cout << "Address id:          " << &stuPtr->id <<endl;
    cout << "Address gender:      " << &stuPtr->gender <<endl;
    cout << "Address score1:      " << &stuPtr->score1 <<endl;
    cout << "Address score2:      " << &stuPtr->score2 <<endl;
    cout << "Address score3:      " << &stuPtr->score3 <<endl;
    cout << "Address score4:      " << &stuPtr->score4 <<endl;
    cout << "Address score5:      " << &stuPtr->score5 <<endl;
    cout << "Address total score: " << &stuPtr->total_score <<endl;
    cout << "Address average:     " << &stuPtr->age <<endl;
    cout << "Address Grade:       " << &stuPtr->grade <<endl;
    return 0;
}