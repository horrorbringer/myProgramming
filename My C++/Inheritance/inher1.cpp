#include <iostream>
using namespace std;

class Parent {
    public:
        int id_p;
        void printId_p(){
            cout << "Base ID: " << id_p << endl;
        }
};
class Child : public Parent {
    public:
        int id_c;
        void printId_c(){
            cout << "Child ID: " << id_c << endl;
        }
};

int main(){

    Child obj;
    
    cout << "\n---------> Input Parent <-----------\n";
    cout << "Enter Id Parent: "; cin >> obj.id_p ;

    cout << "\n---------> Output Parent <----------\n";
    obj.printId_p();

    cout << "\n---------> Input Child <-----------\n";
    cout << "Enter Id Child: "; cin >> obj.id_c ;

    cout << "\n--------> Output Child <-----------\n";
    obj.printId_c();


    return 0;
}