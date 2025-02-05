#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string username, password;

    L:
    cout << "========================= Login Section =========================" << endl;
    cout << setw(25) << "Please enter your username:";
    getline(cin, username);
    cout << setw(25) << "Please enter your password:";
    getline(cin, password);

    system("cls");
    if (username != "username" || password != "password") {
        cout << "Invalid username/password...!" << endl;
        goto L;
    }//else{
        //cout<<"Wellcome !"<<endl;
    //}

    cout << "========================= Welcome to Pidor Cafe =========================" << endl;
    cout << "Our Menu: " << endl;
    cout << "1. Coffee" << endl;
    cout << "2. Soft Drinks" << endl;
    cout << "3. Alcohol" << endl;

    cout << "Please make an order.\n";
    char menu;
    cin >> menu;

    switch (menu) {
        case '1': {
            cout << "Coffee Selected" << endl;
            cout << "Our sub-menu:" << endl;
            cout << "A. Hot Coffee" << endl;
            cout << "B. Ice Coffee" << endl;
            cout << "Please select the sub-menu.\n";
            char sub_menu;
            cin >> sub_menu;

            switch (sub_menu) {
                case 'A':
                case 'a': {
                    cout << "Hot Coffee Selected\n";
                    cout << "Hot Coffee types:\n";
                    cout << "a. Hot Latte" << endl;
                    cout << "b. Hot Americano" << endl;
                    cout << "c. Hot Mocha" << endl;
                    cout << "Please select Hot Coffee Types.\n";
                    char hotCoffeeTypes;
                    cin >> hotCoffeeTypes;

                    switch (hotCoffeeTypes) {
                        case 'a':
                        case 'A':
                            cout << "Hot Latte Selected\n";
                            break;
                        case 'b':
                        case 'B':
                            cout << "Hot Americano Selected\n";
                            break;
                        case 'c':
                        case 'C':
                            cout << "Hot Mocha Selected\n";
                            break;
                        default:
                            cout << "Invalid Hot Coffee Type\n";
                            return 1;
                    }

                    int qty;
                    double sugarPercentage, coffeePrice, totalPrice;
                    float discount = 0.0;
                    string customerName;

                    cout << "Sugar Level(Percentage): ";
                    cin >> sugarPercentage;

                    cout << "Ordered By:";
                    cin.ignore(); 
                    getline(cin, customerName);

                    cout << "Please choose Coffee Cup Size: ";
                    char coffeeSize;
                    cin >> coffeeSize;

                    switch (coffeeSize) {
                        case 's':
                        case 'S':
                            coffeePrice = 1.5;
                            cout << "Coffee Price Per Cup:" << coffeePrice << "$" << endl;
                            break;
                        case 'm':
                        case 'M':
                            coffeePrice = 2.5;
                            cout << "Coffee Price Per Cup:" << coffeePrice << "$" << endl;
                            break;
                        case 'l':
                        case 'L':
                            coffeePrice = 3.5;
                            cout << "Coffee Price Per Cup:" << coffeePrice << "$" << endl;
                            break;
                        default:
                            cout << "Invalid Coffee Size...!" << endl;
                            return 1;
                    }

                    cout << "Please enter quantity of Coffee cups:";
                    cin >> qty;

                    if (qty >= 5) {
                        discount = 0.1;
                    }

                    totalPrice = qty * coffeePrice;
                    totalPrice -= discount * totalPrice;

                    cout << "Here is your total Payment:" << totalPrice << "$" << endl;
                    cout << "Menu:" << hotCoffeeTypes << endl;
                    cout << "Sugar:" << sugarPercentage << "%" << endl;
                    cout << "Ordered By:" << customerName << endl;

                    break;
                }
                default:
                    cout << "Invalid selection for sub-menu" << endl;
                    return 1;
            }
            break;
        }
        case '2': {
            cout << "Soft Drinks Selected" << endl;
            cout << "Our sub-menu:" << endl;
            cout << "A. Can Drinks " << endl;
            cout << "B. Juice Drinks" << endl;
            cout << "C. Shaking Drinks" << endl;
            cout << "Please select the sub-menu.\n";
            char sub_menu;
            cin >> sub_menu;

            switch (sub_menu) {
                case 'A':
                case 'a':
                    cout << "Can Drinks Selected\n";
                    break;
                case 'B':
                case 'b':
                    cout << "Juice Drinks Selected\n";
                    break;
                case 'C':
                case 'c':
                    cout << "Shaking DrinksSelected\n";
                    break;
                default:
                    cout << "Invalid selection for sub-menu" << endl;
                    return 1;
            }

            int qty;
            double drinksPrice, totalPrice;
            float discount = 0.0;
            string customerName;

            cout << "Ordered By:";
            cin.ignore(); 
            getline(cin, customerName);

            switch (sub_menu) {
                case 'A':
                case 'a':
                    drinksPrice = 1.5;
                    cout << "Can Drinks Price:" << drinksPrice << "$" << endl;
                    break;
                case 'B':
                case 'b':
                    drinksPrice = 2.5;
                    cout << "Juice Drinks Price:" << drinksPrice << "$" << endl;
                    break;
                case 'C':
                case 'c':
                    drinksPrice = 3.5;
                    cout << "Shaking Drinks Price:" << drinksPrice << "$" << endl;
                    break;
                default:
                    cout << "Invalid Soft Drinks Type...!" << endl;
                    return 1;
            }

            cout << "Please enter quantity of Soft Drinks:";
            cin >> qty;

            if (qty >= 5) {
                discount = 0.1;
            }

            totalPrice = qty * drinksPrice;
            totalPrice -= discount * totalPrice;

            cout << "Here is your total Payment:" << totalPrice << "$" << endl;
            cout << "Menu:" << sub_menu << endl;
            cout << "Ordered By:" << customerName << endl;

            break;
        }
        case '3': {

    int qty;
            double alPrice, totalPrice;
            float discount = 0.0;
            string customerName;        
            cout << "Alcohol Selected" << endl;
            cout << "Our sub-menu:" << endl;
            cout << "A. Wine " << endl;
            cout << "B. Beers" << endl;
            cout << "Please select the sub-menu.\n";
            char sub_menu;
            cin >> sub_menu;

            switch (sub_menu) {
                case 'A':
                case 'a':
                    alPrice = 25;
                    cout << "Wine Price:" << alPrice<< "$" << endl;
                    break;
                case 'B':
                case 'b':
                    alPrice = 10;
                    cout << "Beers Price:" << alPrice << "$" << endl;
                    break;
                default:
                    cout << "Invalid Alcohol Type...!" << endl;
                    return 1;
            }


            cout << "Ordered By:";
            cin.ignore(); 
            getline(cin, customerName);

            

            cout << "Please enter quantity of Alcohol:";
            cin >> qty;

            if (qty >= 5) {
                discount = 0.1;
            }

            totalPrice = qty * alPrice;
            totalPrice -= discount * totalPrice;

            cout << "Here is your total Payment:" << totalPrice << "$" << endl;
            cout << "Menu:" << sub_menu << endl;
            cout << "Ordered By:" << customerName << endl;

            break;
        }
        default:
            cout << "Invalid selection for menu" << endl;
            return 1;
    }

    return 0;
}