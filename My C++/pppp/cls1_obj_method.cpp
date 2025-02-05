#include<iostream>
using namespace std;
class test1{
    public:
    void method(){
        int a,b,total;
        cout<<"pleas input number A";cin>>a;
        cout<<"Please inpu number B";cin>>b;
        total = a * b;
        cout<<"result = "<<total<<endl;
        cout<<"Hello World What are you doing?";
    }
};
int main(){
    test1 obj;
    obj.method();
}