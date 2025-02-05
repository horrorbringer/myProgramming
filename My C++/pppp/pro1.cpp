#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
    float p_us,p_kh;
    int op ,qty,price;
    string name;
float proces(int qty,int price){
    if(qty>=5){
        p_us = (qty * price) *0.9;
        p_kh = p_us * 4000;
    }else{
        p_us = qty * price;
        p_kh = p_us * 4000;
    }
    return p_us,p_kh;
}
void input(){
    cout<<"enter name : ";cin.ignore();getline(cin,name);
    cout<<"enter qty : ";cin>>qty;
    cout<<"enter price : ";cin>>price;
    proces(qty,price);
}
int main(){
    do{ 
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"-----------------------------------------------------\n";
    cout<<"1.input"<<"\t\t"<<"2.output"<<"\t\t"<<"0.exit"<<endl;
    cout<<"-----------------------------------------------------\n";
    cout<<"chose option : ";cin>>op;
    switch(op){
        case 1:
            cout<<"\t================ input ==============\n";
            input();
        break;
        case 2:
            cout<<"\t================================================= output ==========================================\n";
            cout<<"\tName"<<"\t\t\t"<<"Qty"<< "\t\t"<< "Price" << "\t\t"<<"Payment USD" << "\t\t"<<"Payment KHR" <<endl;
            cout<< "\t" <<name<< "\t\t"<< qty<< "\t\t"<<price << "\t\t"<<p_us<< "\t\t\t"<<p_kh<<endl;
        break;
    }
    }while(op != 0);
    return 0;
}