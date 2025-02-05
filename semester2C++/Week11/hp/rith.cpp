#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
    

void Login(){
    lebal:
    string username,password,name;
    int id,age;
    char gender;
    
    cout<<"\t         LOGIN          \n";
    cout<<"\t=========================== \n";
    cout<<"\t=                         ="<<endl;
    cout<<"\t= Enter Username: ";cin>>username;
    cout<<"\t=                         ="<<endl;
    cout<<"\t=========================== \n";
    cout<<"\t=                         ="<<endl;
    cout<<"\t= Enter Password: ";cin>>password;
    cout<<"\t=                         ="<<endl;
    cout<<"\t=========================== \n";
    if(username == "RITH" && password == "2512"){
        cout<<endl;
        cout<<"\tWelcome to 168 Auto  Garage..."<<endl;
        getch ();
        system("cls");
    }
    else{
        cout<<"\tWrong Input..."<<endl;
        getch();
        system("cls");
        goto lebal;
    }
}
void Menu(){
    cout<<"=====->>>>>168 Auto  Garage <<<<-======"<<endl;
    cout<<"1.Motorbike"<<endl;
    cout<<"2.Car"<<endl;
    cout<<"3.PassApp"<<endl;
    cout<<"4.Exit"<<endl;
}
void Data(){
    cout<<"1.Input"<<endl;
    cout<<"2.List"<<endl;
    cout<<"3.Search"<<endl;
    cout<<"4.Update"<<endl;
    cout<<"5.Delete"<<endl;
}
class PCTVHD{
public:
    int n,id[10],year[20],price[20];
    string name[20],color[10];
    bool isfound;
public:
    void Input(){
        cout<<"How many  you want?: ";cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Enter ID: ";cin>>id[i];
            cout<<"Enter Name: ";cin>>name[i];
            cout<<"Enter Year: ";cin>>year[i];
            cout<<"Enter Color:";cin>>color[i];
            cout<<"Enter Price USD:  ";cin>>price[i];
        }
    }
    void List(){
        for(int i=0;i<n;i++){
            cout<<"ID: "<<id[i]<<endl;
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Year: "<<year[i]<<endl;
            cout<<"Color: "<<color[i]<<endl;
            cout<<"Price: "<<price[i]<<" $"<<endl;
        }
    }
    void Search(){
        int search_id;search:
        cout<<"*******Search Product"<<endl;
        cout<<"Enter ID you want to search: ";cin>>search_id;
        isfound=0;
        for(int i=0; i<n; i++){
            if(id[i]==search_id){
                cout<<"ID: "<<id[i];
                cout<<"Name: "<<name[i];
                cout<<"Year:"<<year[i];
                cout<<"Color:"<<color[i];
                cout<<"Price:"<<price[i];
                isfound=1;
                break;
            }
        }
        if(isfound==0){
            cout<<"Not Found"<<endl;
            goto search;
        }
    }
    void Update(){
        int id_update;
        Update:
        cout<<"**********Update"<<endl;
        cout<<"Enter ID you want to update: ";cin>>id_update;
                for(int i=0; i<n;i++){
                    if(id[i]==id_update){
                        cout<<"No: "<<i+1<<endl;
                        cout<<"Product Id: "<<id[i]<<endl<<endl;
                        cout<<"Enter New ID: ";cin>>id[i];
                        cout<<"Enter New Name: ";cin>>name[i];
                        cout<<"Enter New Year:";cin>>year[i];
                        cout<<"Enter New Color:";cin>>color[i];
                        cout<<"Enter New Price:";cin>>price[i];
                        isfound=1;
                        cout<<"Update Success"<<endl;
                        break;
                    }
                    if(isfound==0){
                        cout<<" ID Not Found"<<endl;
                        goto Update;
                    }
                }
    }
    void Delete(){
        int id_delete;
        Delete:
            isfound=0;
        cout<<"Enter ID you want to delete: ";cin>>id_delete;
        for(int i=0; i<n;i++){
            if(id_delete==id[i]){
                for(int j=i;j<n;j++){
                id[j]=id[j+1];
                name[j]=name[j+1];
                year[j]=year[j+1];
                color[j]=color[j+1];
                price[j]=price[j+1];
                isfound=1;
                }
                n--;
                cout<<"Delete Success"<<endl;
            }
            }
            if(isfound==0){
                cout<<"ID Not Found"<<endl;
                goto Delete;
            }
    }


public:
    int c;
public:
    void Motor(){
        Data();
        cout<<"Choose Choice: ";cin>>c;
        switch(c){
            case 1:
                cout<<"====>> Input Detail <<===="<<endl;
                Input();
            break;
            case 2:
                cout<<"====>> List Detail <<===="<<endl;
                List();
            break;
            case 3:
                cout<<"====>> Search Product <<===="<<endl;
                Search();
            break;
            case 4:
                cout<<"====>> Update Product <<===="<<endl;
                Update();
            break;
            case 5: 
                cout<<"====>> Delete Product <<===="<<endl;
                Delete();
            break;   
        }
    }
};

int main(){
    PCTVHD MotoB,Lambo,Grap;
        int op;
    Login();
    do{
        system("cls");
        Menu();
        cout<<"Choose Choice: ";cin>>op;
        switch(op){
            case 1:
                MotoB.Motor();
            break;
            case 2:
                Lambo.Motor();
            break;
            case 3:
                Grap.Motor();
            break;  
        }
        getch();
        system("cls");
    }while(op != 4);
    return 0;
}


