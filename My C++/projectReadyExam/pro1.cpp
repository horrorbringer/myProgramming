#include<iostream>
#include<string>
using namespace std;

class Teacher{
        protected:
            int id,year;
            string Model,Made_in;
            double price;
        public:
            void AddInfoTeacher();
            void DisplayTeacher() const;
    };

class Staff : public Teacher{
    public:
        void AddInfoStaff(){
            AddInfoTeacher();
        }
        void DisplayStaff() const{
            DisplayTeacher();
        }

};

class Student : public Staff{
    public:
        void AddInfoStudent(){
            AddInfoTeacher();
        }
        void DisplayStudent() const{
            DisplayTeacher();
        }
};

void Teacher::AddInfoTeacher(){
    cout << "Enter id        : ";cin >> id;
    cout << "Enter year      : ";cin >> year;
    cout << "Enter Modal     : ";cin >> Model;
    cout << "Enter Made In   : ";cin >> Made_in;
    cout << "Enter Price     : ";cin >> price;
}
void Teacher::DisplayTeacher() const{
    cout << "";
}

void Search(){}
void Update(){}
void Delete(){}

int main(){

    return 0;
}