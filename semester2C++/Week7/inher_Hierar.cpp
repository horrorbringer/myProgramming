#include<iostream>
using namespace std;
class A {
    protected:
    int a = 9;
    public:
    void outA(){
        cout<<"this's base class A\n";
    }
};
class B : public A{
    protected:
    int b = 5;
    public:
    void outB(){
        cout<<"this's derive class B\n";
        cout<<"A + B = "<<a+b<<endl;
    }
};
class C : public A {
    protected:
    int c = 3;
    public:
    void OutC(){
        cout<< "this is derive class C\n";
        cout<<"A + C = "<<a+c<<endl;
        
    }
};
class D : public A{
    protected:
    int d=10;
    public:
    void outD(){
        cout <<"this's derive class D\n";
        cout<<"A + D = "<<a+d<<endl;
    }
};
int main(){
    B b;
    C c;
    D d;

    b.outA();
    b.outB();
    c.OutC();
    d.outD();
    return 0;
}