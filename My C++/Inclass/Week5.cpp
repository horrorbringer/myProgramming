#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int id,age;
    string name;
    char gender;
    string position,contact;
    float score;

    id = 5687 ;
    name = "Meas Vanny";
    age = 20;
    gender = 'M';
    position = "Student";
    contact = "vannysmilekh@gmail.com";
    score = 84.99;
    cout<<fixed<<showpoint<<setprecision(2) <<endl;
    cout<<"===============>>> My Information <<<===================="<<endl;
    cout<<"|\t\tMy-ID        :"<<id                       <<"\t\t\t|"<<endl;
    cout<<"|\t\tMy-Age       :"<<age                      <<"\t\t\t|"<<endl;
    cout<<"|\t\tMy-Name      :"<<name                       <<"\t\t|"<<endl;
    cout<<"|\t\tMy-Gender    :"<<gender                 <<"\t\t\t\t|"<<endl;
    cout<<"|\t\tMy-Position  :"<<position                 <<"\t\t\t|"<<endl;
    cout<<"|\t\tMy-Contact   :"<<contact                      <<"\t|"<<endl;
    cout<<"|\t\tMy-Score     :"<<score                    <<"\t\t\t|"<<endl;
    cout<<"================>>> Thank you <<<========================"<<endl;
    return 0;

}
