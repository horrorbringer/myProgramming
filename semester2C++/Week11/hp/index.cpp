#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<string>
using namespace std;
void login(){
    string username,password;
    a:
    system("cls");
    cout <<"===========>>|LOGIN|<<============="<<endl;
    cout <<"|Enter Username| : ";
    cin >> username;
    cout <<"|Enter Password| : ";
    cin >> password;
    if (username == "broporn" && password == "2121"){
        cout<<"Loading...";
        for( int i = 1;i <20;i++){
            Sleep(200);
            cout <<".";
        }
        system("cls");
    }
    else{
        cout<<"Loading...";
        for( int i = 1;i <20;i++){
            Sleep(200);
            cout <<".";
        }
        
        system("cls");
        cout<<""<<endl;
        cout<<"wrong username or password!!!";
        cout<<""<<endl;
        system("pause");
        goto a;
    }
}



class Shop4444{
    protected:
        string name[100];
        int id[100];
        int year[100];
        string made_in[100];
        string color[100];
        float price[100];
        bool isfound;
        int op, id_search,op_update,id_update,id_delete;
        int i,n=0,j,x;
    public:
        void input(){
            cout<<"====>>|how much you want to buy| : ";
            cin>>x;
            for(int i=0;i<x;i++){
                cout<<" No="<<i+1<<endl;
                cout<<"Enter Name:";
                cin>>name[n];
                cout<<"Enter Id:";
                cin>>id[n];
                cout<<"Enter Year:";
                cin>>year[n];
                cout<<"Enter Made In:";
                cin>>made_in[n];
                cout<<"Enter Color:";
                cin>>color[n];
                cout<<"Enter Price:";
                cin>>price[n];
                n++;
            }
        }
        void List(){
            for(i=0;i<n;i++){
                cout<<"No="<<i+1<<endl;
                cout<<"Name="<<name[i]<<endl;
                cout<<"Id="<<id[i]<<endl;
                cout<<"Year="<<year[i]<<endl;
                cout<<"Made In="<<made_in[i]<<endl;
                cout<<"Color ="<<color[i]<<endl;
                cout<<"Price="<<price[i]<<"$"<<endl;
            }
        }
        void search(){
                search:
                cout<<"|Enter id to search| : ";
                cin>>id_search;
                isfound=0;
                    for(int i=1;i<n;i++){
                        if(id_search == id[i]){
                            cout<<"No="<<i+1<<endl;
                            cout<<"Porduct Name="<<name<<endl;
                            cout<<"Product id="<<id<<endl;
                            cout<<"Product price="<<price<<"$"<<endl;
                            cout<<"Year="<<year<<endl;
                            cout<<"Made In="<<made_in<<endl;
                            cout<<"Price="<<price<<"$"<<endl;
                            isfound=1;
                            break;
                        }
                    }if(isfound==0){
                        cout<<"Search not fount\n";
                        
                    goto search;
                }
        }
        void update(){
            isfound=0;
            all_update:
            cout<<"====>>Update All<<====\n";
            cout<<" Enter id to update:";
            cin>>id_update;
            for(int i=1;i<n;i++){
                if(id_update == id[i]){
                    cout<<"No="<<i+1<<endl;
                    cout<<"Porduct Name="<<name[i]<<endl;
                    cout<<"Product id="<<id[i]<<endl;
                    cout<<"Enter Year:"<<year[i]<<endl;
                    cout<<"Made In="<<made_in[i]<<endl;
                    cout<<"Product price="<<price[i]<<"$"<<endl;
                    cout<<"Product color="<<color[i]<<endl;
                    cout<<" No="<<i+1<<endl;
                    cout<<"Enter Name:";
                    cin>>name[i];
                    cout<<"Enter Id:";
                    cin>>id[i];
                    cout<<"Enter Year:";
                    cin>>year[i];
                    cout<<"Enter Made In:";
                    cin>>made_in[i];
                    cout<<"Enter Color:";
                    cin>>color[i];
                    cout<<"Enter Price:";
                    cin>>price[i];        
                    isfound=1;
                    break;

                }
        }
        if(isfound == 0){
            cout<<"Id not found\n";
            goto all_update;
        }
        }
        void Delete(){
        delete1:
        cout<<"====>>Delete Product<<====\n";
        cout<<" Enter id to Delete:";
        cin>>id_delete;
            for(i=0;i<n;i++){
                if(id_delete == id[1]);
                    for(int j=i;j<n;j++){
                        id[j] = id[j+1];
                        name[j] = name[j+1];
                        year[j]=year[j];
                        made_in[j]=made_in[i];
                        color[j]=color[j];
                        price[j] = price[j+1];
                    }
                    n--;
                    isfound=1;
            
            }if(isfound==0){
                cout<<"Delete is not complete!!\n";
                
                goto delete1;
            }
        }
};

int main(){
    int option,op;
    Shop4444 Moto,Car,Pass;
    login();
    do{
        cout<<""<<endl;
        cout << " 1.|MOTOBIKE|      2.|CAR|      3.|PASS APP|     4.|EXIT|\n";
        cout << "Please select: ";cin >> option;
        switch(option){
            case 1:
                cout << "1.|INPUT|"<<setw(20);
                cout << "2.|LIST|"<<setw(20);
                cout << "3.|SEARCH|"<<setw(20);
                cout << "4.|UPDATE|"<<setw(20);
                cout << "5.|DELETE|"<<endl;
                cout << "Please choose: ";cin>>op;
                switch (op){
                    case 1:
                    system("cls");
                    Moto.input();
                    break;
                    case 2: 
                    system("cls");
                    Moto.List();
                    break;
                    case 3:
                    system("cls");
                    Moto.search();
                    break;
                    case 4:
                    system("cls");
                    Moto.update();
                    break;
                    case 5:
                    system("cls");
                    Moto.Delete();
                    break;
                }
            break;
            case 2:
                cout << "1.|INPUT|"<<setw(20);
                cout << "2.|LIST|"<<setw(20);
                cout << "3.|SEARCH|"<<setw(20);
                cout << "4.|UPDATE|"<<setw(20);
                cout << "5.|DELETE|"<<endl;
                cout << "Please choose: ";cin>>op;
                
                
               switch (op){
                 case 1:
                system("cls");
                Car.input();
                 break;
                case 2: 
                Car.List();
                system("cls");
                break;
                case 3:
                system("cls");
                Car.search();
                 break;
                case 4:
                system("cls");
                Car.update();
                 break;
                case 5:
                system("cls");
                Car.Delete();
                 break;
                }
            break;
            case 3:
                cout << "1.|INPUT|"<<setw(20);
                cout << "2.|LIST|"<<setw(20);
                cout << "3.|SEARCH|"<<setw(20);
                cout << "4.|UPDATE|"<<setw(20);
                cout << "5.|DELETE|"<<endl;
                cout << "Please choose: ";cin>>op;
                
                switch (op){
                 case 1:
                Pass.input();
                 break;
                case 2: 
                Pass.List();
                break;
                case 3:
                Pass.search();
                 break;
                case 4:
                Pass.update();
                 break;
                case 5:
                Pass.Delete();
                 break;
                }
           break;
        }        
    }while(option !=4);
    return 0;
}