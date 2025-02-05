#include <iostream>
using namespace std;
class student{
    public:
        int id;
        string name;
    public:
        void input(){
            cout << "Enter id: ";
            cin >> id;
            cout << "Enter name: ";
            cin >> name;
        }
        void output(){
            cout << "Id: " << id << endl;
            cout << "Name: " << name << endl << endl;
        }
};

int main(){
    int n=0,num_stu,id_delete;
    student stu[5];

    cout << "How many student do you want: ";
    cin >> num_stu;
    for(int i = 0; i < num_stu; i++){
        cout << "\nNo: " << n << endl;
        stu[i].input();
        n++;
    }
    system("cls");
    for(int i = 0; i < n; i++){
        cout << "No: " << i << endl;
        stu[i].output();
    }
    cout << "\nDelet\n";
    cout << "Enter id: ";
    cin >> id_delete;
    for(int i = 0; i < n; i++){
        if(id_delete == stu[i].id){
            stu[i] = stu[i+1];
            n--;
        }
    }
    cout << "\nOutput\n";
    for(int i = 0; i < n; i++){
        cout << "No: " << i << endl;
        stu[i].output();
    }
    return 0;
}