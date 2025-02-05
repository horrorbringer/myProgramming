#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct SPACE{
    int sN,sG,sI,sA,total;
    int i,j,k,n,t;

    int sn(){return sN*2;}
    int sg(){return sG*3;}
    int si(){return sI*4;}
    int sa(){return sA*5;}

    void space(string n, string g, int i, int a){
        sN = (n.length())+2;
        sG = (g.length())+2;
        sI = (to_string(i).length())+2;
        sA = (to_string(a).length())+2;
        total = width(sN,sG,sI,sA);
        
    }

    int width(int a, int b, int c, int d){
        return t = a + b + c + d + 12;
    }
    void on(){
        for(i = 1; i <= total + 1; i++){
            cout << "_";
        }
        cout << endl;
    }
    void bot(){
        for(i = 1; i <= total + 1; i++){
            if(i == 1){
                cout << "|";
            }
            else if(i == sn()+3){
                cout << "|";
            } 
            else if(i == sg()+3){
                cout << "|";
            }
            else if(i == si()+3){
                cout << "|";
            }
            else if(i == sa()+3){
                cout << "|";
            }else {
                cout << "_";
            }
        }
        cout << endl;
    }
};

struct STUDENT{
    SPACE sp1;
    string name, gender;
    int id,age;

    void input(){
        cout << "enter name: ";
        getline(cin , name);
        cout << "enter gender: ";cin >> gender;
        cout << "enter id: ";cin >> id;
        cout << "enter age: ";cin >> age;
        sp1.space(name,gender,id,age);
    }
    void output(){
        sp1.on();
        cout << "|" 
         << setw(sp1.sN) << name 
         << setw(3) << "|" 
         << setw(sp1.sG) << gender 
         << setw(3) << "|"
         << setw(sp1.sI) << id
         << setw(3) << "|"
         << setw (sp1.sA) << age
         << setw(3) << "|";
         cout << endl;
         sp1.bot();
    }
};

int main(){

    system("cls");
    SPACE sp;
    STUDENT stu;
    stu.input();
    stu.output();


    return 0;
}