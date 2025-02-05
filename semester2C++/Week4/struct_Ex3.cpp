#include<iostream>
#include<string>
using namespace std;

struct computer{
    int n;
    string name[30];
    int code[30];
    string color[30];
    string capacity[30];
    string model[30];
    int year[30];
    string made_in[30];
    int ram[30];
    string cpu[30];
    float price[30];

    void order(){
        system("color A");
        cout <<"\n\t------------------>> Order <<------------------\n\n";
        cout << "\tHow many computer do you want: ";cin>> n;
        for(int i=0;i<n;i++){
        cout << "No: "<<i+1<<endl;
        cout << "Enter name: ";cin>>name[i];
        cout << "Enter code: ";cin>>code[i];
        cout << "Enter color: ";cin>>color[i];
        cout << "Enter capacity: ";cin>>capacity[i];
        cout << "Enter model: ";cin>>model[i];
        cout << "Enter year: ";cin>>year[i];
        cout << "Enter made in: ";cin>>made_in[i];
        cout << "Enter ram: ";cin>>ram[i];
        cout << "Enter cpu: ";cin>>cpu[i];
        cout << "Enter price: ";cin>>price[i];
        }
    }

    void dis(){
        for(int i=0;i<n;i++){
            if(price[i] >=1500){
                price[i] *= 0.8;
            }else if(price[i] >= 1300){
                price[i] *= 0.9;
            }else if(price[i] >= 1000){
                price[i] *= 0.95;
            }
        }
    }

    void display(){
        system("color B");
        cout << "\n\t----------------------------> Display <------------------------------\n\n";
        cout << "\tNo\tName\tCode\tColor\tCapacity\tModel\tYear\tMade-in\t   Ram\t\tCpu\t\t\tPrice\n";
        
        for(int i=0;i<n;i++){
        cout << "\t";
            cout <<i+1<<"\t"<<name[i]<<"\t"<<code[i]<<"\t"<<color[i]<<"\t"
                 <<capacity[i]<<"GB\t\t"<<model[i]<<"\t"<<year[i]<<"\t"<<made_in[i]<<"\t   " 
                 <<ram[i]<<"GB\t\t"<<cpu[i]<<"\t\t"<<price[i]<<"$\n";
        }
    } 
};

int main(){
    system("cls");
    computer com1;
    com1.order();
    com1.dis();
    com1.display();

    return 0;
}