#include <iostream>
using namespace std;

string name[100];
int age[100],id[100];
char gender[100];

void inputInfo(){}
void ouputInfo(){}
void serchStu(){}
void deleteStu(){}
void updateStu(){}
void sortStu(){}

int main() {

    int op;
    cout << "-----------> Manage Sudent <-------------\n";
    cout << "1.Insert information student\n";
    cout << "2.Display informaition student\n";
    cout << "3.Serch student by id\n";
    cout << "4.Delete student by id\n";
    cout << "5.Updete student by id\n";
    cout << "6.Sort student by id\n";
    cout << "7.Exit\n\n";
    cout << "Please choose option: ";cin>>op;
    switch(op){
        case 1:inputInfo();
            break;
        case 2:ouputInfo();
            break;
        case 3:serchStu();
            break;
        case 4:
        case 5:
        case 6:
    }

    return 0;
}