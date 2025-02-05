#include<iostream>
using namespace std;

class Person{
private:
    string Name;
    float Age;
public:
    void Getter(string Gname, float Gage)
    {
        Name = Gname;
        Age = Gage;
    }
    void Setter(string& Sname, float& Sage)
    {
        Sname = Name;
        Sage = Age;
    }
};

int main() {
    string Name;
    float Age ;

    Person First;
    First.Getter("Tom", 232.4);
    First.Setter(Name, Age);

    cout<<Name<<" "<<Age;
    cout<<endl;
}