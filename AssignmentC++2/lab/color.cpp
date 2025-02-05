#include<iostream>
using namespace std;
// Declare function
void main_menu();
void allColor();
void Color8();

void main_menu(){
    int choice;
    while(choice!=3){
        Menu:
        cout << "+-----------------+                 +---------------+                  +------------+\n";
        cout << "|  [1]_ALL COLOR  |                 |  [2]_COLOR 8  |                  |  [3]_EXIT  |\n";
        cout << "+-----------------+                 +---------------+                  +------------+\n\n";
        cout << "ENTER CHOICE: ";cin >> choice;
        switch(choice){
            case 1:
                allColor();
                cout << "Hello World!\n";
            break;
            case 2:
                Color8();
                cout << "Hello World!\n";
            break;
            case 3:exit(0);break;
            default:goto Menu;break;
        }
    }
}
void allColor(){
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
void Color8(){
    int choice;
    while(choice!=0){
        cout << "+-------------+-------------------+--------------------+-------------------+------------+---------------------+---------------------+--------------------+\n";
        cout << "|  [1]. GRAY  |  [2]. LIGHT BLUE  |  [3]. LIGHT GREEN  |  [4]. LIGHT AQUA  |  [5]. RED  |  [6]. LIGHT PURPLE  |  [7]. LIGHT YELLOW  |  [8]. LIGHT WHILE  |\n";
        cout << "+-------------+-------------------+--------------------+-------------------+------------+---------------------+---------------------+--------------------+\n\n";
        cout << "PLEASE CHOICE: ";cin >> choice;
        switch(choice){
            case 1:system("color 8");break;
            case 2:system("color 9");break;
            case 3:system("color A");break;
            case 4:system("color B");break;
            case 5:system("color C");break;
            case 6:system("color D");break;
            case 7:system("color E");break;
            case 8:system("color F");break;
        }
    }
}
int main(){

    // main_menu();
    Color8();

    return 0;
}