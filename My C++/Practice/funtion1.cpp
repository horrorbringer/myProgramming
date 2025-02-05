#include<iostream>
using namespace std;
class student
{
    int id, math, khmer ,i ,j;
    char name [20], gender;
    public: void AddStudent()
    {
        while(j=1){
        cout<<"Please input option is below\n";
        cout<<"1:Add Score\n";
        cout<<"2: Result\n";
        cout<<"2: Exit\n";
        cout<<"Enter option\n";
        cin>>i;
        switch (i)
        {
            case 1:
            cout<<"Please input ID : ";cin>>id;
            cout<<"Please input Name : ";cin>>name;
            cout<<"Please input Gender : ";cin>>gender;
            cout<<"Please input Math : ";cin>>math;
            cout<<"Please input Khmer : ";cin>>khmer;
            j++;
            break;
            case 2:
            cout<<"ID \t Name \t Gender \t Math \t Khmer\n";
            cout<<id;cout<<"\t";cout<<name;cout<<"\t";cout<<gender;cout<<"\t";cout<<math;cout<<"\t";cout<<khmer;cout<<"\n";
            j++;
            break;
            case 3:
            exit(0);
            j==0;
        }
        }
    }
};
int main()
{
    student obj;
    obj.AddStudent();
}