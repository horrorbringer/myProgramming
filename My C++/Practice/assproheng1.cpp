#include <iostream>
#include <string> 
using namespace std;
PISETH SOKBUNHENG, [3/20/2024 5:49 PM]
string getDrinkChoice(int drinkChoice){
    switch(drinkChoice)
    {
        case 1:
            return "Americano";
        case 2:
            return "Cappuccino";
        case 3:
            return "Latte";
        case 4:
            return "Passion Soda";
        case 5:
            return "Passion Cream";
        case 6:
            return "Lemon Tea";
        default:
            return "Unknown";
    }
}
double getDrinkPrice(int drinkChoice, string drinkSize){
    switch (drinkChoice)
    {
        case 1:
            if(drinkSize=="S"){
                return 1.5;
            }
            else if(drinkSize=="M"){
                return 2.0;
            }
            else if(drinkSize=="L"){
                return 2.5;
            }
            else if(drinkSize=="XL"){
                return 3.0;
            }
            else{
                return 0;
            }
        case 2:
            if(drinkSize=="S"){
                return 1.8;
            }
            else if(drinkSize=="M"){
                return 2.3;
            }
            else if(drinkSize=="L"){
                return 2.8;
            }
            else if(drinkSize=="XL"){
                return 3.3;
            }
            else{
                return 0;
            }
        case 3:
            if(drinkSize=="S"){
                return 1.9;
            }
            else if(drinkSize=="M"){
                return 2.4;
            }
            else if(drinkSize=="L"){
                return 2.9;
            }
            else if(drinkSize=="XL"){
                return 3.4;
            }
            else{
                return 0;
            }
        case 4:
            if(drinkSize=="S"){
                return 2.0;
            }
            else if(drinkSize=="M"){
                return 2.5;
            }
            else if(drinkSize=="L"){
                return 3.0;
            }
            else if(drinkSize=="XL"){
                return 3.5;
            }
            else{
                return 0;
            }
        case 5:
            if(drinkSize=="S"){
                return 3.0;
            }
            else if(drinkSize=="M"){
                return 3.5;
            }
            else if(drinkSize=="L"){
                return 4.0;
            }
            else if(drinkSize=="XL"){
                return 4.5;
            }
            else{
                return 0;
            }
        case 6:
            if(drinkSize=="S"){
                return 1.5;
            }
            else if(drinkSize=="M"){
                return 2.0;
            }
            else if(drinkSize=="L"){
                return 2.5;
            }
            else if(drinkSize=="XL"){
                return 3.0;
            }
            else{
                return 0;
            }
    }
} 
int main()
{
    string name;
    int drinkChoice;
    int drinkType;
    int drinkSugar;
    string drinkSize;
    cout << "========= ZaZa Cafe' Shop ========\n";
    cout << "Drinks:\t\t\tS\tM\tL\tXL\n\t1.Americano\t1.5$\t2$\t2.5$\t3$";
    cout << "\n\t2.Cappuccino\t1.8\t2.3$\t2.8$\t3.3$";
    cout << "\n\t3.Latte\t\t1.9$\t2.4$\t2.9$\t3.4$";
    cout << "\n\t4.Passion Soda\t2$\t2.5$\t3$\t3.5$";
    cout << "\n\t5.Passion Cream\t3$\t3.5$\t4$\t4.5$";
    cout << "\n\t6.Lemon Tea\t1.5$\t2$\t2.5$\t3$\n";
    start:
    cout << "Pick your choice: ";
    cin >> drinkChoice;
    if(drinkChoice<1  drinkChoice>6){
        goto start;
    }
    name = getDrinkChoice(drinkChoice);
    startSize:
    cout << "Choice your size (S, M, L, XL): ";
    cin >> drinkSize;
    if(drinkSize=="S"){
        goto next;
    }
    else if(drinkSize=="M"){
        goto next;
    }
    else if(drinkSize=="L"){
        goto next;
    }
    else if(drinkSize=="XL"){
        goto next;
    }
    else{
        goto startSize;
    }
    next:
    startType:
    cout << "Option1: Hot\tOption2: Ice\nPick drink option:";
    cin >> drinkType;
    if(drinkType<1  drinkType>2) {
        goto startType;
    }

PISETH SOKBUNHENG, [3/20/2024 5:49 PM]
startSugar:
    cout << "Option1: 0%\tOption2: 20%\tOption3: 50%\tOption4:80%\tOption5: 100%\nPick your sugar %: ";
    cin >> drinkSugar;
    if(drinkSugar<1 || drinkSugar>5){
        goto startSugar;
    }
    double payment = getDrinkPrice(drinkChoice, drinkSize);
    cout << "Your order is " << name << "and size is" << drinkSize << endl;
    cout << "Your payment is " << payment << " $";
    return 0;
}