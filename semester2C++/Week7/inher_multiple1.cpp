#include<iostream>
using namespace std;
class A {
    protected:
    int a = 9;
    public:
    void outA(){
        cout<<"this's base class1\n";
        cout<<"A = "<<a<<endl;
    }
};
class B {
    protected:
    int b = 5;
    public:
    void outB(){
        cout<<"this's base class2\n";
        cout<<"B = "<<b<<endl;
    }
};
class C : public A , public B{
    protected:
    int c = 3;
    public:
    void OutC(){
        cout<< "this is derive\n";
        cout<<"C = "<<c<<endl;
        cout<<"A + B = "<<a+b<<endl;
        cout<<"A + C = "<<a+c<<endl;
    }
};
int main(){
    C j;
    j.outA();
    j.outB();
    j.OutC();
    return 0;
}