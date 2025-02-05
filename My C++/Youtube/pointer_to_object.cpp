#include<iostream>
using namespace std;
class A{
    int x,y;
    public:
    void inp(){
        x = 6;
        y = 8;
    }
    void show(){
        cout<<x<<" "<<y;
    }
};

int main(){
    A *obj;
    (*obj).inp();
    obj->show();
    return 0;
}