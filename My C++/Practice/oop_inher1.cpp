#include<iostream>
using namespace std;
class BaseClass{
    protected:
    int x,y;
    public:
    void input();
    void output();

};
class DeriveClass : public BaseClass{
    private:
    int z;
    public:
    void readData(){
        input();
        cout<<"Input z: ";cin>>z;
    }
    void display(){
        output();
        cout<<z<<endl;
    }
};
int main(){
    DeriveClass objDerive;
    objDerive.readData();
    objDerive.display();
}