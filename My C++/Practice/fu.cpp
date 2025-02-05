#include<iostream>
using namespace std;
class student
{
    private:
    int math, khmer,computer, total;
    public: void Score(){
        cout<<"Pleas input Math : ";cin>>math;
        cout<<"Pleas input khmer : ";cin>>khmer;
        cout<<"Pleas input computer : ";cin>>computer;
    }
    public: void Output()
    {
        total = math +khmer +computer; 
        cout<<"Your score is : "<<total;
    }
};
int main ()
{
    student obj;
    obj.Score();
    obj.Output();
}