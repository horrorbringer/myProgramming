#include<iostream>
using namespace std;

int main()
{
    // sizeof() = determines this size in bytes of a:
    //            variable, data type, class, objects, etc.

    
    string name = "Bro How are you!";
    double gpa= 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    string students[] = {"Kary", "Nana", "Sary", "Dara"};

    cout<<sizeof(students)/sizeof(string)<<" element\n";
    return 0;
}