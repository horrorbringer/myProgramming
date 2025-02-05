#include<iostream>
using namespace std;
class student{
    private:
        string firstname,lastname;
        int age, id;
        char gender,grade;
        int score1,score2,score3,score4,score5,total_score;
        float average;
    public:
        string getFirstName(){
            return firstname;
        }
        string getLastName(){
            return lastname;
        }
        int getAge(){
            return age;
        }
        int getId(){
            return id;
        }
        char getGender(){
            return gender;
        }
        char getGrade(){
            return grade;
        }
        int getTotalScore(){
            return total_score;
        }
        float getAverage(){
            return average;
        }
        int getScore1(){
            return score1;
        }
        int getScore2(){
            return score2;
        }
        int getScore3(){
            return score3;
        }
        int getScore4(){
            return score4;
        }
        int getScore5(){
            return score5;
        }
        void setFirstName(string firstName){
            this->firstname = firstName;
        }
        void setLastName(string lastName){
            this->lastname = lastName;
        }
        void setAge(int Age){
            this->age = Age;
        }
        void setId(int Id){
            this->age = Id;
        }
        void setGender(char Gender){
            this->gender = Gender;
        }
        void setGrade(char Grade){
            this->grade = Grade;
        }
        void setTotalScore(int total_Score){
            this->total_score = total_Score;
        }
        void setAverage(float Average){
            this->average = Average;
        }
        void setScore1(int Score1){
            this->score1 = Score1;
        }
        void setScore1(int Score2){
            this->score2 = Score2;
        }
        void setScore1(int Score3){
            this->score3 = Score3;
        }
        void setScore1(int Score4){
            this->score4 = Score4;
        }
        void setScore1(int Score5){
            this->score5 = Score5;
        }
    void Input(){
        cout << "Enter Id: ";cin >> id;
        cout << "Enter First Name: ";cin >> firstname;
        cout << "Enter Last Name: ";cin >> lastname;
    }
};

int main(){


    return 0;
}