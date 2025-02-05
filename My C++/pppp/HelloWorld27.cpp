#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};
int main()
{
    // struct = A structure that group related variables under one name
    //          structs can contain many differen data type (string, int, double, bool, etc.)
    //          members can be access with . "Class Member Access Operatoro"

    student student1;
    student1.name = "Meas Vanny";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Sre SreyLeak";
    student2.gpa = 3.3;
    student2.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';
    
    return 0;
}