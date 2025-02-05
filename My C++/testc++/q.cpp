#include <iostream>
using namespace std;
void checkYear(int n);
void checkSex(string gender);
int main(){
    checkSex("Maleo");

    return 0;
}
void checkYear(int n){
    if(n >= 1 && n <= 4)
        cout << "Yes! year = " << n << endl;
    else
        cout << "No! year = " << n << endl;
}
void checkSex(string gender){
    if(gender == "Male" || gender == "Female")
        cout << "Yeah!" << endl;
    else
        cout << "No...";
}