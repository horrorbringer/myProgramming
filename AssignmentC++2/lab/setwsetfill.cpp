#include<iostream>
#include<iomanip>

using namespace std;
class Person{
    private:
        char name[30],gender[10];
        int age;
    public:
        void main_manu();
        void insert();
        void display();  
        void color();    
}p;

int main(){
    system("cls");
    p.main_manu();
   return 0; 
}
void Person::main_manu(){
    int choice;
    while(choice!=3){
        cout << "\n\n                          +-----------------+                +----------------+                +----------------+\n";
        cout << "                          |  [1]. ADD INFO  |                |  [2]. DISPLAY  |                |    [3]. EXIT   |\n";
        cout << "                          +-----------------+                +----------------+                +----------------+\n\n";
        cout << "                                                             SELECT CHOICE    ";cin >> choice;
        switch(choice){
            case 1:
                color();
            break;
            case 2:
                color();
            break;
            case 4:
                color();
            break;
        }
    }
}
void Person::insert(){
    cout << "Enter Name    : ";cin.ignore();cin.getline(name,30);
    cout << "Enter Gender  : ";cin >> gender;
    cout << "Enter age     : ";cin >> age;
}
void Person::display(){
    cout << "                                                 +-------------+-------------+-------------+\n";
    cout << "                                                 | Name Person |      Gender |         Age |\n";
    cout << "                                                 +-------------+-------------+-------------+\n";
    cout << "                                                 |" << setw(12) << setfill(' ') << name << " |";
    cout << setw(12) << setfill(' ') << gender << " |";
    cout << setw(12) << setfill(' ') << age << " |";
    cout << "\n                                                 +-------------+-------------+-------------+\n";
}
void Person::color(){
    int choice;
    ag:
    cout << "\n                    +--------------+-------------+--------------+-------------+------------+---------------+---------------+--------------+\n";
    cout << "                    |  [1]. BLACK  |  [2]. BLUE  |  [3]. GREEN  |  [4]. AQUA  |  [5]. RED  |  [6]. PURPLE  |  [7]. YELLOW  |  [8]. WHILE  |\n";
    cout << "                    +--------------+-------------+--------------+-------------+------------+---------------+---------------+--------------+\n\n";
    cout << "+-------------+--------------------+---------------------+--------------------+-------------+----------------------+----------------------+---------------------+\n";
    cout << "|  [9]. GRAY  |  [10]. LIGHT BLUE  |  [11]. LIGHT GREEN  |  [12]. LIGHT AQUA  |  [13]. RED  |  [14]. LIGHT PURPLE  |  [15]. LIGHT YELLOW  |  [16]. LIGHT WHILE  |\n";
    cout << "+-------------+--------------------+---------------------+--------------------+-------------+----------------------+----------------------+---------------------+\n\n";
    cout << "PLEASE CHOICE: ";cin >> choice;
    switch(choice){
        case 1:system("color 0");break;
        case 2:system("color 1");break;
        case 3:system("color 2");break;
        case 4:system("color 3");break;
        case 5:system("color 4");break;
        case 6:system("color 5");break;
        case 7:system("color 6");break;
        case 8:system("color 7");break;
        case 9:system("color 8");break;
        case 10:system("color 9");break;
        case 11:system("color A");break;
        case 12:system("color B");break;
        case 13:system("color C");break;
        case 14:system("color D");break;
        case 15:system("color E");break;
        case 16:system("color F");break;
        default:goto ag;
    }
}