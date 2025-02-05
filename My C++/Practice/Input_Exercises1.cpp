#include<iostream>
using namespace std;
int main(){
    int age,id;
    char gender;
    char address[30],email[40];
    string name;
    double score;
    cout<<"\t===============>>>Enter Informantion<<<=============\n";
    cout<<"\tEnter Name : ";
    getline(cin,name);
    cout<<"\tEnter Age : ";
    cin>>age;
    cout<<"\tEnter Id : ";
    cin>>id;
    cout<<"\tEnter Gender : ";
    cin>>gender;
    cout<<"\tEnter Address : ";
    cin>>address;
    cout<<"\tEnter Email : ";
    cin>>email;
    cout<<"\tEnter Score : ";
    cin>>score;
    system("cls");
    cout<<"\t================>>>Your Information<<<=================\n";
    cout<<"\tYour In Name "<<name<<endl;
    cout<<"\tYOur In Age "<<age<<endl;
    cout<<"\tYour In Id "<<id<<endl;
    cout<<"\tYour In Gender "<<gender<<endl;
    cout<<"\tYour In Address "<<address<<endl;
    cout<<"\tYour In Email "<<email<<endl;
    cout<<"\tYour In Score "<<score<<endl;
    return 0;
}