#include<iostream>
using namespace std;

int main()
{
    // foreach loop = loop that eases the traversal over an 
    //                iterable data set

    string students[] = {"Kary", "Nana", "Sary", "Dara"};
    int grades[]={34, 55, 65, 33};

    for(string student : students){
        cout<<student<<'\n';
    }
    for(int grade : grades){
        cout<<grade<<'\n';
    }

    return 0;
}