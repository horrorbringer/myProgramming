#include <iostream>
using namespace std;
class A{
    protected:
        int a = 10;
    public:
        int getA(){
            return a;
        }
        void Aa(){ 
            cout<<"Base class\n";

        }
};
class B : public A{
    protected:
        int b =5;
    public:
        void Bb(){
            Aa();
            cout<<"Dereiv class1\n";
        }
};
class C : public A{
    protected:
        int c = 15;
    public:
        void Cc(){
            cout<<"Derive class2\n";
        }
};
class D : public B , public C {
    private:
        int d = 20;
    public:
    D(){
        Bb();
        Cc();
        cout<<"Derive class3\n";

        c = d + c;

        cout <<"Total B + C + D = "<<b+c+d;
    }
};
int main()
{
    D();
    return 0;

} 