
// Example 2: Access the Inherited Members of the Base Class in Derived Class

#include <iostream>
using namespace std;

class Base {
    public:
        //data member
        int publicVar;

        // member method
        void display(){
            cout << "Value of publicVar: " << publicVar ;
        }
};
class Derived : public Base {
    public:
        // Function to display inherited member
        void displayMember(){
            // accessing public base class member method
            display();
        }
        void modifyMember(int pub){
            this->publicVar = pub;
        }


};

int main(){

    // Create an object of Derived class
    Derived obj;

    // Display the initial values of inherited member
    obj.modifyMember(20);

    // Display the modified values of inherited member
    obj.displayMember();

    return 0;
}