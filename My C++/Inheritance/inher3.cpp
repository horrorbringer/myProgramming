#include <iostream>
using namespace std;

class C{
    public:
        int z;
        void input(){
            cin>>z;
        }
};
class D : public C{
    public:
    int x;
};
class E : public D{
    public:
    int y;
    void sum(){
        cout << x + y + z;
    }
};

int main(){
    
    E obj;
    cout << "Please Input Z: ";
    obj.input();
    cout<<"Enter x: ";cin>> obj.x;
    cout << "Enter Y: ";cin>>obj.y;
    obj.sum();
    
    return 0;
}