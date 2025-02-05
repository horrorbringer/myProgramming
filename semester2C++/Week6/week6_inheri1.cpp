#include <iostream>
#include <string>
using namespace std;

class Teacher{
    protected:
    int id;
    string name;
    char gender;
    int age;
    public:
        void set(){
            cout << "\tEnter ID: ";
            cin >>id;
            cout << "\tEnter Name: ";
            cin >> name;
            cout << "\tEnter Age: ";
            cin >> age;
        }
        void get(){
            cout << "\tID: " << id << endl;
            cout << "\tName: " << name << endl;
            cout << "\tAge: " << age << endl;
        }
};
class Student:public Teacher{
    private:
    float score1, score2, score3, score4, score5;
    float total_score, average;
    public:
        void sets(){
            set();
            cout << "\tEnter Score1: ";cin >> score1;
            cout << "\tEnter Score2: ";cin >> score2;
            cout << "\tEnter Score3: ";cin >> score3;
            cout << "\tEnter Score4: ";cin >> score4;
            cout << "\tEnter Score5: ";cin >> score5;
            total_score = score1 + score2 + score3 + score4 + score5;
            average = total_score / 5;
        }
        void gets(){
            get();
            cout << "\tTotal Score: " << total_score <<endl;
            cout << "\tAverage: " << average << endl;
        }
};
int main(){
    system("cls");
    Student obj;
    cout << "\t----------------> Teacher <-------------------\n";
    obj.set();
    obj.get();
    cout << "\n\t----------------> Student <-------------------\n";
    obj.sets();
    obj.gets();


    return 0;
}