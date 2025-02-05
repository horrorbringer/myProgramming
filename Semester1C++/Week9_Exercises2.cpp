#include <iostream>
#include<conio.h>
using namespace std;
int main(){
    int day;
    cout<<"Enter (1-7) :";cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday";
    break;
    case 2:
        cout<<"Tueday";
    break;
    case 3:
        cout<<"Wenesday";
    break;
    case 4:
        cout<<"Thursday";
    break;
    case 5:
        cout<<"Friday";
    break;
    case 6:
        cout<<"Saturday";
    break;
    case 7:
        cout<<"Sunday";
    break;
    default:
        cout<<"Wrong Input!";
    break;
    }
    return 0;
}