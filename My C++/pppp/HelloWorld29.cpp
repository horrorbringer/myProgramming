#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wenesday = 3, thursday = 4, friday = 5, saturday =6};

int main()
{
    // enums = a user-defind data type that consists
    //         of paired named-integer constants.
    //         GREAT if you a set of potential options

    Day today = sunday;

    switch(today){
        case sunday: std::cout << "It is Sunday!\n";
                        break;
        case monday: std::cout << "It is Monday!\n";
                        break;
        case tuesday: std::cout << "It is Tuesday!\n";
                        break;
        case wenesday: std::cout << "It is Wenesday!\n";
                        break;
        case thursday: std::cout << "It is Thursday!\n";
                        break;
        case friday: std::cout << "It is Friday!\n";
                        break;
        case saturday: std::cout << "It is Saturday!\n";
                        break;
    }
    return 0;
}