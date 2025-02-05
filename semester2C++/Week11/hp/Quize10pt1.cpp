#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
    int n,id[10],year[20],price[20];
    string name[20],color[10];
    bool isfound;

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
    	system("cls");
    	cout<<endl<<endl;
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
    cout<<"\t1.Motorbike"<<endl;
    cout<<"\t2.Car"<<endl;
    cout<<"\t3.PassApp"<<endl;
    cout<<"\t4.Exit"<<endl;
}
void Data(){
    cout<<"\t1.Input"<<endl;
    cout<<"\t2.List"<<endl;
    cout<<"\t3.Search"<<endl;
    cout<<"\t4.Update"<<endl;
    cout<<"\t5.Delete"<<endl;
}
void Input( int n){
    for(int i=0;i<n;i++){
            cout<<"\tEnter ID: ";cin>>id[i];
            cout<<"\tEnter Name: ";cin>>name[i];
            cout<<"\tEnter Year: ";cin>>year[i];
            cout<<"\tEnter Color:";cin>>color[i];
            cout<<"\tEnter Price USD:  ";cin>>price[i];
    }
}
void List(int n){
        for(int i=0;i<n;i++){
            cout<<"\tID: "<<id[i]<<endl;
            cout<<"\tName: "<<name[i]<<endl;
            cout<<"\tYear: "<<year[i]<<endl;
            cout<<"\tColor: "<<color[i]<<endl;
            cout<<"\tPrice: "<<price[i]<<" $"<<endl;
        }
}
void Search(int n){
    int search_id;search:
    cout<<"Enter ID you want to search: ";cin>>search_id;
            isfound=0;
            for(int i=0; i<n; i++){
                if(id[i]==search_id){
                    cout<<"ID: "<<id[i]<<endl;
                    cout<<"Name: "<<name[i]<<endl;
                    cout<<"Year:"<<year[i]<<endl;
                    cout<<"Color:"<<color[i]<<endl;
                    cout<<"Price:"<<price[i]<<endl;
                    isfound=1;
                    break;
                }
            }
            if(isfound==0){
                cout<<"Not Found"<<endl;
                goto search;
            }
}
void Update(int n){
    int id_update;
    Update:
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
void Delete(int n){
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

class Moto{
    protected:
    int n,id[10],year[20],price[20];
    string name[20],color[10];
    bool isfound;
    int c;
    public:
    void Motor(){
        cout<<"*****Data Motorbike"<<endl;
            Data();
            cout<<"Choose Choice: ";cin>>c;
            system("cls");
            switch(c){
                case 1:
                    cout<<"====>> Input Detail <<===="<<endl;
                    cout<<"How many Motorbike you want?: ";cin>>n;
                    Input(n);
                break;
                case 2:
                    cout<<"====>> List Detail <<===="<<endl;
                    List(n);
                break;
                case 3:
                    cout<<"====>> Search Product <<===="<<endl;
                    Search(n);
                break;
                case 4:
                    cout<<"====>> Update Product <<===="<<endl;
                    Update(n);
                break;
                case 5: 
                    cout<<"====>> Delete Product <<===="<<endl;
                    Delete(n);
                break;   
            }
    }
};
class Car{
    protected:
    int n,id[10],year[20],price[20];
    string name[20],color[10];
    bool isfound;
    int c;
    public:
    void Carr(){
        cout<<"*****Data Car"<<endl;
            Data();
            cout<<"Choose Choice: ";cin>>c;
            system("cls");
            switch(c){
                case 1:
                    cout<<"====>> Input Detail <<===="<<endl;
                    cout<<"How many Car you want?: ";cin>>n;
                    Input(n);
                break;
                case 2:
                    cout<<"====>> List Detail <<===="<<endl;
                    List(n);
                break;
                case 3:
                    cout<<"====>> Search Product <<===="<<endl;
                    Search(n);
                break;
                case 4:
                    cout<<"====>> Update Product <<===="<<endl;
                    Update(n);
                break;
                case 5: 
                    cout<<"====>> Delete Product <<===="<<endl;
                    Delete(n);
                break;   
            }
    }
};
class PassApp{
    protected:
    int n,id[10],year[20],price[20];
    string name[20],color[10];
    bool isfound;
    int c;
    public:
    void passapp(){
        cout<<"*****Data PassApp"<<endl;
            Data();
            cout<<"Choose Choice: ";cin>>c;
            system("cls");
            switch(c){
                case 1:
                    cout<<"====>> Input Detail <<===="<<endl;
                    cout<<"How many PassApp you want?: ";cin>>n;
                    Input(n);
                break;
                case 2:
                    cout<<"====>> List Detail <<===="<<endl;
                    List(n);
                break;
                case 3:
                    cout<<"====>> Search Product <<===="<<endl;
                    Search(n);
                break;
                case 4:
                    cout<<"====>> Update Product <<===="<<endl;
                    Update(n);
                break;
                case 5: 
                    cout<<"====>> Delete Product <<===="<<endl;
                    Delete(n);
                break;   
            }
    }
};
int main(){
	Moto m;
	Car c;
	PassApp p;
    int op,os;
    // Login();
    Again:
    Menu();
    cout<<"Choose Option: ";cin>>op;
    system("cls");
    switch(op){
        case 1:
            m.Motor();  
        break;
        case 2: 
            c.Carr();
        break;
        case 3:
            p.passapp();
        break;
        case 4:
            exit(0);
            cout<<"\t168 Auto Garage Thank you Bong."<<endl;
        break;
    }
    getch();
    system("cls");
    goto Again;

    return 0;
}
