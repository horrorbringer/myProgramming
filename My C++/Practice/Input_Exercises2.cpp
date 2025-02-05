#include <iostream>
using namespace std;
int main(){
    int id;
    float rate,hours,salary,total_salary;
    string name;
    cout<<"\t===============>>>Enter Information<<<===============\n";
    cout<<"\tEnter Name : ";
    getline(cin,name);
    cout<<"\tEnter Id : ";
    cin>>id;
    cout<<"\tEnter Rate : ";
    cin>>rate;
    cout<<"\tEnter Hours : ";
    cin>>hours;
    cout<<"\tEnter Salary : ";
    cin>>salary;

    system("cls");
    	
    total_salary = salary * hours;

    cout<<"\t==============>>>Information Employee<<<================\n";
    cout<<"\tEmp-In-Name "<<name<<endl;
    cout<<"\tEmp-In-Id "<<id<<endl;
    cout<<"\tEmp-In-Rate "<<rate<<endl;
    cout<<"\tEmp-In-Hours "<<hours<<endl;
    cout<<"\tEmp-In-Salary "<<salary<<endl;
    cout<<"\tTotal Salary "<<total_salary<<endl;
    return 0;
}