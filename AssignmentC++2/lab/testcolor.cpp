#include<iostream>
using namespace std;

void Color8(){
    int choice;

    // While Loop
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
	system("cls");
}
int main(){
    Color8();
    return 0;
}