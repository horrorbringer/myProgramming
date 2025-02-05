#include<iostream>
#include<string>
using namespace std;

int main(){
    // Create a sructure variable called myStructure
    // can inside and outside int main.
    struct {
        int myNum;
        string myString;
    } myStructure;
    

    // Assign value to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of mySturcture
    cout<<myStructure.myNum<<'\n';
    cout<<myStructure.myString<<'\n';

    return 0;
}
