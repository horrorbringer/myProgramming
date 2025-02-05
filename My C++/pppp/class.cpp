#include<iostream>
using namespace std;

class test{
    public:
    int math;
    int khmer;
    int computer;
    string result;
};
int main() { 
    test myobj;
    myobj.math = 100;
    myobj.khmer = 97;
    myobj.computer = 99;
    myobj.result = "pass";
    
    cout<<"Math = "<<myobj.math<<endl;
    cout<<"Khmer = "<<myobj.khmer<<endl;
    cout<<"Computer = "<<myobj.computer<<endl;
    cout<<"Result = "<<myobj.result<<endl;
    
    return 0;
}